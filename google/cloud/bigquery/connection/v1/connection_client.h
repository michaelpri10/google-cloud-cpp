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
// source: google/cloud/bigquery/connection/v1/connection.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_CONNECTION_V1_CONNECTION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_CONNECTION_V1_CONNECTION_CLIENT_H

#include "google/cloud/bigquery/connection/v1/connection_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_connection_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Manages external data source connections and credentials.
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
class ConnectionServiceClient {
 public:
  explicit ConnectionServiceClient(
      std::shared_ptr<ConnectionServiceConnection> connection,
      Options opts = {});
  ~ConnectionServiceClient();

  ///@{
  /// @name Copy and move support
  ConnectionServiceClient(ConnectionServiceClient const&) = default;
  ConnectionServiceClient& operator=(ConnectionServiceClient const&) = default;
  ConnectionServiceClient(ConnectionServiceClient&&) = default;
  ConnectionServiceClient& operator=(ConnectionServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ConnectionServiceClient const& a,
                         ConnectionServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ConnectionServiceClient const& a,
                         ConnectionServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a new connection.
  ///
  /// @param parent  Required. Parent resource name.
  ///  Must be in the format `projects/{project_id}/locations/{location_id}`
  /// @param connection  Required. Connection to create.
  /// @param connection_id  Optional. Connection id that should be assigned to the created connection.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.bigquery.connection.v1.Connection])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.connection.v1.Connection]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L231}
  /// [google.cloud.bigquery.connection.v1.CreateConnectionRequest]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L138}
  ///
  // clang-format on
  StatusOr<google::cloud::bigquery::connection::v1::Connection>
  CreateConnection(
      std::string const& parent,
      google::cloud::bigquery::connection::v1::Connection const& connection,
      std::string const& connection_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a new connection.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.bigquery.connection.v1.CreateConnectionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.bigquery.connection.v1.Connection])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.connection.v1.Connection]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L231}
  /// [google.cloud.bigquery.connection.v1.CreateConnectionRequest]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L138}
  ///
  // clang-format on
  StatusOr<google::cloud::bigquery::connection::v1::Connection>
  CreateConnection(
      google::cloud::bigquery::connection::v1::CreateConnectionRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns specified connection.
  ///
  /// @param name  Required. Name of the requested connection, for example:
  ///  `projects/{project_id}/locations/{location_id}/connections/{connection_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.bigquery.connection.v1.Connection])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.connection.v1.Connection]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L231}
  /// [google.cloud.bigquery.connection.v1.GetConnectionRequest]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L157}
  ///
  // clang-format on
  StatusOr<google::cloud::bigquery::connection::v1::Connection> GetConnection(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Returns specified connection.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.bigquery.connection.v1.GetConnectionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.bigquery.connection.v1.Connection])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.connection.v1.Connection]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L231}
  /// [google.cloud.bigquery.connection.v1.GetConnectionRequest]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L157}
  ///
  // clang-format on
  StatusOr<google::cloud::bigquery::connection::v1::Connection> GetConnection(
      google::cloud::bigquery::connection::v1::GetConnectionRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns a list of connections in the given project.
  ///
  /// @param parent  Required. Parent resource name.
  ///  Must be in the form: `projects/{project_id}/locations/{location_id}`
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
  ///     [google.cloud.bigquery.connection.v1.Connection], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.connection.v1.Connection]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L231}
  /// [google.cloud.bigquery.connection.v1.ListConnectionsRequest]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L170}
  ///
  // clang-format on
  StreamRange<google::cloud::bigquery::connection::v1::Connection>
  ListConnections(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns a list of connections in the given project.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.bigquery.connection.v1.ListConnectionsRequest].
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
  ///     [google.cloud.bigquery.connection.v1.Connection], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.connection.v1.Connection]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L231}
  /// [google.cloud.bigquery.connection.v1.ListConnectionsRequest]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L170}
  ///
  // clang-format on
  StreamRange<google::cloud::bigquery::connection::v1::Connection>
  ListConnections(
      google::cloud::bigquery::connection::v1::ListConnectionsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified connection. For security reasons, also resets
  /// credential if connection properties are in the update field mask.
  ///
  /// @param name  Required. Name of the connection to update, for example:
  ///  `projects/{project_id}/locations/{location_id}/connections/{connection_id}`
  /// @param connection  Required. Connection containing the updated fields.
  /// @param update_mask  Required. Update mask for the connection fields to be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.bigquery.connection.v1.Connection])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.connection.v1.Connection]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L231}
  /// [google.cloud.bigquery.connection.v1.UpdateConnectionRequest]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L199}
  ///
  // clang-format on
  StatusOr<google::cloud::bigquery::connection::v1::Connection>
  UpdateConnection(
      std::string const& name,
      google::cloud::bigquery::connection::v1::Connection const& connection,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the specified connection. For security reasons, also resets
  /// credential if connection properties are in the update field mask.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.bigquery.connection.v1.UpdateConnectionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.bigquery.connection.v1.Connection])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.connection.v1.Connection]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L231}
  /// [google.cloud.bigquery.connection.v1.UpdateConnectionRequest]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L199}
  ///
  // clang-format on
  StatusOr<google::cloud::bigquery::connection::v1::Connection>
  UpdateConnection(
      google::cloud::bigquery::connection::v1::UpdateConnectionRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes connection and associated credential.
  ///
  /// @param name  Required. Name of the deleted connection, for example:
  ///  `projects/{project_id}/locations/{location_id}/connections/{connection_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.connection.v1.DeleteConnectionRequest]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L218}
  ///
  // clang-format on
  Status DeleteConnection(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes connection and associated credential.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.bigquery.connection.v1.DeleteConnectionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.connection.v1.DeleteConnectionRequest]: @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L218}
  ///
  // clang-format on
  Status DeleteConnection(
      google::cloud::bigquery::connection::v1::DeleteConnectionRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the access control policy for a resource.
  /// Returns an empty policy if the resource exists and does not have a policy
  /// set.
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param options  OPTIONAL: A `GetPolicyOptions` object for specifying options to
  ///  `GetIamPolicy`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.GetIamPolicyRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]: @googleapis_reference_link{google/iam/v1/policy.proto#L102}
  ///
  // clang-format on
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      std::string const& resource,
      google::iam::v1::GetPolicyOptions const& options, Options opts = {});

  // clang-format off
  ///
  /// Gets the access control policy for a resource.
  /// Returns an empty policy if the resource exists and does not have a policy
  /// set.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v1.GetIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.GetIamPolicyRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]: @googleapis_reference_link{google/iam/v1/policy.proto#L102}
  ///
  // clang-format on
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Sets the access control policy on the specified resource. Replaces any
  /// existing policy.
  ///
  /// Can return `NOT_FOUND`, `INVALID_ARGUMENT`, and `PERMISSION_DENIED` errors.
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being specified.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param policy  REQUIRED: The complete policy to be applied to the `resource`. The size of
  ///  the policy is limited to a few 10s of KB. An empty policy is a
  ///  valid policy but certain Cloud Platform services (such as Projects)
  ///  might reject them.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.Policy]: @googleapis_reference_link{google/iam/v1/policy.proto#L102}
  /// [google.iam.v1.SetIamPolicyRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  ///
  // clang-format on
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      std::string const& resource, google::iam::v1::Policy const& policy,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the access control policy on the specified resource. Replaces any
  /// existing policy.
  ///
  /// Can return `NOT_FOUND`, `INVALID_ARGUMENT`, and `PERMISSION_DENIED` errors.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v1.SetIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.Policy]: @googleapis_reference_link{google/iam/v1/policy.proto#L102}
  /// [google.iam.v1.SetIamPolicyRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  ///
  // clang-format on
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource.
  /// If the resource does not exist, this will return an empty set of
  /// permissions, not a `NOT_FOUND` error.
  ///
  /// Note: This operation is designed to be used for building permission-aware
  /// UIs and command-line tools, not for authorization checking. This operation
  /// may "fail open" without warning.
  ///
  /// @param resource  REQUIRED: The resource for which the policy detail is being requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param permissions  The set of permissions to check for the `resource`. Permissions with
  ///  wildcards (such as '*' or 'storage.*') are not allowed. For more
  ///  information see
  ///  [IAM Overview](https://cloud.google.com/iam/docs/overview#permissions).
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.TestIamPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  // clang-format on
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      std::string const& resource, std::vector<std::string> const& permissions,
      Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource.
  /// If the resource does not exist, this will return an empty set of
  /// permissions, not a `NOT_FOUND` error.
  ///
  /// Note: This operation is designed to be used for building permission-aware
  /// UIs and command-line tools, not for authorization checking. This operation
  /// may "fail open" without warning.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v1.TestIamPermissionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.TestIamPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  // clang-format on
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ConnectionServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_connection_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_CONNECTION_V1_CONNECTION_CLIENT_H
