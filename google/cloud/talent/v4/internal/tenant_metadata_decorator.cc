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
// source: google/cloud/talent/v4/tenant_service.proto

#include "google/cloud/talent/v4/internal/tenant_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/talent/v4/tenant_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TenantServiceMetadata::TenantServiceMetadata(
    std::shared_ptr<TenantServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::talent::v4::Tenant> TenantServiceMetadata::CreateTenant(
    grpc::ClientContext& context,
    google::cloud::talent::v4::CreateTenantRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->CreateTenant(context, request);
}

StatusOr<google::cloud::talent::v4::Tenant> TenantServiceMetadata::GetTenant(
    grpc::ClientContext& context,
    google::cloud::talent::v4::GetTenantRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetTenant(context, request);
}

StatusOr<google::cloud::talent::v4::Tenant> TenantServiceMetadata::UpdateTenant(
    grpc::ClientContext& context,
    google::cloud::talent::v4::UpdateTenantRequest const& request) {
  SetMetadata(context, absl::StrCat("tenant.name=", request.tenant().name()));
  return child_->UpdateTenant(context, request);
}

Status TenantServiceMetadata::DeleteTenant(
    grpc::ClientContext& context,
    google::cloud::talent::v4::DeleteTenantRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->DeleteTenant(context, request);
}

StatusOr<google::cloud::talent::v4::ListTenantsResponse>
TenantServiceMetadata::ListTenants(
    grpc::ClientContext& context,
    google::cloud::talent::v4::ListTenantsRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListTenants(context, request);
}

void TenantServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void TenantServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google
