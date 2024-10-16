# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: cavnue/messages/data_warehouse/deployment/external/v1/event_bus.proto
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


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\nEcavnue/messages/data_warehouse/deployment/external/v1/event_bus.proto\x12\x35\x63\x61vnue.messages.data_warehouse.deployment.external.v1\x1a\'cavnue/third_party/bq/v1/bq_field.proto\x1a\'cavnue/third_party/bq/v1/bq_table.proto\x1a-cavnue/messages/common/v1/field_options.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xe1\x03\n\x08\x45ventBus\x12>\n\x02ts\x18\x01 \x01(\x0b\x32\x1a.google.protobuf.TimestampB\x11\x8a\xf9+\r\x08\x01\x12\tTIMESTAMPH\x00\x88\x01\x01\x12\x15\n\rtrace_context\x18\x02 \x01(\t\x12\x46\n\x08redis_ts\x18\x03 \x01(\x0b\x32\x1a.google.protobuf.TimestampB\x13\x8a\xf9+\x0f\x08\x01\x12\tTIMESTAMP8\x01H\x01\x88\x01\x01\x12\x1d\n\x08redis_id\x18\x04 \x01(\rB\x06\x8a\xf9+\x02\x08\x01H\x02\x88\x01\x01\x12#\n\x0cmessage_name\x18\x05 \x01(\tB\x08\x8a\xf9+\x04\x08\x01@\x01H\x03\x88\x01\x01\x12\x1c\n\x05topic\x18\x06 \x01(\tB\x08\x8a\xf9+\x04\x08\x01@\x01H\x04\x88\x01\x01\x12\x12\n\nparent_ids\x18\x07 \x03(\x03\x12\x1b\n\x02id\x18\x08 \x01(\x03\x42\n\x98\xb5\x18\x01\x8a\xf9+\x02\x08\x01H\x05\x88\x01\x01\x12\x1c\n\x07payload\x18\t \x01(\x0c\x42\x06\x8a\xf9+\x02\x08\x01H\x06\x88\x01\x01\x12\x1b\n\x06run_id\x18\n \x01(\x03\x42\x06\x8a\xf9+\x02@\x01H\x07\x88\x01\x01:\x0e\x82\xf9+\n\n\x08\x45ventBusB\x05\n\x03_tsB\x0b\n\t_redis_tsB\x0b\n\t_redis_idB\x0f\n\r_message_nameB\x08\n\x06_topicB\x05\n\x03_idB\n\n\x08_payloadB\t\n\x07_run_idb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'cavnue.messages.data_warehouse.deployment.external.v1.event_bus_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _EVENTBUS.fields_by_name['ts']._options = None
  _EVENTBUS.fields_by_name['ts']._serialized_options = b'\212\371+\r\010\001\022\tTIMESTAMP'
  _EVENTBUS.fields_by_name['redis_ts']._options = None
  _EVENTBUS.fields_by_name['redis_ts']._serialized_options = b'\212\371+\017\010\001\022\tTIMESTAMP8\001'
  _EVENTBUS.fields_by_name['redis_id']._options = None
  _EVENTBUS.fields_by_name['redis_id']._serialized_options = b'\212\371+\002\010\001'
  _EVENTBUS.fields_by_name['message_name']._options = None
  _EVENTBUS.fields_by_name['message_name']._serialized_options = b'\212\371+\004\010\001@\001'
  _EVENTBUS.fields_by_name['topic']._options = None
  _EVENTBUS.fields_by_name['topic']._serialized_options = b'\212\371+\004\010\001@\001'
  _EVENTBUS.fields_by_name['id']._options = None
  _EVENTBUS.fields_by_name['id']._serialized_options = b'\230\265\030\001\212\371+\002\010\001'
  _EVENTBUS.fields_by_name['payload']._options = None
  _EVENTBUS.fields_by_name['payload']._serialized_options = b'\212\371+\002\010\001'
  _EVENTBUS.fields_by_name['run_id']._options = None
  _EVENTBUS.fields_by_name['run_id']._serialized_options = b'\212\371+\002@\001'
  _EVENTBUS._options = None
  _EVENTBUS._serialized_options = b'\202\371+\n\n\010EventBus'
  _globals['_EVENTBUS']._serialized_start=291
  _globals['_EVENTBUS']._serialized_end=772
# @@protoc_insertion_point(module_scope)
