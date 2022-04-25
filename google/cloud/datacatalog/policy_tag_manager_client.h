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
// source: google/cloud/datacatalog/v1/policytagmanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_POLICY_TAG_MANAGER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_POLICY_TAG_MANAGER_CLIENT_H

#include "google/cloud/datacatalog/policy_tag_manager_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Policy Tag Manager API service allows you to manage your policy tags and
/// taxonomies.
///
/// Policy tags are used to tag BigQuery columns and apply additional access
/// control policies. A taxonomy is a hierarchical grouping of policy tags that
/// classify data along a common axis.
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
class PolicyTagManagerClient {
 public:
  explicit PolicyTagManagerClient(
      std::shared_ptr<PolicyTagManagerConnection> connection,
      Options opts = {});
  ~PolicyTagManagerClient();

  //@{
  // @name Copy and move support
  PolicyTagManagerClient(PolicyTagManagerClient const&) = default;
  PolicyTagManagerClient& operator=(PolicyTagManagerClient const&) = default;
  PolicyTagManagerClient(PolicyTagManagerClient&&) = default;
  PolicyTagManagerClient& operator=(PolicyTagManagerClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(PolicyTagManagerClient const& a,
                         PolicyTagManagerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(PolicyTagManagerClient const& a,
                         PolicyTagManagerClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Creates a taxonomy in a specified project.
  ///
  /// The taxonomy is initially empty, that is, it doesn't contain policy tags.
  ///
  /// @param parent  Required. Resource name of the project that the taxonomy
  /// will belong to.
  /// @param taxonomy  The taxonomy to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::Taxonomy,google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  /// [google.cloud.datacatalog.v1.CreateTaxonomyRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L305}
  /// [google.cloud.datacatalog.v1.Taxonomy]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  StatusOr<google::cloud::datacatalog::v1::Taxonomy> CreateTaxonomy(
      std::string const& parent,
      google::cloud::datacatalog::v1::Taxonomy const& taxonomy,
      Options opts = {});

  ///
  /// Creates a taxonomy in a specified project.
  ///
  /// The taxonomy is initially empty, that is, it doesn't contain policy tags.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::CreateTaxonomyRequest,google/cloud/datacatalog/v1/policytagmanager.proto#L305}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::Taxonomy,google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  /// [google.cloud.datacatalog.v1.CreateTaxonomyRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L305}
  /// [google.cloud.datacatalog.v1.Taxonomy]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  StatusOr<google::cloud::datacatalog::v1::Taxonomy> CreateTaxonomy(
      google::cloud::datacatalog::v1::CreateTaxonomyRequest const& request,
      Options opts = {});

  ///
  /// Deletes a taxonomy, including all policy tags in this
  /// taxonomy, their associated policies, and the policy tags references from
  /// BigQuery columns.
  ///
  /// @param name  Required. Resource name of the taxonomy to delete.
  ///  Note: All policy tags in this taxonomy are also deleted.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.datacatalog.v1.DeleteTaxonomyRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L320}
  ///
  Status DeleteTaxonomy(std::string const& name, Options opts = {});

  ///
  /// Deletes a taxonomy, including all policy tags in this
  /// taxonomy, their associated policies, and the policy tags references from
  /// BigQuery columns.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::DeleteTaxonomyRequest,google/cloud/datacatalog/v1/policytagmanager.proto#L320}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.datacatalog.v1.DeleteTaxonomyRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L320}
  ///
  Status DeleteTaxonomy(
      google::cloud::datacatalog::v1::DeleteTaxonomyRequest const& request,
      Options opts = {});

  ///
  /// Updates a taxonomy, including its display name,
  /// description, and activated policy types.
  ///
  /// @param taxonomy  The taxonomy to update. You can update only its
  /// description, display name,
  ///  and activated policy types.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::Taxonomy,google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  /// [google.cloud.datacatalog.v1.UpdateTaxonomyRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L334}
  /// [google.cloud.datacatalog.v1.Taxonomy]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  StatusOr<google::cloud::datacatalog::v1::Taxonomy> UpdateTaxonomy(
      google::cloud::datacatalog::v1::Taxonomy const& taxonomy,
      Options opts = {});

  ///
  /// Updates a taxonomy, including its display name,
  /// description, and activated policy types.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::UpdateTaxonomyRequest,google/cloud/datacatalog/v1/policytagmanager.proto#L334}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::Taxonomy,google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  /// [google.cloud.datacatalog.v1.UpdateTaxonomyRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L334}
  /// [google.cloud.datacatalog.v1.Taxonomy]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  StatusOr<google::cloud::datacatalog::v1::Taxonomy> UpdateTaxonomy(
      google::cloud::datacatalog::v1::UpdateTaxonomyRequest const& request,
      Options opts = {});

  ///
  /// Lists all taxonomies in a project in a particular location that you
  /// have a permission to view.
  ///
  /// @param parent  Required. Resource name of the project to list the
  /// taxonomies of.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::Taxonomy,google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  /// [google.cloud.datacatalog.v1.ListTaxonomiesRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L349}
  /// [google.cloud.datacatalog.v1.Taxonomy]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  StreamRange<google::cloud::datacatalog::v1::Taxonomy> ListTaxonomies(
      std::string const& parent, Options opts = {});

  ///
  /// Lists all taxonomies in a project in a particular location that you
  /// have a permission to view.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::ListTaxonomiesRequest,google/cloud/datacatalog/v1/policytagmanager.proto#L349}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::Taxonomy,google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  /// [google.cloud.datacatalog.v1.ListTaxonomiesRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L349}
  /// [google.cloud.datacatalog.v1.Taxonomy]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  StreamRange<google::cloud::datacatalog::v1::Taxonomy> ListTaxonomies(
      google::cloud::datacatalog::v1::ListTaxonomiesRequest request,
      Options opts = {});

  ///
  /// Gets a taxonomy.
  ///
  /// @param name  Required. Resource name of the taxonomy to get.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::Taxonomy,google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  /// [google.cloud.datacatalog.v1.GetTaxonomyRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L382}
  /// [google.cloud.datacatalog.v1.Taxonomy]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  StatusOr<google::cloud::datacatalog::v1::Taxonomy> GetTaxonomy(
      std::string const& name, Options opts = {});

  ///
  /// Gets a taxonomy.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::GetTaxonomyRequest,google/cloud/datacatalog/v1/policytagmanager.proto#L382}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::Taxonomy,google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  /// [google.cloud.datacatalog.v1.GetTaxonomyRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L382}
  /// [google.cloud.datacatalog.v1.Taxonomy]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  StatusOr<google::cloud::datacatalog::v1::Taxonomy> GetTaxonomy(
      google::cloud::datacatalog::v1::GetTaxonomyRequest const& request,
      Options opts = {});

  ///
  /// Creates a policy tag in a taxonomy.
  ///
  /// @param parent  Required. Resource name of the taxonomy that the policy tag
  /// will belong to.
  /// @param policy_tag  The policy tag to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::PolicyTag,google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  /// [google.cloud.datacatalog.v1.CreatePolicyTagRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L394}
  /// [google.cloud.datacatalog.v1.PolicyTag]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  StatusOr<google::cloud::datacatalog::v1::PolicyTag> CreatePolicyTag(
      std::string const& parent,
      google::cloud::datacatalog::v1::PolicyTag const& policy_tag,
      Options opts = {});

  ///
  /// Creates a policy tag in a taxonomy.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::CreatePolicyTagRequest,google/cloud/datacatalog/v1/policytagmanager.proto#L394}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::PolicyTag,google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  /// [google.cloud.datacatalog.v1.CreatePolicyTagRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L394}
  /// [google.cloud.datacatalog.v1.PolicyTag]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  StatusOr<google::cloud::datacatalog::v1::PolicyTag> CreatePolicyTag(
      google::cloud::datacatalog::v1::CreatePolicyTagRequest const& request,
      Options opts = {});

  ///
  /// Deletes a policy tag together with the following:
  ///
  /// * All of its descendant policy tags, if any
  /// * Policies associated with the policy tag and its descendants
  /// * References from BigQuery table schema of the policy tag and its
  ///   descendants
  ///
  /// @param name  Required. Resource name of the policy tag to delete.
  ///  Note: All of its descendant policy tags are also deleted.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.datacatalog.v1.DeletePolicyTagRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L409}
  ///
  Status DeletePolicyTag(std::string const& name, Options opts = {});

  ///
  /// Deletes a policy tag together with the following:
  ///
  /// * All of its descendant policy tags, if any
  /// * Policies associated with the policy tag and its descendants
  /// * References from BigQuery table schema of the policy tag and its
  ///   descendants
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::DeletePolicyTagRequest,google/cloud/datacatalog/v1/policytagmanager.proto#L409}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.datacatalog.v1.DeletePolicyTagRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L409}
  ///
  Status DeletePolicyTag(
      google::cloud::datacatalog::v1::DeletePolicyTagRequest const& request,
      Options opts = {});

  ///
  /// Updates a policy tag, including its display
  /// name, description, and parent policy tag.
  ///
  /// @param policy_tag  The policy tag to update. You can update only its
  /// description, display
  ///  name, and parent policy tag fields.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::PolicyTag,google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  /// [google.cloud.datacatalog.v1.UpdatePolicyTagRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L423}
  /// [google.cloud.datacatalog.v1.PolicyTag]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  StatusOr<google::cloud::datacatalog::v1::PolicyTag> UpdatePolicyTag(
      google::cloud::datacatalog::v1::PolicyTag const& policy_tag,
      Options opts = {});

  ///
  /// Updates a policy tag, including its display
  /// name, description, and parent policy tag.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::UpdatePolicyTagRequest,google/cloud/datacatalog/v1/policytagmanager.proto#L423}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::PolicyTag,google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  /// [google.cloud.datacatalog.v1.UpdatePolicyTagRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L423}
  /// [google.cloud.datacatalog.v1.PolicyTag]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  StatusOr<google::cloud::datacatalog::v1::PolicyTag> UpdatePolicyTag(
      google::cloud::datacatalog::v1::UpdatePolicyTagRequest const& request,
      Options opts = {});

  ///
  /// Lists all policy tags in a taxonomy.
  ///
  /// @param parent  Required. Resource name of the taxonomy to list the policy
  /// tags of.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::PolicyTag,google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  /// [google.cloud.datacatalog.v1.ListPolicyTagsRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L439}
  /// [google.cloud.datacatalog.v1.PolicyTag]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  StreamRange<google::cloud::datacatalog::v1::PolicyTag> ListPolicyTags(
      std::string const& parent, Options opts = {});

  ///
  /// Lists all policy tags in a taxonomy.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::ListPolicyTagsRequest,google/cloud/datacatalog/v1/policytagmanager.proto#L439}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::PolicyTag,google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  /// [google.cloud.datacatalog.v1.ListPolicyTagsRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L439}
  /// [google.cloud.datacatalog.v1.PolicyTag]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  StreamRange<google::cloud::datacatalog::v1::PolicyTag> ListPolicyTags(
      google::cloud::datacatalog::v1::ListPolicyTagsRequest request,
      Options opts = {});

  ///
  /// Gets a policy tag.
  ///
  /// @param name  Required. Resource name of the policy tag.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::PolicyTag,google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  /// [google.cloud.datacatalog.v1.GetPolicyTagRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L473}
  /// [google.cloud.datacatalog.v1.PolicyTag]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  StatusOr<google::cloud::datacatalog::v1::PolicyTag> GetPolicyTag(
      std::string const& name, Options opts = {});

  ///
  /// Gets a policy tag.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::GetPolicyTagRequest,google/cloud/datacatalog/v1/policytagmanager.proto#L473}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::PolicyTag,google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  /// [google.cloud.datacatalog.v1.GetPolicyTagRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L473}
  /// [google.cloud.datacatalog.v1.PolicyTag]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L266}
  ///
  StatusOr<google::cloud::datacatalog::v1::PolicyTag> GetPolicyTag(
      google::cloud::datacatalog::v1::GetPolicyTagRequest const& request,
      Options opts = {});

  ///
  /// Gets the IAM policy for a policy tag or a taxonomy.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::GetIamPolicyRequest,google/iam/v1/iam_policy.proto#L123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Sets the IAM policy for a policy tag or a taxonomy.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::SetIamPolicyRequest,google/iam/v1/iam_policy.proto#L101}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Returns your permissions on a specified policy tag or
  /// taxonomy.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::TestIamPermissionsRequest,google/iam/v1/iam_policy.proto#L136}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<PolicyTagManagerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_POLICY_TAG_MANAGER_CLIENT_H
