# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: cavnue/messages/trigger/v1/playback.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from cavnue.messages.common.v1 import common_pb2 as cavnue_dot_messages_dot_common_dot_v1_dot_common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n)cavnue/messages/trigger/v1/playback.proto\x12\x1a\x63\x61vnue.messages.trigger.v1\x1a&cavnue/messages/common/v1/common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xd6\x03\n\x0fPlaybackTrigger\x12\x31\n\x06header\x18\x01 \x01(\x0b\x32!.cavnue.messages.common.v1.Header\x12\x44\n\x07trigger\x18\x02 \x01(\x0b\x32\x33.cavnue.messages.trigger.v1.PlaybackTrigger.Trigger\x1a\xc9\x02\n\x07Trigger\x12\x0e\n\x06topics\x18\x01 \x03(\t\x12S\n\x04time\x18\x02 \x01(\x0b\x32@.cavnue.messages.trigger.v1.PlaybackTrigger.Trigger.PlaybackTimeH\x00\x88\x01\x01\x12\x1b\n\x0e\x64\x61taset_run_id\x18\x03 \x01(\x03H\x01\x88\x01\x01\x12\x1f\n\x12\x64\x61taset_identifier\x18\x04 \x01(\tH\x02\x88\x01\x01\x1ah\n\x0cPlaybackTime\x12,\n\x08start_ts\x18\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12*\n\x06\x65nd_ts\x18\x02 \x01(\x0b\x32\x1a.google.protobuf.TimestampB\x07\n\x05_timeB\x11\n\x0f_dataset_run_idB\x15\n\x13_dataset_identifierb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'cavnue.messages.trigger.v1.playback_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_PLAYBACKTRIGGER']._serialized_start=147
  _globals['_PLAYBACKTRIGGER']._serialized_end=617
  _globals['_PLAYBACKTRIGGER_TRIGGER']._serialized_start=288
  _globals['_PLAYBACKTRIGGER_TRIGGER']._serialized_end=617
  _globals['_PLAYBACKTRIGGER_TRIGGER_PLAYBACKTIME']._serialized_start=462
  _globals['_PLAYBACKTRIGGER_TRIGGER_PLAYBACKTIME']._serialized_end=566
# @@protoc_insertion_point(module_scope)
