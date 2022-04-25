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
// source: google/cloud/bigquery/reservation/v1/reservation.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_RESERVATION_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_RESERVATION_LOGGING_DECORATOR_H

#include "google/cloud/bigquery/internal/reservation_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ReservationServiceLogging : public ReservationServiceStub {
 public:
  ~ReservationServiceLogging() override = default;
  ReservationServiceLogging(std::shared_ptr<ReservationServiceStub> child,
                            TracingOptions tracing_options,
                            std::set<std::string> components);

  StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
  CreateReservation(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::CreateReservationRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::ListReservationsResponse>
  ListReservations(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::ListReservationsRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
  GetReservation(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::GetReservationRequest const&
          request) override;

  Status DeleteReservation(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::DeleteReservationRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
  UpdateReservation(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::UpdateReservationRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
  CreateCapacityCommitment(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::
          CreateCapacityCommitmentRequest const& request) override;

  StatusOr<
      google::cloud::bigquery::reservation::v1::ListCapacityCommitmentsResponse>
  ListCapacityCommitments(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::
          ListCapacityCommitmentsRequest const& request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
  GetCapacityCommitment(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::
          GetCapacityCommitmentRequest const& request) override;

  Status DeleteCapacityCommitment(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::
          DeleteCapacityCommitmentRequest const& request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
  UpdateCapacityCommitment(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::
          UpdateCapacityCommitmentRequest const& request) override;

  StatusOr<
      google::cloud::bigquery::reservation::v1::SplitCapacityCommitmentResponse>
  SplitCapacityCommitment(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::
          SplitCapacityCommitmentRequest const& request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
  MergeCapacityCommitments(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::
          MergeCapacityCommitmentsRequest const& request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
  CreateAssignment(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::CreateAssignmentRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::ListAssignmentsResponse>
  ListAssignments(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::ListAssignmentsRequest const&
          request) override;

  Status DeleteAssignment(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::DeleteAssignmentRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::SearchAssignmentsResponse>
  SearchAssignments(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::SearchAssignmentsRequest const&
          request) override;

  StatusOr<
      google::cloud::bigquery::reservation::v1::SearchAllAssignmentsResponse>
  SearchAllAssignments(grpc::ClientContext& context,
                       google::cloud::bigquery::reservation::v1::
                           SearchAllAssignmentsRequest const& request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::Assignment> MoveAssignment(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::MoveAssignmentRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
  UpdateAssignment(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::UpdateAssignmentRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
  GetBiReservation(
      grpc::ClientContext& context,
      google::cloud::bigquery::reservation::v1::GetBiReservationRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
  UpdateBiReservation(grpc::ClientContext& context,
                      google::cloud::bigquery::reservation::v1::
                          UpdateBiReservationRequest const& request) override;

 private:
  std::shared_ptr<ReservationServiceStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // ReservationServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_RESERVATION_LOGGING_DECORATOR_H
