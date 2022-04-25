// Copyright 2022 Google LLC
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
// source: google/cloud/eventarc/publishing/v1/publisher.proto

#include "google/cloud/eventarc/publisher_client.h"
#include "google/cloud/eventarc/internal/publisher_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace eventarc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PublisherClient::PublisherClient(
    std::shared_ptr<PublisherConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts),
          eventarc_internal::PublisherDefaultOptions(connection_->options()))) {
}
PublisherClient::~PublisherClient() = default;

StatusOr<google::cloud::eventarc::publishing::v1::
             PublishChannelConnectionEventsResponse>
PublisherClient::PublishChannelConnectionEvents(
    google::cloud::eventarc::publishing::v1::
        PublishChannelConnectionEventsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PublishChannelConnectionEvents(request);
}

StatusOr<google::cloud::eventarc::publishing::v1::PublishEventsResponse>
PublisherClient::PublishEvents(
    google::cloud::eventarc::publishing::v1::PublishEventsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PublishEvents(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc
}  // namespace cloud
}  // namespace google
