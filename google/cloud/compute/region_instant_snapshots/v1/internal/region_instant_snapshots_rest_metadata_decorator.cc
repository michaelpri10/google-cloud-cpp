// Copyright 2024 Google LLC
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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source:
// google/cloud/compute/region_instant_snapshots/v1/region_instant_snapshots.proto

#include "google/cloud/compute/region_instant_snapshots/v1/internal/region_instant_snapshots_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_instant_snapshots_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionInstantSnapshotsRestMetadata::RegionInstantSnapshotsRestMetadata(
    std::shared_ptr<RegionInstantSnapshotsRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstantSnapshotsRestMetadata::AsyncDeleteInstantSnapshot(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        DeleteInstantSnapshotRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteInstantSnapshot(cq, std::move(rest_context),
                                            std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstantSnapshotsRestMetadata::DeleteInstantSnapshot(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        DeleteInstantSnapshotRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->DeleteInstantSnapshot(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::InstantSnapshot>
RegionInstantSnapshotsRestMetadata::GetInstantSnapshot(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        GetInstantSnapshotRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetInstantSnapshot(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionInstantSnapshotsRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        GetIamPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetIamPolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstantSnapshotsRestMetadata::AsyncInsertInstantSnapshot(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        InsertInstantSnapshotRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertInstantSnapshot(cq, std::move(rest_context),
                                            std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstantSnapshotsRestMetadata::InsertInstantSnapshot(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        InsertInstantSnapshotRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->InsertInstantSnapshot(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::InstantSnapshotList>
RegionInstantSnapshotsRestMetadata::ListRegionInstantSnapshots(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        ListRegionInstantSnapshotsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListRegionInstantSnapshots(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionInstantSnapshotsRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        SetIamPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->SetIamPolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstantSnapshotsRestMetadata::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        SetLabelsRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncSetLabels(cq, std::move(rest_context), std::move(options),
                                request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstantSnapshotsRestMetadata::SetLabels(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        SetLabelsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->SetLabels(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
RegionInstantSnapshotsRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->TestIamPermissions(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstantSnapshotsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> RegionInstantSnapshotsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void RegionInstantSnapshotsRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instant_snapshots_v1_internal
}  // namespace cloud
}  // namespace google
