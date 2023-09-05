// Copyright 2023 Google LLC
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
// source: google/cloud/discoveryengine/v1/conversational_search_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_CONVERSATIONAL_SEARCH_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_CONVERSATIONAL_SEARCH_CLIENT_H

#include "google/cloud/discoveryengine/v1/conversational_search_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for conversational search.
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
class ConversationalSearchServiceClient {
 public:
  explicit ConversationalSearchServiceClient(
      std::shared_ptr<ConversationalSearchServiceConnection> connection,
      Options opts = {});
  ~ConversationalSearchServiceClient();

  ///@{
  /// @name Copy and move support
  ConversationalSearchServiceClient(ConversationalSearchServiceClient const&) =
      default;
  ConversationalSearchServiceClient& operator=(
      ConversationalSearchServiceClient const&) = default;
  ConversationalSearchServiceClient(ConversationalSearchServiceClient&&) =
      default;
  ConversationalSearchServiceClient& operator=(
      ConversationalSearchServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ConversationalSearchServiceClient const& a,
                         ConversationalSearchServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ConversationalSearchServiceClient const& a,
                         ConversationalSearchServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Converses a conversation.
  ///
  /// @param name  Required. The resource name of the Conversation to get. Format:
  ///  `projects/{project_number}/locations/{location_id}/collections/{collection}/dataStores/{data_store_id}/conversations/{conversation_id}`.
  ///  Use
  ///  `projects/{project_number}/locations/{location_id}/collections/{collection}/dataStores/{data_store_id}/conversations/-`
  ///  to activate auto session mode, which automatically creates a new
  ///  conversation inside a ConverseConversation session.
  /// @param query  Required. Current user input.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.ConverseConversationResponse])
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
  /// [google.cloud.discoveryengine.v1.ConverseConversationRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L134}
  /// [google.cloud.discoveryengine.v1.ConverseConversationResponse]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L192}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::ConverseConversationResponse>
  ConverseConversation(
      std::string const& name,
      google::cloud::discoveryengine::v1::TextInput const& query,
      Options opts = {});

  // clang-format off
  ///
  /// Converses a conversation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.ConverseConversationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.ConverseConversationResponse])
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
  /// [google.cloud.discoveryengine.v1.ConverseConversationRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L134}
  /// [google.cloud.discoveryengine.v1.ConverseConversationResponse]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L192}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::ConverseConversationResponse>
  ConverseConversation(
      google::cloud::discoveryengine::v1::ConverseConversationRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a Conversation.
  ///
  /// If the [Conversation][google.cloud.discoveryengine.v1.Conversation] to
  /// create already exists, an ALREADY_EXISTS error is returned.
  ///
  /// @param parent  Required. Full resource name of parent data store. Format:
  ///  `projects/{project_number}/locations/{location_id}/collections/{collection}/dataStores/{data_store_id}`
  /// @param conversation  Required. The conversation to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Conversation])
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
  /// [google.cloud.discoveryengine.v1.Conversation]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversation.proto#L34}
  /// [google.cloud.discoveryengine.v1.CreateConversationRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L204}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Conversation> CreateConversation(
      std::string const& parent,
      google::cloud::discoveryengine::v1::Conversation const& conversation,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a Conversation.
  ///
  /// If the [Conversation][google.cloud.discoveryengine.v1.Conversation] to
  /// create already exists, an ALREADY_EXISTS error is returned.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.CreateConversationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Conversation])
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
  /// [google.cloud.discoveryengine.v1.Conversation]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversation.proto#L34}
  /// [google.cloud.discoveryengine.v1.CreateConversationRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L204}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Conversation> CreateConversation(
      google::cloud::discoveryengine::v1::CreateConversationRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a Conversation.
  ///
  /// If the [Conversation][google.cloud.discoveryengine.v1.Conversation] to
  /// delete does not exist, a NOT_FOUND error is returned.
  ///
  /// @param name  Required. The resource name of the Conversation to delete. Format:
  ///  `projects/{project_number}/locations/{location_id}/collections/{collection}/dataStores/{data_store_id}/conversations/{conversation_id}`
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
  /// [google.cloud.discoveryengine.v1.Conversation]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversation.proto#L34}
  /// [google.cloud.discoveryengine.v1.DeleteConversationRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L234}
  ///
  // clang-format on
  Status DeleteConversation(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a Conversation.
  ///
  /// If the [Conversation][google.cloud.discoveryengine.v1.Conversation] to
  /// delete does not exist, a NOT_FOUND error is returned.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.DeleteConversationRequest].
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
  /// [google.cloud.discoveryengine.v1.Conversation]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversation.proto#L34}
  /// [google.cloud.discoveryengine.v1.DeleteConversationRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L234}
  ///
  // clang-format on
  Status DeleteConversation(
      google::cloud::discoveryengine::v1::DeleteConversationRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a Conversation.
  ///
  /// [Conversation][google.cloud.discoveryengine.v1.Conversation] action type
  /// cannot be changed. If the
  /// [Conversation][google.cloud.discoveryengine.v1.Conversation] to update does
  /// not exist, a NOT_FOUND error is returned.
  ///
  /// @param conversation  Required. The Conversation to update.
  /// @param update_mask  Indicates which fields in the provided
  ///  [Conversation][google.cloud.discoveryengine.v1.Conversation] to update. The
  ///  following are NOT supported:
  ///  @n
  ///  * [conversation.name][]
  ///  @n
  ///  If not set or empty, all supported fields are updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Conversation])
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
  /// [google.cloud.discoveryengine.v1.Conversation]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversation.proto#L34}
  /// [google.cloud.discoveryengine.v1.UpdateConversationRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L219}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Conversation> UpdateConversation(
      google::cloud::discoveryengine::v1::Conversation const& conversation,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates a Conversation.
  ///
  /// [Conversation][google.cloud.discoveryengine.v1.Conversation] action type
  /// cannot be changed. If the
  /// [Conversation][google.cloud.discoveryengine.v1.Conversation] to update does
  /// not exist, a NOT_FOUND error is returned.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.UpdateConversationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Conversation])
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
  /// [google.cloud.discoveryengine.v1.Conversation]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversation.proto#L34}
  /// [google.cloud.discoveryengine.v1.UpdateConversationRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L219}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Conversation> UpdateConversation(
      google::cloud::discoveryengine::v1::UpdateConversationRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a Conversation.
  ///
  /// @param name  Required. The resource name of the Conversation to get. Format:
  ///  `projects/{project_number}/locations/{location_id}/collections/{collection}/dataStores/{data_store_id}/conversations/{conversation_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Conversation])
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
  /// [google.cloud.discoveryengine.v1.Conversation]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversation.proto#L34}
  /// [google.cloud.discoveryengine.v1.GetConversationRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L246}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Conversation> GetConversation(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a Conversation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.GetConversationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Conversation])
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
  /// [google.cloud.discoveryengine.v1.Conversation]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversation.proto#L34}
  /// [google.cloud.discoveryengine.v1.GetConversationRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L246}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Conversation> GetConversation(
      google::cloud::discoveryengine::v1::GetConversationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists all Conversations by their parent
  /// [DataStore][google.cloud.discoveryengine.v1.DataStore].
  ///
  /// @param parent  Required. The data store resource name. Format:
  ///  `projects/{project_number}/locations/{location_id}/collections/{collection}/dataStores/{data_store_id}`
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
  ///     [google.cloud.discoveryengine.v1.Conversation], or rather,
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
  /// [google.cloud.discoveryengine.v1.Conversation]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversation.proto#L34}
  /// [google.cloud.discoveryengine.v1.ListConversationsRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L258}
  ///
  // clang-format on
  StreamRange<google::cloud::discoveryengine::v1::Conversation>
  ListConversations(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists all Conversations by their parent
  /// [DataStore][google.cloud.discoveryengine.v1.DataStore].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.ListConversationsRequest].
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
  ///     [google.cloud.discoveryengine.v1.Conversation], or rather,
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
  /// [google.cloud.discoveryengine.v1.Conversation]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversation.proto#L34}
  /// [google.cloud.discoveryengine.v1.ListConversationsRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/conversational_search_service.proto#L258}
  ///
  // clang-format on
  StreamRange<google::cloud::discoveryengine::v1::Conversation>
  ListConversations(
      google::cloud::discoveryengine::v1::ListConversationsRequest request,
      Options opts = {});

 private:
  std::shared_ptr<ConversationalSearchServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_CONVERSATIONAL_SEARCH_CLIENT_H
