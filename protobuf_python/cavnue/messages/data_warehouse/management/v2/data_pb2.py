# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: cavnue/messages/data_warehouse/management/v2/data.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from cavnue.third_party.bq.v1 import bq_field_pb2 as cavnue_dot_third__party_dot_bq_dot_v1_dot_bq__field__pb2
from cavnue.third_party.bq.v1 import bq_table_pb2 as cavnue_dot_third__party_dot_bq_dot_v1_dot_bq__table__pb2
from cavnue.messages.common.v1 import field_options_pb2 as cavnue_dot_messages_dot_common_dot_v1_dot_field__options__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n7cavnue/messages/data_warehouse/management/v2/data.proto\x12,cavnue.messages.data_warehouse.management.v2\x1a\'cavnue/third_party/bq/v1/bq_field.proto\x1a\'cavnue/third_party/bq/v1/bq_table.proto\x1a-cavnue/messages/common/v1/field_options.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xe2\x02\n\x04\x44\x61ta\x12 \n\x07\x64\x61ta_id\x18\x01 \x01(\x03\x42\n\x98\xb5\x18\x01\x8a\xf9+\x02\x08\x01H\x00\x88\x01\x01\x12\x1e\n\tsource_id\x18\x02 \x01(\x03\x42\x06\x8a\xf9+\x02\x08\x01H\x01\x88\x01\x01\x12 \n\tcohort_id\x18\x03 \x01(\x03\x42\x08\x8a\xf9+\x04\x08\x01@\x01H\x02\x88\x01\x01\x12\"\n\x0blocation_id\x18\x04 \x01(\x03\x42\x08\x8a\xf9+\x04\x08\x01@\x01H\x03\x88\x01\x01\x12 \n\tsensor_id\x18\x05 \x01(\x03\x42\x08\x8a\xf9+\x04\x08\x01@\x01H\x04\x88\x01\x01\x12\x15\n\rsimulation_id\x18\x06 \x01(\t\x12@\n\x02ts\x18\x07 \x01(\x0b\x32\x1a.google.protobuf.TimestampB\x13\x8a\xf9+\x0f\x08\x01\x12\tTIMESTAMP8\x01H\x05\x88\x01\x01:\n\x82\xf9+\x06\n\x04\x44\x61taB\n\n\x08_data_idB\x0c\n\n_source_idB\x0c\n\n_cohort_idB\x0e\n\x0c_location_idB\x0c\n\n_sensor_idB\x05\n\x03_tsb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'cavnue.messages.data_warehouse.management.v2.data_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _DATA.fields_by_name['data_id']._options = None
  _DATA.fields_by_name['data_id']._serialized_options = b'\230\265\030\001\212\371+\002\010\001'
  _DATA.fields_by_name['source_id']._options = None
  _DATA.fields_by_name['source_id']._serialized_options = b'\212\371+\002\010\001'
  _DATA.fields_by_name['cohort_id']._options = None
  _DATA.fields_by_name['cohort_id']._serialized_options = b'\212\371+\004\010\001@\001'
  _DATA.fields_by_name['location_id']._options = None
  _DATA.fields_by_name['location_id']._serialized_options = b'\212\371+\004\010\001@\001'
  _DATA.fields_by_name['sensor_id']._options = None
  _DATA.fields_by_name['sensor_id']._serialized_options = b'\212\371+\004\010\001@\001'
  _DATA.fields_by_name['ts']._options = None
  _DATA.fields_by_name['ts']._serialized_options = b'\212\371+\017\010\001\022\tTIMESTAMP8\001'
  _DATA._options = None
  _DATA._serialized_options = b'\202\371+\006\n\004Data'
  _globals['_DATA']._serialized_start=268
  _globals['_DATA']._serialized_end=622
# @@protoc_insertion_point(module_scope)
