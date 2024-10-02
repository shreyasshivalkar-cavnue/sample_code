import re
from datetime import datetime
from cavnue.messages.inference.v1 import radar_pb2

objectlist_msg = b'\n\x18\n\x0c\x08\x81\x8b\xbd\xb6\x06\x10\x80\xec\xd3\xf9\x02 \xdb\x93\xf6\xed\x88\x98\xde\xf2(\x12\x19\n\x06233394\x12\x052.0.0\x1a\x08\x08\x94\x01\x10\xe7\x94\x8c\x7f\x1a\x11\x08\xa7\xbb\xec\xc8\xe0\xff\xff\xff\xff\x01\x10\x81\xfc\xf7\x8c\x03"\x02\x102*\x04\x1a\x02\x10\x022-\t\x00\x00\x00\xa0\xd7\x0e\xb5?\x19\x00\x00\x00 \x93\xeb\x13@!\x00\x00\x00@8d\xa8?)\x00\x00\x00 \xf6\xf4K@1\x00\x00\x00@\xdf\x8e/\xbf2-\t\x00\x00\x00\xc0\xd4J\xb0?\x19\x00\x00\x00\xc0\x9c\xb9\x14@!\x00\x00\x00@\xf5\x03\xb9?)\x00\x00\x00@\xbc\xa7M@1\x00\x00\x00`\x83\xa5\x11?2-\t\x00\x00\x00\xe0&_\xcb\xbf\x19\x00\x00\x00`\xd4\xed!@!\x00\x00\x00\xa0\xb5\xfd\x96?)\x00\x00\x00\x80A\x81G@1\x00\x00\x00\xa0\xd04^?2-\t\x00\x00\x00\x80-\xa2y\xbf\x19\x00\x00\x00\xa0\xa4G+@!\x00\x00\x00\x80\xce\xd6y?)\x00\x00\x00 !GA@1\x00\x00\x00`\x90Vt\xbf2-\t\x00\x00\x00 3\x03\xb0\xbf\x19\x00\x00\x00\x00%\x96.@!\x00\x00\x00\xc0\xdd\xd5\x8e?)\x00\x00\x00\xc0\xb8fB@1\x00\x00\x00\xa02\\w\xbf2-\t\x00\x00\x00\x80bO\xb0?\x19\x00\x00\x00@%\x1e1@!\x00\x00\x00\x80\xea\x90\x84?)\x00\x00\x00@\xacR@@1\x00\x00\x00 \xf3\x7fl\xbf2-\t\x00\x00\x00\xc0/\x9e\xca\xbf\x19\x00\x00\x00\x008!6@!\x00\x00\x00 (\x04\x84?)\x00\x00\x00\x80\xa7\xb8=@1\x00\x00\x00@f\x8c\x8b?2-\t\x00\x00\x00 (\t\xc3\xbf\x19\x00\x00\x00 \xe8d7@!\x00\x00\x00\xa0v\xb5\x8e?)\x00\x00\x00\x00e\xfa=@1\x00\x00\x00\x00\x80\xb1\x83?'


# objectlist_msg = b'\\n\\x18\\n\\x0c\\x08\\x81\\x8b\\xbd\\xb6\\x06\\x10\\x80\\xec\\xd3\\xf9\\x02 \\xdb\\x93\\xf6\\xed\\x88\\x98\\xde\\xf2(\\x12\\x19\\n\\x06233394\\x12\\x052.0.0\\x1a\\x08\\x08\\x94\\x01\\x10\\xe7\\x94\\x8c\\x7f\\x1a\\x11\\x08\\xa7\\xbb\\xec\\xc8\\xe0\\xff\\xff\\xff\\xff\\x01\\x10\\x81\\xfc\\xf7\\x8c\\x03"\\x02\\x102*\\x04\\x1a\\x02\\x10\\x022-\\t\\x00\\x00\\x00\\xa0\\xd7\\x0e\\xb5?\\x19\\x00\\x00\\x00 \\x93\\xeb\\x13@!\\x00\\x00\\x00@8d\\xa8?)\\x00\\x00\\x00 \\xf6\\xf4K@1\\x00\\x00\\x00@\\xdf\\x8e/\\xbf2-\\t\\x00\\x00\\x00\\xc0\\xd4J\\xb0?\\x19\\x00\\x00\\x00\\xc0\\x9c\\xb9\\x14@!\\x00\\x00\\x00@\\xf5\\x03\\xb9?)\\x00\\x00\\x00@\\xbc\\xa7M@1\\x00\\x00\\x00`\\x83\\xa5\\x11?2-\\t\\x00\\x00\\x00\\xe0&_\\xcb\\xbf\\x19\\x00\\x00\\x00`\\xd4\\xed!@!\\x00\\x00\\x00\\xa0\\xb5\\xfd\\x96?)\\x00\\x00\\x00\\x80A\\x81G@1\\x00\\x00\\x00\\xa0\\xd04^?2-\\t\\x00\\x00\\x00\\x80-\\xa2y\\xbf\\x19\\x00\\x00\\x00\\xa0\\xa4G+@!\\x00\\x00\\x00\\x80\\xce\\xd6y?)\\x00\\x00\\x00 !GA@1\\x00\\x00\\x00`\\x90Vt\\xbf2-\\t\\x00\\x00\\x00 3\\x03\\xb0\\xbf\\x19\\x00\\x00\\x00\\x00%\\x96.@!\\x00\\x00\\x00\\xc0\\xdd\\xd5\\x8e?)\\x00\\x00\\x00\\xc0\\xb8fB@1\\x00\\x00\\x00\\xa02\\\\w\\xbf2-\\t\\x00\\x00\\x00\\x80bO\\xb0?\\x19\\x00\\x00\\x00@%\\x1e1@!\\x00\\x00\\x00\\x80\\xea\\x90\\x84?)\\x00\\x00\\x00@\\xacR@@1\\x00\\x00\\x00 \\xf3\\x7fl\\xbf2-\\t\\x00\\x00\\x00\\xc0/\\x9e\\xca\\xbf\\x19\\x00\\x00\\x00\\x008!6@!\\x00\\x00\\x00 (\\x04\\x84?)\\x00\\x00\\x00\\x80\\xa7\\xb8=@1\\x00\\x00\\x00@f\\x8c\\x8b?2-\\t\\x00\\x00\\x00 (\\t\\xc3\\xbf\\x19\\x00\\x00\\x00 \\xe8d7@!\\x00\\x00\\x00\\xa0v\\xb5\\x8e?)\\x00\\x00\\x00\\x00e\\xfa=@1\\x00\\x00\\x00\\x00\\x80\\xb1\\x83?'

objectList = radar_pb2.ObjectList()
objectList.ParseFromString(objectlist_msg)
print(objectList)

print(type(objectlist_msg))
