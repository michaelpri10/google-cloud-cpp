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
// source: google/cloud/vmmigration/v1/vmmigration.proto

#include "google/cloud/vmmigration/v1/internal/vm_migration_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/vmmigration/v1/vmmigration.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vmmigration_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VmMigrationMetadata::VmMigrationMetadata(
    std::shared_ptr<VmMigrationStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::vmmigration::v1::ListSourcesResponse>
VmMigrationMetadata::ListSources(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListSourcesRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListSources(context, request);
}

StatusOr<google::cloud::vmmigration::v1::Source> VmMigrationMetadata::GetSource(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetSourceRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetSource(context, request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncCreateSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::CreateSourceRequest const& request) {
  SetMetadata(*context, absl::StrCat("parent=", request.parent()));
  return child_->AsyncCreateSource(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncUpdateSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::UpdateSourceRequest const& request) {
  SetMetadata(*context, absl::StrCat("source.name=", request.source().name()));
  return child_->AsyncUpdateSource(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncDeleteSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::DeleteSourceRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncDeleteSource(cq, std::move(context), request);
}

StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>
VmMigrationMetadata::FetchInventory(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::FetchInventoryRequest const& request) {
  SetMetadata(context, absl::StrCat("source=", request.source()));
  return child_->FetchInventory(context, request);
}

StatusOr<google::cloud::vmmigration::v1::ListUtilizationReportsResponse>
VmMigrationMetadata::ListUtilizationReports(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListUtilizationReportsRequest const&
        request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListUtilizationReports(context, request);
}

StatusOr<google::cloud::vmmigration::v1::UtilizationReport>
VmMigrationMetadata::GetUtilizationReport(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetUtilizationReportRequest const&
        request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetUtilizationReport(context, request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncCreateUtilizationReport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
        request) {
  SetMetadata(*context, absl::StrCat("parent=", request.parent()));
  return child_->AsyncCreateUtilizationReport(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncDeleteUtilizationReport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
        request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncDeleteUtilizationReport(cq, std::move(context), request);
}

StatusOr<google::cloud::vmmigration::v1::ListDatacenterConnectorsResponse>
VmMigrationMetadata::ListDatacenterConnectors(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest const&
        request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListDatacenterConnectors(context, request);
}

StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>
VmMigrationMetadata::GetDatacenterConnector(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&
        request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetDatacenterConnector(context, request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncCreateDatacenterConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
        request) {
  SetMetadata(*context, absl::StrCat("parent=", request.parent()));
  return child_->AsyncCreateDatacenterConnector(cq, std::move(context),
                                                request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncDeleteDatacenterConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
        request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncDeleteDatacenterConnector(cq, std::move(context),
                                                request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncUpgradeAppliance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::UpgradeApplianceRequest const& request) {
  SetMetadata(*context, absl::StrCat("datacenter_connector=",
                                     request.datacenter_connector()));
  return child_->AsyncUpgradeAppliance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncCreateMigratingVm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request) {
  SetMetadata(*context, absl::StrCat("parent=", request.parent()));
  return child_->AsyncCreateMigratingVm(cq, std::move(context), request);
}

StatusOr<google::cloud::vmmigration::v1::ListMigratingVmsResponse>
VmMigrationMetadata::ListMigratingVms(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListMigratingVmsRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListMigratingVms(context, request);
}

StatusOr<google::cloud::vmmigration::v1::MigratingVm>
VmMigrationMetadata::GetMigratingVm(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetMigratingVmRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetMigratingVm(context, request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncUpdateMigratingVm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request) {
  SetMetadata(*context, absl::StrCat("migrating_vm.name=",
                                     request.migrating_vm().name()));
  return child_->AsyncUpdateMigratingVm(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncDeleteMigratingVm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncDeleteMigratingVm(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncStartMigration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::StartMigrationRequest const& request) {
  SetMetadata(*context, absl::StrCat("migrating_vm=", request.migrating_vm()));
  return child_->AsyncStartMigration(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncResumeMigration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::ResumeMigrationRequest const& request) {
  SetMetadata(*context, absl::StrCat("migrating_vm=", request.migrating_vm()));
  return child_->AsyncResumeMigration(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncPauseMigration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::PauseMigrationRequest const& request) {
  SetMetadata(*context, absl::StrCat("migrating_vm=", request.migrating_vm()));
  return child_->AsyncPauseMigration(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncFinalizeMigration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request) {
  SetMetadata(*context, absl::StrCat("migrating_vm=", request.migrating_vm()));
  return child_->AsyncFinalizeMigration(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncCreateCloneJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::CreateCloneJobRequest const& request) {
  SetMetadata(*context, absl::StrCat("parent=", request.parent()));
  return child_->AsyncCreateCloneJob(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncCancelCloneJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::CancelCloneJobRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncCancelCloneJob(cq, std::move(context), request);
}

StatusOr<google::cloud::vmmigration::v1::ListCloneJobsResponse>
VmMigrationMetadata::ListCloneJobs(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListCloneJobsRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListCloneJobs(context, request);
}

StatusOr<google::cloud::vmmigration::v1::CloneJob>
VmMigrationMetadata::GetCloneJob(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetCloneJobRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetCloneJob(context, request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncCreateCutoverJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request) {
  SetMetadata(*context, absl::StrCat("parent=", request.parent()));
  return child_->AsyncCreateCutoverJob(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncCancelCutoverJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncCancelCutoverJob(cq, std::move(context), request);
}

StatusOr<google::cloud::vmmigration::v1::ListCutoverJobsResponse>
VmMigrationMetadata::ListCutoverJobs(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListCutoverJobsRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListCutoverJobs(context, request);
}

StatusOr<google::cloud::vmmigration::v1::CutoverJob>
VmMigrationMetadata::GetCutoverJob(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetCutoverJobRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetCutoverJob(context, request);
}

StatusOr<google::cloud::vmmigration::v1::ListGroupsResponse>
VmMigrationMetadata::ListGroups(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListGroupsRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListGroups(context, request);
}

StatusOr<google::cloud::vmmigration::v1::Group> VmMigrationMetadata::GetGroup(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetGroupRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetGroup(context, request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncCreateGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::CreateGroupRequest const& request) {
  SetMetadata(*context, absl::StrCat("parent=", request.parent()));
  return child_->AsyncCreateGroup(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncUpdateGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::UpdateGroupRequest const& request) {
  SetMetadata(*context, absl::StrCat("group.name=", request.group().name()));
  return child_->AsyncUpdateGroup(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncDeleteGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::DeleteGroupRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncDeleteGroup(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncAddGroupMigration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request) {
  SetMetadata(*context, absl::StrCat("group=", request.group()));
  return child_->AsyncAddGroupMigration(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncRemoveGroupMigration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
        request) {
  SetMetadata(*context, absl::StrCat("group=", request.group()));
  return child_->AsyncRemoveGroupMigration(cq, std::move(context), request);
}

StatusOr<google::cloud::vmmigration::v1::ListTargetProjectsResponse>
VmMigrationMetadata::ListTargetProjects(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListTargetProjectsRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListTargetProjects(context, request);
}

StatusOr<google::cloud::vmmigration::v1::TargetProject>
VmMigrationMetadata::GetTargetProject(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetTargetProjectRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetTargetProject(context, request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncCreateTargetProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::CreateTargetProjectRequest const& request) {
  SetMetadata(*context, absl::StrCat("parent=", request.parent()));
  return child_->AsyncCreateTargetProject(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncUpdateTargetProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::UpdateTargetProjectRequest const& request) {
  SetMetadata(*context, absl::StrCat("target_project.name=",
                                     request.target_project().name()));
  return child_->AsyncUpdateTargetProject(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncDeleteTargetProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vmmigration::v1::DeleteTargetProjectRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncDeleteTargetProject(cq, std::move(context), request);
}

StatusOr<google::cloud::vmmigration::v1::ListReplicationCyclesResponse>
VmMigrationMetadata::ListReplicationCycles(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListReplicationCyclesRequest const&
        request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListReplicationCycles(context, request);
}

StatusOr<google::cloud::vmmigration::v1::ReplicationCycle>
VmMigrationMetadata::GetReplicationCycle(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetReplicationCycleRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetReplicationCycle(context, request);
}

future<StatusOr<google::longrunning::Operation>>
VmMigrationMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> VmMigrationMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void VmMigrationMetadata::SetMetadata(grpc::ClientContext& context,
                                      std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void VmMigrationMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace vmmigration_v1_internal
}  // namespace cloud
}  // namespace google
