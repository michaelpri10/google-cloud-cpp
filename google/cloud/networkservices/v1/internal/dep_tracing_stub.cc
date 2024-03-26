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

#include "google/cloud/networkservices/v1/internal/dep_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace networkservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DepServiceTracingStub::DepServiceTracingStub(
    std::shared_ptr<DepServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::networkservices::v1::ListLbTrafficExtensionsResponse>
DepServiceTracingStub::ListLbTrafficExtensions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkservices::v1::ListLbTrafficExtensionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.DepService", "ListLbTrafficExtensions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListLbTrafficExtensions(context, options, request));
}

StatusOr<google::cloud::networkservices::v1::LbTrafficExtension>
DepServiceTracingStub::GetLbTrafficExtension(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkservices::v1::GetLbTrafficExtensionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.DepService", "GetLbTrafficExtension");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetLbTrafficExtension(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DepServiceTracingStub::AsyncCreateLbTrafficExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkservices::v1::CreateLbTrafficExtensionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.DepService", "CreateLbTrafficExtension");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateLbTrafficExtension(cq, context,
                                                 std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DepServiceTracingStub::AsyncUpdateLbTrafficExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkservices::v1::UpdateLbTrafficExtensionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.DepService", "UpdateLbTrafficExtension");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateLbTrafficExtension(cq, context,
                                                 std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DepServiceTracingStub::AsyncDeleteLbTrafficExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkservices::v1::DeleteLbTrafficExtensionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.DepService", "DeleteLbTrafficExtension");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteLbTrafficExtension(cq, context,
                                                 std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::networkservices::v1::ListLbRouteExtensionsResponse>
DepServiceTracingStub::ListLbRouteExtensions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkservices::v1::ListLbRouteExtensionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.DepService", "ListLbRouteExtensions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListLbRouteExtensions(context, options, request));
}

StatusOr<google::cloud::networkservices::v1::LbRouteExtension>
DepServiceTracingStub::GetLbRouteExtension(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkservices::v1::GetLbRouteExtensionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.DepService", "GetLbRouteExtension");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetLbRouteExtension(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DepServiceTracingStub::AsyncCreateLbRouteExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkservices::v1::CreateLbRouteExtensionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.DepService", "CreateLbRouteExtension");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateLbRouteExtension(cq, context, std::move(options),
                                               request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DepServiceTracingStub::AsyncUpdateLbRouteExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkservices::v1::UpdateLbRouteExtensionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.DepService", "UpdateLbRouteExtension");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateLbRouteExtension(cq, context, std::move(options),
                                               request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DepServiceTracingStub::AsyncDeleteLbRouteExtension(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkservices::v1::DeleteLbRouteExtensionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.DepService", "DeleteLbRouteExtension");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteLbRouteExtension(cq, context, std::move(options),
                                               request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DepServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> DepServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DepServiceStub> MakeDepServiceTracingStub(
    std::shared_ptr<DepServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DepServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkservices_v1_internal
}  // namespace cloud
}  // namespace google
