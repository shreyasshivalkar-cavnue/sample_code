# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: cavnue/messages/inference/v1/camera.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from cavnue.messages.common.v1 import common_pb2 as cavnue_dot_messages_dot_common_dot_v1_dot_common__pb2
from cavnue.messages.geometry.v1 import bounding_box_pb2 as cavnue_dot_messages_dot_geometry_dot_v1_dot_bounding__box__pb2
from google.protobuf import duration_pb2 as google_dot_protobuf_dot_duration__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n)cavnue/messages/inference/v1/camera.proto\x12\x1c\x63\x61vnue.messages.inference.v1\x1a&cavnue/messages/common/v1/common.proto\x1a.cavnue/messages/geometry/v1/bounding_box.proto\x1a\x1egoogle/protobuf/duration.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\x8e\x04\n\x0f\x43\x61meraDetection\x12\x31\n\x06header\x18\x01 \x01(\x0b\x32!.cavnue.messages.common.v1.Header\x12\x32\n\x0eobservation_ts\x18\x02 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x37\n\x14observation_duration\x18\x03 \x01(\x0b\x32\x19.google.protobuf.Duration\x12:\n\x0b\x64\x61ta_source\x18\x04 \x01(\x0b\x32%.cavnue.messages.common.v1.DataSource\x12K\n\ndetections\x18\x05 \x03(\x0b\x32\x37.cavnue.messages.inference.v1.CameraDetection.Detection\x12\x0f\n\x07\x64\x61ta_id\x18\x06 \x01(\x03\x1a\xc0\x01\n\tDetection\x12\x38\n\x04\x62\x62ox\x18\x01 \x01(\x0b\x32*.cavnue.messages.geometry.v1.BoundingBox2f\x12\x41\n\x0e\x63lassification\x18\x02 \x01(\x0e\x32).cavnue.messages.common.v1.Classification\x12\x18\n\x10\x63lass_confidence\x18\x03 \x01(\x02\x12\x1c\n\x14\x64\x65tection_confidence\x18\x04 \x01(\x02\x62\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'cavnue.messages.inference.v1.camera_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_CAMERADETECTION']._serialized_start=229
  _globals['_CAMERADETECTION']._serialized_end=755
  _globals['_CAMERADETECTION_DETECTION']._serialized_start=563
  _globals['_CAMERADETECTION_DETECTION']._serialized_end=755
# @@protoc_insertion_point(module_scope)
