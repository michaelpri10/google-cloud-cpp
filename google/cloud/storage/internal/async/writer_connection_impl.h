// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_ASYNC_WRITER_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_ASYNC_WRITER_CONNECTION_IMPL_H

#include "google/cloud/storage/async_writer_connection.h"
#include "google/cloud/storage/internal/hash_function.h"
#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/storage/v2/storage.pb.h>
#include <atomic>
#include <cstdint>
#include <memory>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AsyncWriterConnectionImpl
    : public storage_experimental::AsyncWriterConnection {
 public:
  using StreamingRpc = google::cloud::AsyncStreamingReadWriteRpc<
      google::storage::v2::BidiWriteObjectRequest,
      google::storage::v2::BidiWriteObjectResponse>;

  explicit AsyncWriterConnectionImpl(
      google::cloud::internal::ImmutableOptions options,
      std::unique_ptr<StreamingRpc> impl, std::string upload_id,
      std::shared_ptr<storage::internal::HashFunction> hash_function,
      std::int64_t persisted_size);
  explicit AsyncWriterConnectionImpl(
      google::cloud::internal::ImmutableOptions options,
      std::unique_ptr<StreamingRpc> impl, std::string upload_id,
      std::shared_ptr<storage::internal::HashFunction> hash_function,
      storage::ObjectMetadata metadata);
  ~AsyncWriterConnectionImpl() override;

  void Cancel() override { return impl_->Cancel(); }

  std::string UploadId() const override;
  absl::variant<std::int64_t, storage::ObjectMetadata> PersistedState()
      const override;

  future<Status> Write(storage_experimental::WritePayload payload) override;
  future<StatusOr<storage::ObjectMetadata>> Finalize(
      storage_experimental::WritePayload) override;

 private:
  google::storage::v2::BidiWriteObjectRequest MakeRequest();

  future<Status> OnPartialUpload(std::size_t upload_size,
                                 StatusOr<bool> success);
  future<StatusOr<storage::ObjectMetadata>> OnFinalUpload(
      std::size_t upload_size, StatusOr<bool> success);
  future<StatusOr<std::int64_t>> OnQuery(
      absl::optional<google::storage::v2::BidiWriteObjectResponse> response);
  future<Status> Finish();

  google::cloud::internal::ImmutableOptions options_;
  std::shared_ptr<StreamingRpc> impl_;
  std::string upload_id_;
  std::shared_ptr<storage::internal::HashFunction> hash_function_;
  absl::variant<std::int64_t, storage::ObjectMetadata> persisted_state_;
  std::int64_t offset_ = 0;
  bool first_request_ = true;

  // `Finish()` must be called exactly once. If it has not been called by the
  // time the destructor is reached, then the destructor will arrange for a
  // call.
  bool finish_called_ = false;

  // We need to extend the lifetime of `impl_` until `Finish()` is called and
  // completed. We cannot block in the destructor (that results in deadlocks).
  // Instead, the destructor creates an object that extends the lifetime of
  // `impl_` until `finished_` is satisfied. The destructor arranges things such
  // that `on_finish_` is called when `Finish()` is completed.
  google::cloud::promise<void> on_finish_;
  google::cloud::future<void> finished_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_ASYNC_WRITER_CONNECTION_IMPL_H
