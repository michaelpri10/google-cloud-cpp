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
// source: google/cloud/networkservices/v1/dep.proto

#include "google/cloud/networkservices/v1/internal/dep_connection_impl.h"
#include "google/cloud/networkservices/v1/internal/dep_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networkservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<networkservices_v1::DepServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<networkservices_v1::DepServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<networkservices_v1::DepServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<networkservices_v1::DepServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<networkservices_v1::DepServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<networkservices_v1::DepServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

DepServiceConnectionImpl::DepServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<networkservices_v1_internal::DepServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      DepServiceConnection::options())) {}

StreamRange<google::cloud::networkservices::v1::LbTrafficExtension>
DepServiceConnectionImpl::ListLbTrafficExtensions(
    google::cloud::networkservices::v1::ListLbTrafficExtensionsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListLbTrafficExtensions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::networkservices::v1::LbTrafficExtension>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<networkservices_v1::DepServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options, google::cloud::networkservices::v1::
                                      ListLbTrafficExtensionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::networkservices::v1::
                       ListLbTrafficExtensionsRequest const& request) {
              return stub->ListLbTrafficExtensions(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::networkservices::v1::ListLbTrafficExtensionsResponse
             r) {
        std::vector<google::cloud::networkservices::v1::LbTrafficExtension>
            result(r.lb_traffic_extensions().size());
        auto& messages = *r.mutable_lb_traffic_extensions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>
DepServiceConnectionImpl::GetLbTrafficExtension(
    google::cloud::networkservices::v1::GetLbTrafficExtensionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetLbTrafficExtension(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networkservices::v1::
                 GetLbTrafficExtensionRequest const& request) {
        return stub_->GetLbTrafficExtension(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>>
DepServiceConnectionImpl::CreateLbTrafficExtension(
    google::cloud::networkservices::v1::CreateLbTrafficExtensionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateLbTrafficExtension(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkservices::v1::LbTrafficExtension>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::networkservices::v1::
                         CreateLbTrafficExtensionRequest const& request) {
        return stub->AsyncCreateLbTrafficExtension(cq, std::move(context),
                                                   std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::networkservices::v1::LbTrafficExtension>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>>
DepServiceConnectionImpl::UpdateLbTrafficExtension(
    google::cloud::networkservices::v1::UpdateLbTrafficExtensionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateLbTrafficExtension(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkservices::v1::LbTrafficExtension>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::networkservices::v1::
                         UpdateLbTrafficExtensionRequest const& request) {
        return stub->AsyncUpdateLbTrafficExtension(cq, std::move(context),
                                                   std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::networkservices::v1::LbTrafficExtension>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
DepServiceConnectionImpl::DeleteLbTrafficExtension(
    google::cloud::networkservices::v1::DeleteLbTrafficExtensionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteLbTrafficExtension(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkservices::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::networkservices::v1::
                         DeleteLbTrafficExtensionRequest const& request) {
        return stub->AsyncDeleteLbTrafficExtension(cq, std::move(context),
                                                   std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::networkservices::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::networkservices::v1::LbRouteExtension>
DepServiceConnectionImpl::ListLbRouteExtensions(
    google::cloud::networkservices::v1::ListLbRouteExtensionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListLbRouteExtensions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::networkservices::v1::LbRouteExtension>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<networkservices_v1::DepServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options, google::cloud::networkservices::v1::
                                      ListLbRouteExtensionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::networkservices::v1::
                       ListLbRouteExtensionsRequest const& request) {
              return stub->ListLbRouteExtensions(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::networkservices::v1::ListLbRouteExtensionsResponse r) {
        std::vector<google::cloud::networkservices::v1::LbRouteExtension>
            result(r.lb_route_extensions().size());
        auto& messages = *r.mutable_lb_route_extensions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::networkservices::v1::LbRouteExtension>
DepServiceConnectionImpl::GetLbRouteExtension(
    google::cloud::networkservices::v1::GetLbRouteExtensionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetLbRouteExtension(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::networkservices::v1::GetLbRouteExtensionRequest const&
              request) {
        return stub_->GetLbRouteExtension(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::networkservices::v1::LbRouteExtension>>
DepServiceConnectionImpl::CreateLbRouteExtension(
    google::cloud::networkservices::v1::CreateLbRouteExtensionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateLbRouteExtension(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkservices::v1::LbRouteExtension>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::networkservices::v1::
                         CreateLbRouteExtensionRequest const& request) {
        return stub->AsyncCreateLbRouteExtension(cq, std::move(context),
                                                 std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::networkservices::v1::LbRouteExtension>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkservices::v1::LbRouteExtension>>
DepServiceConnectionImpl::UpdateLbRouteExtension(
    google::cloud::networkservices::v1::UpdateLbRouteExtensionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateLbRouteExtension(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkservices::v1::LbRouteExtension>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::networkservices::v1::
                         UpdateLbRouteExtensionRequest const& request) {
        return stub->AsyncUpdateLbRouteExtension(cq, std::move(context),
                                                 std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::networkservices::v1::LbRouteExtension>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
DepServiceConnectionImpl::DeleteLbRouteExtension(
    google::cloud::networkservices::v1::DeleteLbRouteExtensionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteLbRouteExtension(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkservices::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::networkservices::v1::
                         DeleteLbRouteExtensionRequest const& request) {
        return stub->AsyncDeleteLbRouteExtension(cq, std::move(context),
                                                 std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::networkservices::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkservices_v1_internal
}  // namespace cloud
}  // namespace google
