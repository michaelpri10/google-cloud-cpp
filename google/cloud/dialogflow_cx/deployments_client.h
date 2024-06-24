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
// source: google/cloud/dialogflow/cx/v3/deployment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_DEPLOYMENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_DEPLOYMENTS_CLIENT_H

#include "google/cloud/dialogflow_cx/deployments_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing
/// [Deployments][google.cloud.dialogflow.cx.v3.Deployment].
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
/// [google.cloud.dialogflow.cx.v3.Deployment]:
/// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/deployment.proto#L65}
///
class DeploymentsClient {
 public:
  explicit DeploymentsClient(std::shared_ptr<DeploymentsConnection> connection,
                             Options opts = {});
  ~DeploymentsClient();

  ///@{
  /// @name Copy and move support
  DeploymentsClient(DeploymentsClient const&) = default;
  DeploymentsClient& operator=(DeploymentsClient const&) = default;
  DeploymentsClient(DeploymentsClient&&) = default;
  DeploymentsClient& operator=(DeploymentsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(DeploymentsClient const& a,
                         DeploymentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(DeploymentsClient const& a,
                         DeploymentsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns the list of all deployments in the specified
  /// [Environment][google.cloud.dialogflow.cx.v3.Environment].
  ///
  /// @param parent  Required. The [Environment][google.cloud.dialogflow.cx.v3.Environment] to
  ///  list all environments for. Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>/environments/<Environment ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.dialogflow.cx.v3.Deployment], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.Deployment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/deployment.proto#L65}
  /// [google.cloud.dialogflow.cx.v3.ListDeploymentsRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/deployment.proto#L131}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::cx::v3::Deployment> ListDeployments(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all deployments in the specified
  /// [Environment][google.cloud.dialogflow.cx.v3.Environment].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.ListDeploymentsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.dialogflow.cx.v3.Deployment], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.Deployment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/deployment.proto#L65}
  /// [google.cloud.dialogflow.cx.v3.ListDeploymentsRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/deployment.proto#L131}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::cx::v3::Deployment> ListDeployments(
      google::cloud::dialogflow::cx::v3::ListDeploymentsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified
  /// [Deployment][google.cloud.dialogflow.cx.v3.Deployment].
  ///
  /// @param name  Required. The name of the
  ///  [Deployment][google.cloud.dialogflow.cx.v3.Deployment]. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>/environments/<Environment ID>/deployments/<Deployment ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Deployment])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.Deployment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/deployment.proto#L65}
  /// [google.cloud.dialogflow.cx.v3.GetDeploymentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/deployment.proto#L167}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Deployment> GetDeployment(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified
  /// [Deployment][google.cloud.dialogflow.cx.v3.Deployment].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.GetDeploymentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Deployment])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.Deployment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/deployment.proto#L65}
  /// [google.cloud.dialogflow.cx.v3.GetDeploymentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/deployment.proto#L167}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Deployment> GetDeployment(
      google::cloud::dialogflow::cx::v3::GetDeploymentRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<DeploymentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_DEPLOYMENTS_CLIENT_H
