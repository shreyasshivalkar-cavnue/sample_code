# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: cavnue/messages/data_warehouse/management/v1/infrastructure.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from cavnue.third_party.bq.v1 import bq_field_pb2 as cavnue_dot_third__party_dot_bq_dot_v1_dot_bq__field__pb2
from cavnue.third_party.bq.v1 import bq_table_pb2 as cavnue_dot_third__party_dot_bq_dot_v1_dot_bq__table__pb2
from cavnue.messages.common.v1 import common_pb2 as cavnue_dot_messages_dot_common_dot_v1_dot_common__pb2
from cavnue.messages.common.v1 import field_options_pb2 as cavnue_dot_messages_dot_common_dot_v1_dot_field__options__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\nAcavnue/messages/data_warehouse/management/v1/infrastructure.proto\x12,cavnue.messages.data_warehouse.management.v1\x1a\'cavnue/third_party/bq/v1/bq_field.proto\x1a\'cavnue/third_party/bq/v1/bq_table.proto\x1a&cavnue/messages/common/v1/common.proto\x1a-cavnue/messages/common/v1/field_options.proto\"y\n\x06\x46older\x12\"\n\tfolder_id\x18\x01 \x01(\x03\x42\n\x98\xb5\x18\x01\x8a\xf9+\x02\x08\x01H\x00\x88\x01\x01\x12\x1f\n\nidentifier\x18\x02 \x01(\tB\x06\x8a\xf9+\x02\x08\x01H\x01\x88\x01\x01:\r\x82\xf9+\t\n\x07\x46oldersB\x0c\n\n_folder_idB\r\n\x0b_identifier\"\xe9\x02\n\x07Project\x12#\n\nproject_id\x18\x01 \x01(\x03\x42\n\x98\xb5\x18\x01\x8a\xf9+\x02\x08\x01H\x00\x88\x01\x01\x12\x1e\n\tfolder_id\x18\x02 \x01(\x03\x42\x06\x8a\xf9+\x02\x08\x01H\x01\x88\x01\x01\x12\x1f\n\nidentifier\x18\x03 \x01(\tB\x06\x8a\xf9+\x02\x08\x01H\x02\x88\x01\x01\x12U\n\x04type\x18\x04 \x01(\x0e\x32:.cavnue.messages.data_warehouse.management.v1.Project.TypeB\x06\x8a\xf9+\x02\x08\x01H\x03\x88\x01\x01\"\\\n\x04Type\x12\x14\n\x10TYPE_UNSPECIFIED\x10\x00\x12\r\n\tTYPE_PROD\x10\x01\x12\x10\n\x0cTYPE_STAGING\x10\x02\x12\x0c\n\x08TYPE_DEV\x10\x03\x12\x0f\n\x0bTYPE_REPLAY\x10\x04:\x0e\x82\xf9+\n\n\x08ProjectsB\r\n\x0b_project_idB\x0c\n\n_folder_idB\r\n\x0b_identifierB\x07\n\x05_type\"\xab\x02\n\x06\x43ohort\x12\x42\n\tcohort_id\x18\x01 \x01(\x03\x42*\x88\xb5\x18\x01\x92\xb5\x18\nproject_id\x92\xb5\x18\nidentifier\x98\xb5\x18\x01\x8a\xf9+\x02\x08\x01H\x00\x88\x01\x01\x12\x1f\n\nproject_id\x18\x02 \x01(\x03\x42\x06\x8a\xf9+\x02\x08\x01H\x01\x88\x01\x01\x12\x1f\n\nidentifier\x18\x03 \x01(\tB\x06\x8a\xf9+\x02\x08\x01H\x02\x88\x01\x01\x12Q\n\ndeployment\x18\x04 \x01(\x0e\x32\x30.cavnue.messages.common.v1.DataSource.DeploymentB\x06\x8a\xf9+\x02\x08\x01H\x03\x88\x01\x01:\r\x82\xf9+\t\n\x07\x43ohortsB\x0c\n\n_cohort_idB\r\n\x0b_project_idB\r\n\x0b_identifierB\r\n\x0b_deploymentb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'cavnue.messages.data_warehouse.management.v1.infrastructure_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _FOLDER.fields_by_name['folder_id']._options = None
  _FOLDER.fields_by_name['folder_id']._serialized_options = b'\230\265\030\001\212\371+\002\010\001'
  _FOLDER.fields_by_name['identifier']._options = None
  _FOLDER.fields_by_name['identifier']._serialized_options = b'\212\371+\002\010\001'
  _FOLDER._options = None
  _FOLDER._serialized_options = b'\202\371+\t\n\007Folders'
  _PROJECT.fields_by_name['project_id']._options = None
  _PROJECT.fields_by_name['project_id']._serialized_options = b'\230\265\030\001\212\371+\002\010\001'
  _PROJECT.fields_by_name['folder_id']._options = None
  _PROJECT.fields_by_name['folder_id']._serialized_options = b'\212\371+\002\010\001'
  _PROJECT.fields_by_name['identifier']._options = None
  _PROJECT.fields_by_name['identifier']._serialized_options = b'\212\371+\002\010\001'
  _PROJECT.fields_by_name['type']._options = None
  _PROJECT.fields_by_name['type']._serialized_options = b'\212\371+\002\010\001'
  _PROJECT._options = None
  _PROJECT._serialized_options = b'\202\371+\n\n\010Projects'
  _COHORT.fields_by_name['cohort_id']._options = None
  _COHORT.fields_by_name['cohort_id']._serialized_options = b'\210\265\030\001\222\265\030\nproject_id\222\265\030\nidentifier\230\265\030\001\212\371+\002\010\001'
  _COHORT.fields_by_name['project_id']._options = None
  _COHORT.fields_by_name['project_id']._serialized_options = b'\212\371+\002\010\001'
  _COHORT.fields_by_name['identifier']._options = None
  _COHORT.fields_by_name['identifier']._serialized_options = b'\212\371+\002\010\001'
  _COHORT.fields_by_name['deployment']._options = None
  _COHORT.fields_by_name['deployment']._serialized_options = b'\212\371+\002\010\001'
  _COHORT._options = None
  _COHORT._serialized_options = b'\202\371+\t\n\007Cohorts'
  _globals['_FOLDER']._serialized_start=284
  _globals['_FOLDER']._serialized_end=405
  _globals['_PROJECT']._serialized_start=408
  _globals['_PROJECT']._serialized_end=769
  _globals['_PROJECT_TYPE']._serialized_start=608
  _globals['_PROJECT_TYPE']._serialized_end=700
  _globals['_COHORT']._serialized_start=772
  _globals['_COHORT']._serialized_end=1071
# @@protoc_insertion_point(module_scope)
