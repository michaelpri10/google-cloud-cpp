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
// source: google/cloud/notebooks/v1/service.proto

#include "google/cloud/notebooks/notebook_client.h"
#include "google/cloud/notebooks/internal/notebook_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace notebooks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NotebookServiceClient::NotebookServiceClient(
    std::shared_ptr<NotebookServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts), notebooks_internal::NotebookServiceDefaultOptions(
                               connection_->options()))) {}
NotebookServiceClient::~NotebookServiceClient() = default;

StreamRange<google::cloud::notebooks::v1::Instance>
NotebookServiceClient::ListInstances(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::ListInstancesRequest request;
  request.set_parent(parent);
  return connection_->ListInstances(request);
}

StreamRange<google::cloud::notebooks::v1::Instance>
NotebookServiceClient::ListInstances(
    google::cloud::notebooks::v1::ListInstancesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstances(std::move(request));
}

StatusOr<google::cloud::notebooks::v1::Instance>
NotebookServiceClient::GetInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::GetInstanceRequest request;
  request.set_name(name);
  return connection_->GetInstance(request);
}

StatusOr<google::cloud::notebooks::v1::Instance>
NotebookServiceClient::GetInstance(
    google::cloud::notebooks::v1::GetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstance(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::CreateInstance(
    std::string const& parent,
    google::cloud::notebooks::v1::Instance const& instance,
    std::string const& instance_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::CreateInstanceRequest request;
  request.set_parent(parent);
  *request.mutable_instance() = instance;
  request.set_instance_id(instance_id);
  return connection_->CreateInstance(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::CreateInstance(
    google::cloud::notebooks::v1::CreateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::RegisterInstance(
    google::cloud::notebooks::v1::RegisterInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RegisterInstance(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::SetInstanceAccelerator(
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetInstanceAccelerator(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::SetInstanceMachineType(
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetInstanceMachineType(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::UpdateInstanceConfig(
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstanceConfig(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::UpdateShieldedInstanceConfig(
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateShieldedInstanceConfig(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::SetInstanceLabels(
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetInstanceLabels(request);
}

StatusOr<google::cloud::notebooks::v1::UpdateInstanceMetadataItemsResponse>
NotebookServiceClient::UpdateInstanceMetadataItems(
    google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstanceMetadataItems(request);
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceClient::DeleteInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::DeleteInstanceRequest request;
  request.set_name(name);
  return connection_->DeleteInstance(request);
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceClient::DeleteInstance(
    google::cloud::notebooks::v1::DeleteInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::StartInstance(
    google::cloud::notebooks::v1::StartInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartInstance(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::StopInstance(
    google::cloud::notebooks::v1::StopInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopInstance(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::ResetInstance(
    google::cloud::notebooks::v1::ResetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResetInstance(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::ReportInstanceInfo(
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ReportInstanceInfo(request);
}

StatusOr<google::cloud::notebooks::v1::IsInstanceUpgradeableResponse>
NotebookServiceClient::IsInstanceUpgradeable(
    google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->IsInstanceUpgradeable(request);
}

StatusOr<google::cloud::notebooks::v1::GetInstanceHealthResponse>
NotebookServiceClient::GetInstanceHealth(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::GetInstanceHealthRequest request;
  request.set_name(name);
  return connection_->GetInstanceHealth(request);
}

StatusOr<google::cloud::notebooks::v1::GetInstanceHealthResponse>
NotebookServiceClient::GetInstanceHealth(
    google::cloud::notebooks::v1::GetInstanceHealthRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstanceHealth(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::UpgradeInstance(
    google::cloud::notebooks::v1::UpgradeInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpgradeInstance(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::RollbackInstance(
    google::cloud::notebooks::v1::RollbackInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RollbackInstance(request);
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceClient::UpgradeInstanceInternal(
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpgradeInstanceInternal(request);
}

StreamRange<google::cloud::notebooks::v1::Environment>
NotebookServiceClient::ListEnvironments(std::string const& parent,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::ListEnvironmentsRequest request;
  request.set_parent(parent);
  return connection_->ListEnvironments(request);
}

StreamRange<google::cloud::notebooks::v1::Environment>
NotebookServiceClient::ListEnvironments(
    google::cloud::notebooks::v1::ListEnvironmentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEnvironments(std::move(request));
}

StatusOr<google::cloud::notebooks::v1::Environment>
NotebookServiceClient::GetEnvironment(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::GetEnvironmentRequest request;
  request.set_name(name);
  return connection_->GetEnvironment(request);
}

StatusOr<google::cloud::notebooks::v1::Environment>
NotebookServiceClient::GetEnvironment(
    google::cloud::notebooks::v1::GetEnvironmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEnvironment(request);
}

future<StatusOr<google::cloud::notebooks::v1::Environment>>
NotebookServiceClient::CreateEnvironment(
    std::string const& parent,
    google::cloud::notebooks::v1::Environment const& environment,
    std::string const& environment_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::CreateEnvironmentRequest request;
  request.set_parent(parent);
  *request.mutable_environment() = environment;
  request.set_environment_id(environment_id);
  return connection_->CreateEnvironment(request);
}

future<StatusOr<google::cloud::notebooks::v1::Environment>>
NotebookServiceClient::CreateEnvironment(
    google::cloud::notebooks::v1::CreateEnvironmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEnvironment(request);
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceClient::DeleteEnvironment(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::DeleteEnvironmentRequest request;
  request.set_name(name);
  return connection_->DeleteEnvironment(request);
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceClient::DeleteEnvironment(
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEnvironment(request);
}

StreamRange<google::cloud::notebooks::v1::Schedule>
NotebookServiceClient::ListSchedules(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::ListSchedulesRequest request;
  request.set_parent(parent);
  return connection_->ListSchedules(request);
}

StreamRange<google::cloud::notebooks::v1::Schedule>
NotebookServiceClient::ListSchedules(
    google::cloud::notebooks::v1::ListSchedulesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSchedules(std::move(request));
}

StatusOr<google::cloud::notebooks::v1::Schedule>
NotebookServiceClient::GetSchedule(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::GetScheduleRequest request;
  request.set_name(name);
  return connection_->GetSchedule(request);
}

StatusOr<google::cloud::notebooks::v1::Schedule>
NotebookServiceClient::GetSchedule(
    google::cloud::notebooks::v1::GetScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSchedule(request);
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceClient::DeleteSchedule(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::DeleteScheduleRequest request;
  request.set_name(name);
  return connection_->DeleteSchedule(request);
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceClient::DeleteSchedule(
    google::cloud::notebooks::v1::DeleteScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSchedule(request);
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceClient::CreateSchedule(
    std::string const& parent,
    google::cloud::notebooks::v1::Schedule const& schedule,
    std::string const& schedule_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::CreateScheduleRequest request;
  request.set_parent(parent);
  *request.mutable_schedule() = schedule;
  request.set_schedule_id(schedule_id);
  return connection_->CreateSchedule(request);
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceClient::CreateSchedule(
    google::cloud::notebooks::v1::CreateScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSchedule(request);
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceClient::TriggerSchedule(
    google::cloud::notebooks::v1::TriggerScheduleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TriggerSchedule(request);
}

StreamRange<google::cloud::notebooks::v1::Execution>
NotebookServiceClient::ListExecutions(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::ListExecutionsRequest request;
  request.set_parent(parent);
  return connection_->ListExecutions(request);
}

StreamRange<google::cloud::notebooks::v1::Execution>
NotebookServiceClient::ListExecutions(
    google::cloud::notebooks::v1::ListExecutionsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListExecutions(std::move(request));
}

StatusOr<google::cloud::notebooks::v1::Execution>
NotebookServiceClient::GetExecution(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::GetExecutionRequest request;
  request.set_name(name);
  return connection_->GetExecution(request);
}

StatusOr<google::cloud::notebooks::v1::Execution>
NotebookServiceClient::GetExecution(
    google::cloud::notebooks::v1::GetExecutionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetExecution(request);
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceClient::DeleteExecution(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::DeleteExecutionRequest request;
  request.set_name(name);
  return connection_->DeleteExecution(request);
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceClient::DeleteExecution(
    google::cloud::notebooks::v1::DeleteExecutionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteExecution(request);
}

future<StatusOr<google::cloud::notebooks::v1::Execution>>
NotebookServiceClient::CreateExecution(
    std::string const& parent,
    google::cloud::notebooks::v1::Execution const& execution,
    std::string const& execution_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::notebooks::v1::CreateExecutionRequest request;
  request.set_parent(parent);
  *request.mutable_execution() = execution;
  request.set_execution_id(execution_id);
  return connection_->CreateExecution(request);
}

future<StatusOr<google::cloud::notebooks::v1::Execution>>
NotebookServiceClient::CreateExecution(
    google::cloud::notebooks::v1::CreateExecutionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateExecution(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks
}  // namespace cloud
}  // namespace google
