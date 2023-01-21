module;
export module glad;

import core;

;export inline constexpr auto GL_DEPTH_BUFFER_BIT = 0x00000100
;export inline constexpr auto GL_STENCIL_BUFFER_BIT = 0x00000400
;export inline constexpr auto GL_COLOR_BUFFER_BIT = 0x00004000
;export inline constexpr auto GL_FALSE = 0
;export inline constexpr auto GL_TRUE = 1
;export inline constexpr auto GL_POINTS = 0x0000
;export inline constexpr auto GL_LINES = 0x0001
;export inline constexpr auto GL_LINE_LOOP = 0x0002
;export inline constexpr auto GL_LINE_STRIP = 0x0003
;export inline constexpr auto GL_TRIANGLES = 0x0004
;export inline constexpr auto GL_TRIANGLE_STRIP = 0x0005
;export inline constexpr auto GL_TRIANGLE_FAN = 0x0006
;export inline constexpr auto GL_NEVER = 0x0200
;export inline constexpr auto GL_LESS = 0x0201
;export inline constexpr auto GL_EQUAL = 0x0202
;export inline constexpr auto GL_LEQUAL = 0x0203
;export inline constexpr auto GL_GREATER = 0x0204
;export inline constexpr auto GL_NOTEQUAL = 0x0205
;export inline constexpr auto GL_GEQUAL = 0x0206
;export inline constexpr auto GL_ALWAYS = 0x0207
;export inline constexpr auto GL_ZERO = 0
;export inline constexpr auto GL_ONE = 1
;export inline constexpr auto GL_SRC_COLOR = 0x0300
;export inline constexpr auto GL_ONE_MINUS_SRC_COLOR = 0x0301
;export inline constexpr auto GL_SRC_ALPHA = 0x0302
;export inline constexpr auto GL_ONE_MINUS_SRC_ALPHA = 0x0303
;export inline constexpr auto GL_DST_ALPHA = 0x0304
;export inline constexpr auto GL_ONE_MINUS_DST_ALPHA = 0x0305
;export inline constexpr auto GL_DST_COLOR = 0x0306
;export inline constexpr auto GL_ONE_MINUS_DST_COLOR = 0x0307
;export inline constexpr auto GL_SRC_ALPHA_SATURATE = 0x0308
;export inline constexpr auto GL_NONE = 0
;export inline constexpr auto GL_FRONT_LEFT = 0x0400
;export inline constexpr auto GL_FRONT_RIGHT = 0x0401
;export inline constexpr auto GL_BACK_LEFT = 0x0402
;export inline constexpr auto GL_BACK_RIGHT = 0x0403
;export inline constexpr auto GL_FRONT = 0x0404
;export inline constexpr auto GL_BACK = 0x0405
;export inline constexpr auto GL_LEFT = 0x0406
;export inline constexpr auto GL_RIGHT = 0x0407
;export inline constexpr auto GL_FRONT_AND_BACK = 0x0408
;export inline constexpr auto GL_NO_ERROR = 0
;export inline constexpr auto GL_INVALID_ENUM = 0x0500
;export inline constexpr auto GL_INVALID_VALUE = 0x0501
;export inline constexpr auto GL_INVALID_OPERATION = 0x0502
;export inline constexpr auto GL_OUT_OF_MEMORY = 0x0505
;export inline constexpr auto GL_CW = 0x0900
;export inline constexpr auto GL_CCW = 0x0901
;export inline constexpr auto GL_POINT_SIZE = 0x0B11
;export inline constexpr auto GL_POINT_SIZE_RANGE = 0x0B12
;export inline constexpr auto GL_POINT_SIZE_GRANULARITY = 0x0B13
;export inline constexpr auto GL_LINE_SMOOTH = 0x0B20
;export inline constexpr auto GL_LINE_WIDTH = 0x0B21
;export inline constexpr auto GL_LINE_WIDTH_RANGE = 0x0B22
;export inline constexpr auto GL_LINE_WIDTH_GRANULARITY = 0x0B23
;export inline constexpr auto GL_POLYGON_MODE = 0x0B40
;export inline constexpr auto GL_POLYGON_SMOOTH = 0x0B41
;export inline constexpr auto GL_CULL_FACE = 0x0B44
;export inline constexpr auto GL_CULL_FACE_MODE = 0x0B45
;export inline constexpr auto GL_FRONT_FACE = 0x0B46
;export inline constexpr auto GL_DEPTH_RANGE = 0x0B70
;export inline constexpr auto GL_DEPTH_TEST = 0x0B71
;export inline constexpr auto GL_DEPTH_WRITEMASK = 0x0B72
;export inline constexpr auto GL_DEPTH_CLEAR_VALUE = 0x0B73
;export inline constexpr auto GL_DEPTH_FUNC = 0x0B74
;export inline constexpr auto GL_STENCIL_TEST = 0x0B90
;export inline constexpr auto GL_STENCIL_CLEAR_VALUE = 0x0B91
;export inline constexpr auto GL_STENCIL_FUNC = 0x0B92
;export inline constexpr auto GL_STENCIL_VALUE_MASK = 0x0B93
;export inline constexpr auto GL_STENCIL_FAIL = 0x0B94
;export inline constexpr auto GL_STENCIL_PASS_DEPTH_FAIL = 0x0B95
;export inline constexpr auto GL_STENCIL_PASS_DEPTH_PASS = 0x0B96
;export inline constexpr auto GL_STENCIL_REF = 0x0B97
;export inline constexpr auto GL_STENCIL_WRITEMASK = 0x0B98
;export inline constexpr auto GL_VIEWPORT = 0x0BA2
;export inline constexpr auto GL_DITHER = 0x0BD0
;export inline constexpr auto GL_BLEND_DST = 0x0BE0
;export inline constexpr auto GL_BLEND_SRC = 0x0BE1
;export inline constexpr auto GL_BLEND = 0x0BE2
;export inline constexpr auto GL_LOGIC_OP_MODE = 0x0BF0
;export inline constexpr auto GL_DRAW_BUFFER = 0x0C01
;export inline constexpr auto GL_READ_BUFFER = 0x0C02
;export inline constexpr auto GL_SCISSOR_BOX = 0x0C10
;export inline constexpr auto GL_SCISSOR_TEST = 0x0C11
;export inline constexpr auto GL_COLOR_CLEAR_VALUE = 0x0C22
;export inline constexpr auto GL_COLOR_WRITEMASK = 0x0C23
;export inline constexpr auto GL_DOUBLEBUFFER = 0x0C32
;export inline constexpr auto GL_STEREO = 0x0C33
;export inline constexpr auto GL_LINE_SMOOTH_HINT = 0x0C52
;export inline constexpr auto GL_POLYGON_SMOOTH_HINT = 0x0C53
;export inline constexpr auto GL_UNPACK_SWAP_BYTES = 0x0CF0
;export inline constexpr auto GL_UNPACK_LSB_FIRST = 0x0CF1
;export inline constexpr auto GL_UNPACK_ROW_LENGTH = 0x0CF2
;export inline constexpr auto GL_UNPACK_SKIP_ROWS = 0x0CF3
;export inline constexpr auto GL_UNPACK_SKIP_PIXELS = 0x0CF4
;export inline constexpr auto GL_UNPACK_ALIGNMENT = 0x0CF5
;export inline constexpr auto GL_PACK_SWAP_BYTES = 0x0D00
;export inline constexpr auto GL_PACK_LSB_FIRST = 0x0D01
;export inline constexpr auto GL_PACK_ROW_LENGTH = 0x0D02
;export inline constexpr auto GL_PACK_SKIP_ROWS = 0x0D03
;export inline constexpr auto GL_PACK_SKIP_PIXELS = 0x0D04
;export inline constexpr auto GL_PACK_ALIGNMENT = 0x0D05
;export inline constexpr auto GL_MAX_TEXTURE_SIZE = 0x0D33
;export inline constexpr auto GL_MAX_VIEWPORT_DIMS = 0x0D3A
;export inline constexpr auto GL_SUBPIXEL_BITS = 0x0D50
;export inline constexpr auto GL_TEXTURE_1D = 0x0DE0
;export inline constexpr auto GL_TEXTURE_2D = 0x0DE1
;export inline constexpr auto GL_TEXTURE_WIDTH = 0x1000
;export inline constexpr auto GL_TEXTURE_HEIGHT = 0x1001
;export inline constexpr auto GL_TEXTURE_BORDER_COLOR = 0x1004
;export inline constexpr auto GL_DONT_CARE = 0x1100
;export inline constexpr auto GL_FASTEST = 0x1101
;export inline constexpr auto GL_NICEST = 0x1102
;export inline constexpr auto GL_BYTE = 0x1400
;export inline constexpr auto GL_UNSIGNED_BYTE = 0x1401
;export inline constexpr auto GL_SHORT = 0x1402
;export inline constexpr auto GL_UNSIGNED_SHORT = 0x1403
;export inline constexpr auto GL_INT = 0x1404
;export inline constexpr auto GL_UNSIGNED_INT = 0x1405
;export inline constexpr auto GL_FLOAT = 0x1406
;export inline constexpr auto GL_CLEAR = 0x1500
;export inline constexpr auto GL_AND = 0x1501
;export inline constexpr auto GL_AND_REVERSE = 0x1502
;export inline constexpr auto GL_COPY = 0x1503
;export inline constexpr auto GL_AND_INVERTED = 0x1504
;export inline constexpr auto GL_NOOP = 0x1505
;export inline constexpr auto GL_XOR = 0x1506
;export inline constexpr auto GL_OR = 0x1507
;export inline constexpr auto GL_NOR = 0x1508
;export inline constexpr auto GL_EQUIV = 0x1509
;export inline constexpr auto GL_INVERT = 0x150A
;export inline constexpr auto GL_OR_REVERSE = 0x150B
;export inline constexpr auto GL_COPY_INVERTED = 0x150C
;export inline constexpr auto GL_OR_INVERTED = 0x150D
;export inline constexpr auto GL_NAND = 0x150E
;export inline constexpr auto GL_SET = 0x150F
;export inline constexpr auto GL_TEXTURE = 0x1702
;export inline constexpr auto GL_COLOR = 0x1800
;export inline constexpr auto GL_DEPTH = 0x1801
;export inline constexpr auto GL_STENCIL = 0x1802
;export inline constexpr auto GL_STENCIL_INDEX = 0x1901
;export inline constexpr auto GL_DEPTH_COMPONENT = 0x1902
;export inline constexpr auto GL_RED = 0x1903
;export inline constexpr auto GL_GREEN = 0x1904
;export inline constexpr auto GL_BLUE = 0x1905
;export inline constexpr auto GL_ALPHA = 0x1906
;export inline constexpr auto GL_RGB = 0x1907
;export inline constexpr auto GL_RGBA = 0x1908
;export inline constexpr auto GL_POINT = 0x1B00
;export inline constexpr auto GL_LINE = 0x1B01
;export inline constexpr auto GL_FILL = 0x1B02
;export inline constexpr auto GL_KEEP = 0x1E00
;export inline constexpr auto GL_REPLACE = 0x1E01
;export inline constexpr auto GL_INCR = 0x1E02
;export inline constexpr auto GL_DECR = 0x1E03
;export inline constexpr auto GL_VENDOR = 0x1F00
;export inline constexpr auto GL_RENDERER = 0x1F01
;export inline constexpr auto GL_VERSION = 0x1F02
;export inline constexpr auto GL_EXTENSIONS = 0x1F03
;export inline constexpr auto GL_NEAREST = 0x2600
;export inline constexpr auto GL_LINEAR = 0x2601
;export inline constexpr auto GL_NEAREST_MIPMAP_NEAREST = 0x2700
;export inline constexpr auto GL_LINEAR_MIPMAP_NEAREST = 0x2701
;export inline constexpr auto GL_NEAREST_MIPMAP_LINEAR = 0x2702
;export inline constexpr auto GL_LINEAR_MIPMAP_LINEAR = 0x2703
;export inline constexpr auto GL_TEXTURE_MAG_FILTER = 0x2800
;export inline constexpr auto GL_TEXTURE_MIN_FILTER = 0x2801
;export inline constexpr auto GL_TEXTURE_WRAP_S = 0x2802
;export inline constexpr auto GL_TEXTURE_WRAP_T = 0x2803
;export inline constexpr auto GL_REPEAT = 0x2901
;export inline constexpr auto GL_COLOR_LOGIC_OP = 0x0BF2
;export inline constexpr auto GL_POLYGON_OFFSET_UNITS = 0x2A00
;export inline constexpr auto GL_POLYGON_OFFSET_POINT = 0x2A01
;export inline constexpr auto GL_POLYGON_OFFSET_LINE = 0x2A02
;export inline constexpr auto GL_POLYGON_OFFSET_FILL = 0x8037
;export inline constexpr auto GL_POLYGON_OFFSET_FACTOR = 0x8038
;export inline constexpr auto GL_TEXTURE_BINDING_1D = 0x8068
;export inline constexpr auto GL_TEXTURE_BINDING_2D = 0x8069
;export inline constexpr auto GL_TEXTURE_INTERNAL_FORMAT = 0x1003
;export inline constexpr auto GL_TEXTURE_RED_SIZE = 0x805C
;export inline constexpr auto GL_TEXTURE_GREEN_SIZE = 0x805D
;export inline constexpr auto GL_TEXTURE_BLUE_SIZE = 0x805E
;export inline constexpr auto GL_TEXTURE_ALPHA_SIZE = 0x805F
;export inline constexpr auto GL_DOUBLE = 0x140A
;export inline constexpr auto GL_PROXY_TEXTURE_1D = 0x8063
;export inline constexpr auto GL_PROXY_TEXTURE_2D = 0x8064
;export inline constexpr auto GL_R3_G3_B2 = 0x2A10
;export inline constexpr auto GL_RGB4 = 0x804F
;export inline constexpr auto GL_RGB5 = 0x8050
;export inline constexpr auto GL_RGB8 = 0x8051
;export inline constexpr auto GL_RGB10 = 0x8052
;export inline constexpr auto GL_RGB12 = 0x8053
;export inline constexpr auto GL_RGB16 = 0x8054
;export inline constexpr auto GL_RGBA2 = 0x8055
;export inline constexpr auto GL_RGBA4 = 0x8056
;export inline constexpr auto GL_RGB5_A1 = 0x8057
;export inline constexpr auto GL_RGBA8 = 0x8058
;export inline constexpr auto GL_RGB10_A2 = 0x8059
;export inline constexpr auto GL_RGBA12 = 0x805A
;export inline constexpr auto GL_RGBA16 = 0x805B
;export inline constexpr auto GL_UNSIGNED_BYTE_3_3_2 = 0x8032
;export inline constexpr auto GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033
;export inline constexpr auto GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034
;export inline constexpr auto GL_UNSIGNED_INT_8_8_8_8 = 0x8035
;export inline constexpr auto GL_UNSIGNED_INT_10_10_10_2 = 0x8036
;export inline constexpr auto GL_TEXTURE_BINDING_3D = 0x806A
;export inline constexpr auto GL_PACK_SKIP_IMAGES = 0x806B
;export inline constexpr auto GL_PACK_IMAGE_HEIGHT = 0x806C
;export inline constexpr auto GL_UNPACK_SKIP_IMAGES = 0x806D
;export inline constexpr auto GL_UNPACK_IMAGE_HEIGHT = 0x806E
;export inline constexpr auto GL_TEXTURE_3D = 0x806F
;export inline constexpr auto GL_PROXY_TEXTURE_3D = 0x8070
;export inline constexpr auto GL_TEXTURE_DEPTH = 0x8071
;export inline constexpr auto GL_TEXTURE_WRAP_R = 0x8072
;export inline constexpr auto GL_MAX_3D_TEXTURE_SIZE = 0x8073
;export inline constexpr auto GL_UNSIGNED_BYTE_2_3_3_REV = 0x8362
;export inline constexpr auto GL_UNSIGNED_SHORT_5_6_5 = 0x8363
;export inline constexpr auto GL_UNSIGNED_SHORT_5_6_5_REV = 0x8364
;export inline constexpr auto GL_UNSIGNED_SHORT_4_4_4_4_REV = 0x8365
;export inline constexpr auto GL_UNSIGNED_SHORT_1_5_5_5_REV = 0x8366
;export inline constexpr auto GL_UNSIGNED_INT_8_8_8_8_REV = 0x8367
;export inline constexpr auto GL_UNSIGNED_INT_2_10_10_10_REV = 0x8368
;export inline constexpr auto GL_BGR = 0x80E0
;export inline constexpr auto GL_BGRA = 0x80E1
;export inline constexpr auto GL_MAX_ELEMENTS_VERTICES = 0x80E8
;export inline constexpr auto GL_MAX_ELEMENTS_INDICES = 0x80E9
;export inline constexpr auto GL_CLAMP_TO_EDGE = 0x812F
;export inline constexpr auto GL_TEXTURE_MIN_LOD = 0x813A
;export inline constexpr auto GL_TEXTURE_MAX_LOD = 0x813B
;export inline constexpr auto GL_TEXTURE_BASE_LEVEL = 0x813C
;export inline constexpr auto GL_TEXTURE_MAX_LEVEL = 0x813D
;export inline constexpr auto GL_SMOOTH_POINT_SIZE_RANGE = 0x0B12
;export inline constexpr auto GL_SMOOTH_POINT_SIZE_GRANULARITY = 0x0B13
;export inline constexpr auto GL_SMOOTH_LINE_WIDTH_RANGE = 0x0B22
;export inline constexpr auto GL_SMOOTH_LINE_WIDTH_GRANULARITY = 0x0B23
;export inline constexpr auto GL_ALIASED_LINE_WIDTH_RANGE = 0x846E
;export inline constexpr auto GL_TEXTURE0 = 0x84C0
;export inline constexpr auto GL_TEXTURE1 = 0x84C1
;export inline constexpr auto GL_TEXTURE2 = 0x84C2
;export inline constexpr auto GL_TEXTURE3 = 0x84C3
;export inline constexpr auto GL_TEXTURE4 = 0x84C4
;export inline constexpr auto GL_TEXTURE5 = 0x84C5
;export inline constexpr auto GL_TEXTURE6 = 0x84C6
;export inline constexpr auto GL_TEXTURE7 = 0x84C7
;export inline constexpr auto GL_TEXTURE8 = 0x84C8
;export inline constexpr auto GL_TEXTURE9 = 0x84C9
;export inline constexpr auto GL_TEXTURE10 = 0x84CA
;export inline constexpr auto GL_TEXTURE11 = 0x84CB
;export inline constexpr auto GL_TEXTURE12 = 0x84CC
;export inline constexpr auto GL_TEXTURE13 = 0x84CD
;export inline constexpr auto GL_TEXTURE14 = 0x84CE
;export inline constexpr auto GL_TEXTURE15 = 0x84CF
;export inline constexpr auto GL_TEXTURE16 = 0x84D0
;export inline constexpr auto GL_TEXTURE17 = 0x84D1
;export inline constexpr auto GL_TEXTURE18 = 0x84D2
;export inline constexpr auto GL_TEXTURE19 = 0x84D3
;export inline constexpr auto GL_TEXTURE20 = 0x84D4
;export inline constexpr auto GL_TEXTURE21 = 0x84D5
;export inline constexpr auto GL_TEXTURE22 = 0x84D6
;export inline constexpr auto GL_TEXTURE23 = 0x84D7
;export inline constexpr auto GL_TEXTURE24 = 0x84D8
;export inline constexpr auto GL_TEXTURE25 = 0x84D9
;export inline constexpr auto GL_TEXTURE26 = 0x84DA
;export inline constexpr auto GL_TEXTURE27 = 0x84DB
;export inline constexpr auto GL_TEXTURE28 = 0x84DC
;export inline constexpr auto GL_TEXTURE29 = 0x84DD
;export inline constexpr auto GL_TEXTURE30 = 0x84DE
;export inline constexpr auto GL_TEXTURE31 = 0x84DF
;export inline constexpr auto GL_ACTIVE_TEXTURE = 0x84E0
;export inline constexpr auto GL_MULTISAMPLE = 0x809D
;export inline constexpr auto GL_SAMPLE_ALPHA_TO_COVERAGE = 0x809E
;export inline constexpr auto GL_SAMPLE_ALPHA_TO_ONE = 0x809F
;export inline constexpr auto GL_SAMPLE_COVERAGE = 0x80A0
;export inline constexpr auto GL_SAMPLE_BUFFERS = 0x80A8
;export inline constexpr auto GL_SAMPLES = 0x80A9
;export inline constexpr auto GL_SAMPLE_COVERAGE_VALUE = 0x80AA
;export inline constexpr auto GL_SAMPLE_COVERAGE_INVERT = 0x80AB
;export inline constexpr auto GL_TEXTURE_CUBE_MAP = 0x8513
;export inline constexpr auto GL_TEXTURE_BINDING_CUBE_MAP = 0x8514
;export inline constexpr auto GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515
;export inline constexpr auto GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516
;export inline constexpr auto GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517
;export inline constexpr auto GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518
;export inline constexpr auto GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519
;export inline constexpr auto GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A
;export inline constexpr auto GL_PROXY_TEXTURE_CUBE_MAP = 0x851B
;export inline constexpr auto GL_MAX_CUBE_MAP_TEXTURE_SIZE = 0x851C
;export inline constexpr auto GL_COMPRESSED_RGB = 0x84ED
;export inline constexpr auto GL_COMPRESSED_RGBA = 0x84EE
;export inline constexpr auto GL_TEXTURE_COMPRESSION_HINT = 0x84EF
;export inline constexpr auto GL_TEXTURE_COMPRESSED_IMAGE_SIZE = 0x86A0
;export inline constexpr auto GL_TEXTURE_COMPRESSED = 0x86A1
;export inline constexpr auto GL_NUM_COMPRESSED_TEXTURE_FORMATS = 0x86A2
;export inline constexpr auto GL_COMPRESSED_TEXTURE_FORMATS = 0x86A3
;export inline constexpr auto GL_CLAMP_TO_BORDER = 0x812D
;export inline constexpr auto GL_BLEND_DST_RGB = 0x80C8
;export inline constexpr auto GL_BLEND_SRC_RGB = 0x80C9
;export inline constexpr auto GL_BLEND_DST_ALPHA = 0x80CA
;export inline constexpr auto GL_BLEND_SRC_ALPHA = 0x80CB
;export inline constexpr auto GL_POINT_FADE_THRESHOLD_SIZE = 0x8128
;export inline constexpr auto GL_DEPTH_COMPONENT16 = 0x81A5
;export inline constexpr auto GL_DEPTH_COMPONENT24 = 0x81A6
;export inline constexpr auto GL_DEPTH_COMPONENT32 = 0x81A7
;export inline constexpr auto GL_MIRRORED_REPEAT = 0x8370
;export inline constexpr auto GL_MAX_TEXTURE_LOD_BIAS = 0x84FD
;export inline constexpr auto GL_TEXTURE_LOD_BIAS = 0x8501
;export inline constexpr auto GL_INCR_WRAP = 0x8507
;export inline constexpr auto GL_DECR_WRAP = 0x8508
;export inline constexpr auto GL_TEXTURE_DEPTH_SIZE = 0x884A
;export inline constexpr auto GL_TEXTURE_COMPARE_MODE = 0x884C
;export inline constexpr auto GL_TEXTURE_COMPARE_FUNC = 0x884D
;export inline constexpr auto GL_BLEND_COLOR = 0x8005
;export inline constexpr auto GL_BLEND_EQUATION = 0x8009
;export inline constexpr auto GL_CONSTANT_COLOR = 0x8001
;export inline constexpr auto GL_ONE_MINUS_CONSTANT_COLOR = 0x8002
;export inline constexpr auto GL_CONSTANT_ALPHA = 0x8003
;export inline constexpr auto GL_ONE_MINUS_CONSTANT_ALPHA = 0x8004
;export inline constexpr auto GL_FUNC_ADD = 0x8006
;export inline constexpr auto GL_FUNC_REVERSE_SUBTRACT = 0x800B
;export inline constexpr auto GL_FUNC_SUBTRACT = 0x800A
;export inline constexpr auto GL_MIN = 0x8007
;export inline constexpr auto GL_MAX = 0x8008
;export inline constexpr auto GL_BUFFER_SIZE = 0x8764
;export inline constexpr auto GL_BUFFER_USAGE = 0x8765
;export inline constexpr auto GL_QUERY_COUNTER_BITS = 0x8864
;export inline constexpr auto GL_CURRENT_QUERY = 0x8865
;export inline constexpr auto GL_QUERY_RESULT = 0x8866
;export inline constexpr auto GL_QUERY_RESULT_AVAILABLE = 0x8867
;export inline constexpr auto GL_ARRAY_BUFFER = 0x8892
;export inline constexpr auto GL_ELEMENT_ARRAY_BUFFER = 0x8893
;export inline constexpr auto GL_ARRAY_BUFFER_BINDING = 0x8894
;export inline constexpr auto GL_ELEMENT_ARRAY_BUFFER_BINDING = 0x8895
;export inline constexpr auto GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 0x889F
;export inline constexpr auto GL_READ_ONLY = 0x88B8
;export inline constexpr auto GL_WRITE_ONLY = 0x88B9
;export inline constexpr auto GL_READ_WRITE = 0x88BA
;export inline constexpr auto GL_BUFFER_ACCESS = 0x88BB
;export inline constexpr auto GL_BUFFER_MAPPED = 0x88BC
;export inline constexpr auto GL_BUFFER_MAP_POINTER = 0x88BD
;export inline constexpr auto GL_STREAM_DRAW = 0x88E0
;export inline constexpr auto GL_STREAM_READ = 0x88E1
;export inline constexpr auto GL_STREAM_COPY = 0x88E2
;export inline constexpr auto GL_STATIC_DRAW = 0x88E4
;export inline constexpr auto GL_STATIC_READ = 0x88E5
;export inline constexpr auto GL_STATIC_COPY = 0x88E6
;export inline constexpr auto GL_DYNAMIC_DRAW = 0x88E8
;export inline constexpr auto GL_DYNAMIC_READ = 0x88E9
;export inline constexpr auto GL_DYNAMIC_COPY = 0x88EA
;export inline constexpr auto GL_SAMPLES_PASSED = 0x8914
;export inline constexpr auto GL_SRC1_ALPHA = 0x8589
;export inline constexpr auto GL_BLEND_EQUATION_RGB = 0x8009
;export inline constexpr auto GL_VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622
;export inline constexpr auto GL_VERTEX_ATTRIB_ARRAY_SIZE = 0x8623
;export inline constexpr auto GL_VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624
;export inline constexpr auto GL_VERTEX_ATTRIB_ARRAY_TYPE = 0x8625
;export inline constexpr auto GL_CURRENT_VERTEX_ATTRIB = 0x8626
;export inline constexpr auto GL_VERTEX_PROGRAM_POINT_SIZE = 0x8642
;export inline constexpr auto GL_VERTEX_ATTRIB_ARRAY_POINTER = 0x8645
;export inline constexpr auto GL_STENCIL_BACK_FUNC = 0x8800
;export inline constexpr auto GL_STENCIL_BACK_FAIL = 0x8801
;export inline constexpr auto GL_STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802
;export inline constexpr auto GL_STENCIL_BACK_PASS_DEPTH_PASS = 0x8803
;export inline constexpr auto GL_MAX_DRAW_BUFFERS = 0x8824
;export inline constexpr auto GL_DRAW_BUFFER0 = 0x8825
;export inline constexpr auto GL_DRAW_BUFFER1 = 0x8826
;export inline constexpr auto GL_DRAW_BUFFER2 = 0x8827
;export inline constexpr auto GL_DRAW_BUFFER3 = 0x8828
;export inline constexpr auto GL_DRAW_BUFFER4 = 0x8829
;export inline constexpr auto GL_DRAW_BUFFER5 = 0x882A
;export inline constexpr auto GL_DRAW_BUFFER6 = 0x882B
;export inline constexpr auto GL_DRAW_BUFFER7 = 0x882C
;export inline constexpr auto GL_DRAW_BUFFER8 = 0x882D
;export inline constexpr auto GL_DRAW_BUFFER9 = 0x882E
;export inline constexpr auto GL_DRAW_BUFFER10 = 0x882F
;export inline constexpr auto GL_DRAW_BUFFER11 = 0x8830
;export inline constexpr auto GL_DRAW_BUFFER12 = 0x8831
;export inline constexpr auto GL_DRAW_BUFFER13 = 0x8832
;export inline constexpr auto GL_DRAW_BUFFER14 = 0x8833
;export inline constexpr auto GL_DRAW_BUFFER15 = 0x8834
;export inline constexpr auto GL_BLEND_EQUATION_ALPHA = 0x883D
;export inline constexpr auto GL_MAX_VERTEX_ATTRIBS = 0x8869
;export inline constexpr auto GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A
;export inline constexpr auto GL_MAX_TEXTURE_IMAGE_UNITS = 0x8872
;export inline constexpr auto GL_FRAGMENT_SHADER = 0x8B30
;export inline constexpr auto GL_VERTEX_SHADER = 0x8B31
;export inline constexpr auto GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = 0x8B49
;export inline constexpr auto GL_MAX_VERTEX_UNIFORM_COMPONENTS = 0x8B4A
;export inline constexpr auto GL_MAX_VARYING_FLOATS = 0x8B4B
;export inline constexpr auto GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C
;export inline constexpr auto GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D
;export inline constexpr auto GL_SHADER_TYPE = 0x8B4F
;export inline constexpr auto GL_FLOAT_VEC2 = 0x8B50
;export inline constexpr auto GL_FLOAT_VEC3 = 0x8B51
;export inline constexpr auto GL_FLOAT_VEC4 = 0x8B52
;export inline constexpr auto GL_INT_VEC2 = 0x8B53
;export inline constexpr auto GL_INT_VEC3 = 0x8B54
;export inline constexpr auto GL_INT_VEC4 = 0x8B55
;export inline constexpr auto GL_BOOL = 0x8B56
;export inline constexpr auto GL_BOOL_VEC2 = 0x8B57
;export inline constexpr auto GL_BOOL_VEC3 = 0x8B58
;export inline constexpr auto GL_BOOL_VEC4 = 0x8B59
;export inline constexpr auto GL_FLOAT_MAT2 = 0x8B5A
;export inline constexpr auto GL_FLOAT_MAT3 = 0x8B5B
;export inline constexpr auto GL_FLOAT_MAT4 = 0x8B5C
;export inline constexpr auto GL_SAMPLER_1D = 0x8B5D
;export inline constexpr auto GL_SAMPLER_2D = 0x8B5E
;export inline constexpr auto GL_SAMPLER_3D = 0x8B5F
;export inline constexpr auto GL_SAMPLER_CUBE = 0x8B60
;export inline constexpr auto GL_SAMPLER_1D_SHADOW = 0x8B61
;export inline constexpr auto GL_SAMPLER_2D_SHADOW = 0x8B62
;export inline constexpr auto GL_DELETE_STATUS = 0x8B80
;export inline constexpr auto GL_COMPILE_STATUS = 0x8B81
;export inline constexpr auto GL_LINK_STATUS = 0x8B82
;export inline constexpr auto GL_VALIDATE_STATUS = 0x8B83
;export inline constexpr auto GL_INFO_LOG_LENGTH = 0x8B84
;export inline constexpr auto GL_ATTACHED_SHADERS = 0x8B85
;export inline constexpr auto GL_ACTIVE_UNIFORMS = 0x8B86
;export inline constexpr auto GL_ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87
;export inline constexpr auto GL_SHADER_SOURCE_LENGTH = 0x8B88
;export inline constexpr auto GL_ACTIVE_ATTRIBUTES = 0x8B89
;export inline constexpr auto GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A
;export inline constexpr auto GL_FRAGMENT_SHADER_DERIVATIVE_HINT = 0x8B8B
;export inline constexpr auto GL_SHADING_LANGUAGE_VERSION = 0x8B8C
;export inline constexpr auto GL_CURRENT_PROGRAM = 0x8B8D
;export inline constexpr auto GL_POINT_SPRITE_COORD_ORIGIN = 0x8CA0
;export inline constexpr auto GL_LOWER_LEFT = 0x8CA1
;export inline constexpr auto GL_UPPER_LEFT = 0x8CA2
;export inline constexpr auto GL_STENCIL_BACK_REF = 0x8CA3
;export inline constexpr auto GL_STENCIL_BACK_VALUE_MASK = 0x8CA4
;export inline constexpr auto GL_STENCIL_BACK_WRITEMASK = 0x8CA5
;export inline constexpr auto GL_PIXEL_PACK_BUFFER = 0x88EB
;export inline constexpr auto GL_PIXEL_UNPACK_BUFFER = 0x88EC
;export inline constexpr auto GL_PIXEL_PACK_BUFFER_BINDING = 0x88ED
;export inline constexpr auto GL_PIXEL_UNPACK_BUFFER_BINDING = 0x88EF
;export inline constexpr auto GL_FLOAT_MAT2x3 = 0x8B65
;export inline constexpr auto GL_FLOAT_MAT2x4 = 0x8B66
;export inline constexpr auto GL_FLOAT_MAT3x2 = 0x8B67
;export inline constexpr auto GL_FLOAT_MAT3x4 = 0x8B68
;export inline constexpr auto GL_FLOAT_MAT4x2 = 0x8B69
;export inline constexpr auto GL_FLOAT_MAT4x3 = 0x8B6A
;export inline constexpr auto GL_SRGB = 0x8C40
;export inline constexpr auto GL_SRGB8 = 0x8C41
;export inline constexpr auto GL_SRGB_ALPHA = 0x8C42
;export inline constexpr auto GL_SRGB8_ALPHA8 = 0x8C43
;export inline constexpr auto GL_COMPRESSED_SRGB = 0x8C48
;export inline constexpr auto GL_COMPRESSED_SRGB_ALPHA = 0x8C49
;export inline constexpr auto GL_COMPARE_REF_TO_TEXTURE = 0x884E
;export inline constexpr auto GL_CLIP_DISTANCE0 = 0x3000
;export inline constexpr auto GL_CLIP_DISTANCE1 = 0x3001
;export inline constexpr auto GL_CLIP_DISTANCE2 = 0x3002
;export inline constexpr auto GL_CLIP_DISTANCE3 = 0x3003
;export inline constexpr auto GL_CLIP_DISTANCE4 = 0x3004
;export inline constexpr auto GL_CLIP_DISTANCE5 = 0x3005
;export inline constexpr auto GL_CLIP_DISTANCE6 = 0x3006
;export inline constexpr auto GL_CLIP_DISTANCE7 = 0x3007
;export inline constexpr auto GL_MAX_CLIP_DISTANCES = 0x0D32
;export inline constexpr auto GL_MAJOR_VERSION = 0x821B
;export inline constexpr auto GL_MINOR_VERSION = 0x821C
;export inline constexpr auto GL_NUM_EXTENSIONS = 0x821D
;export inline constexpr auto GL_CONTEXT_FLAGS = 0x821E
;export inline constexpr auto GL_COMPRESSED_RED = 0x8225
;export inline constexpr auto GL_COMPRESSED_RG = 0x8226
;export inline constexpr auto GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001
;export inline constexpr auto GL_RGBA32F = 0x8814
;export inline constexpr auto GL_RGB32F = 0x8815
;export inline constexpr auto GL_RGBA16F = 0x881A
;export inline constexpr auto GL_RGB16F = 0x881B
;export inline constexpr auto GL_VERTEX_ATTRIB_ARRAY_INTEGER = 0x88FD
;export inline constexpr auto GL_MAX_ARRAY_TEXTURE_LAYERS = 0x88FF
;export inline constexpr auto GL_MIN_PROGRAM_TEXEL_OFFSET = 0x8904
;export inline constexpr auto GL_MAX_PROGRAM_TEXEL_OFFSET = 0x8905
;export inline constexpr auto GL_CLAMP_READ_COLOR = 0x891C
;export inline constexpr auto GL_FIXED_ONLY = 0x891D
;export inline constexpr auto GL_MAX_VARYING_COMPONENTS = 0x8B4B
;export inline constexpr auto GL_TEXTURE_1D_ARRAY = 0x8C18
;export inline constexpr auto GL_PROXY_TEXTURE_1D_ARRAY = 0x8C19
;export inline constexpr auto GL_TEXTURE_2D_ARRAY = 0x8C1A
;export inline constexpr auto GL_PROXY_TEXTURE_2D_ARRAY = 0x8C1B
;export inline constexpr auto GL_TEXTURE_BINDING_1D_ARRAY = 0x8C1C
;export inline constexpr auto GL_TEXTURE_BINDING_2D_ARRAY = 0x8C1D
;export inline constexpr auto GL_R11F_G11F_B10F = 0x8C3A
;export inline constexpr auto GL_UNSIGNED_INT_10F_11F_11F_REV = 0x8C3B
;export inline constexpr auto GL_RGB9_E5 = 0x8C3D
;export inline constexpr auto GL_UNSIGNED_INT_5_9_9_9_REV = 0x8C3E
;export inline constexpr auto GL_TEXTURE_SHARED_SIZE = 0x8C3F
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = 0x8C76
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_BUFFER_MODE = 0x8C7F
;export inline constexpr auto GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = 0x8C80
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_VARYINGS = 0x8C83
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_BUFFER_START = 0x8C84
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = 0x8C85
;export inline constexpr auto GL_PRIMITIVES_GENERATED = 0x8C87
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = 0x8C88
;export inline constexpr auto GL_RASTERIZER_DISCARD = 0x8C89
;export inline constexpr auto GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = 0x8C8A
;export inline constexpr auto GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = 0x8C8B
;export inline constexpr auto GL_INTERLEAVED_ATTRIBS = 0x8C8C
;export inline constexpr auto GL_SEPARATE_ATTRIBS = 0x8C8D
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_BUFFER = 0x8C8E
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = 0x8C8F
;export inline constexpr auto GL_RGBA32UI = 0x8D70
;export inline constexpr auto GL_RGB32UI = 0x8D71
;export inline constexpr auto GL_RGBA16UI = 0x8D76
;export inline constexpr auto GL_RGB16UI = 0x8D77
;export inline constexpr auto GL_RGBA8UI = 0x8D7C
;export inline constexpr auto GL_RGB8UI = 0x8D7D
;export inline constexpr auto GL_RGBA32I = 0x8D82
;export inline constexpr auto GL_RGB32I = 0x8D83
;export inline constexpr auto GL_RGBA16I = 0x8D88
;export inline constexpr auto GL_RGB16I = 0x8D89
;export inline constexpr auto GL_RGBA8I = 0x8D8E
;export inline constexpr auto GL_RGB8I = 0x8D8F
;export inline constexpr auto GL_RED_INTEGER = 0x8D94
;export inline constexpr auto GL_GREEN_INTEGER = 0x8D95
;export inline constexpr auto GL_BLUE_INTEGER = 0x8D96
;export inline constexpr auto GL_RGB_INTEGER = 0x8D98
;export inline constexpr auto GL_RGBA_INTEGER = 0x8D99
;export inline constexpr auto GL_BGR_INTEGER = 0x8D9A
;export inline constexpr auto GL_BGRA_INTEGER = 0x8D9B
;export inline constexpr auto GL_SAMPLER_1D_ARRAY = 0x8DC0
;export inline constexpr auto GL_SAMPLER_2D_ARRAY = 0x8DC1
;export inline constexpr auto GL_SAMPLER_1D_ARRAY_SHADOW = 0x8DC3
;export inline constexpr auto GL_SAMPLER_2D_ARRAY_SHADOW = 0x8DC4
;export inline constexpr auto GL_SAMPLER_CUBE_SHADOW = 0x8DC5
;export inline constexpr auto GL_UNSIGNED_INT_VEC2 = 0x8DC6
;export inline constexpr auto GL_UNSIGNED_INT_VEC3 = 0x8DC7
;export inline constexpr auto GL_UNSIGNED_INT_VEC4 = 0x8DC8
;export inline constexpr auto GL_INT_SAMPLER_1D = 0x8DC9
;export inline constexpr auto GL_INT_SAMPLER_2D = 0x8DCA
;export inline constexpr auto GL_INT_SAMPLER_3D = 0x8DCB
;export inline constexpr auto GL_INT_SAMPLER_CUBE = 0x8DCC
;export inline constexpr auto GL_INT_SAMPLER_1D_ARRAY = 0x8DCE
;export inline constexpr auto GL_INT_SAMPLER_2D_ARRAY = 0x8DCF
;export inline constexpr auto GL_UNSIGNED_INT_SAMPLER_1D = 0x8DD1
;export inline constexpr auto GL_UNSIGNED_INT_SAMPLER_2D = 0x8DD2
;export inline constexpr auto GL_UNSIGNED_INT_SAMPLER_3D = 0x8DD3
;export inline constexpr auto GL_UNSIGNED_INT_SAMPLER_CUBE = 0x8DD4
;export inline constexpr auto GL_UNSIGNED_INT_SAMPLER_1D_ARRAY = 0x8DD6
;export inline constexpr auto GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = 0x8DD7
;export inline constexpr auto GL_QUERY_WAIT = 0x8E13
;export inline constexpr auto GL_QUERY_NO_WAIT = 0x8E14
;export inline constexpr auto GL_QUERY_BY_REGION_WAIT = 0x8E15
;export inline constexpr auto GL_QUERY_BY_REGION_NO_WAIT = 0x8E16
;export inline constexpr auto GL_BUFFER_ACCESS_FLAGS = 0x911F
;export inline constexpr auto GL_BUFFER_MAP_LENGTH = 0x9120
;export inline constexpr auto GL_BUFFER_MAP_OFFSET = 0x9121
;export inline constexpr auto GL_DEPTH_COMPONENT32F = 0x8CAC
;export inline constexpr auto GL_DEPTH32F_STENCIL8 = 0x8CAD
;export inline constexpr auto GL_FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD
;export inline constexpr auto GL_INVALID_FRAMEBUFFER_OPERATION = 0x0506
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = 0x8210
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = 0x8211
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = 0x8212
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = 0x8213
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = 0x8214
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = 0x8215
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = 0x8216
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = 0x8217
;export inline constexpr auto GL_FRAMEBUFFER_DEFAULT = 0x8218
;export inline constexpr auto GL_FRAMEBUFFER_UNDEFINED = 0x8219
;export inline constexpr auto GL_DEPTH_STENCIL_ATTACHMENT = 0x821A
;export inline constexpr auto GL_MAX_RENDERBUFFER_SIZE = 0x84E8
;export inline constexpr auto GL_DEPTH_STENCIL = 0x84F9
;export inline constexpr auto GL_UNSIGNED_INT_24_8 = 0x84FA
;export inline constexpr auto GL_DEPTH24_STENCIL8 = 0x88F0
;export inline constexpr auto GL_TEXTURE_STENCIL_SIZE = 0x88F1
;export inline constexpr auto GL_TEXTURE_RED_TYPE = 0x8C10
;export inline constexpr auto GL_TEXTURE_GREEN_TYPE = 0x8C11
;export inline constexpr auto GL_TEXTURE_BLUE_TYPE = 0x8C12
;export inline constexpr auto GL_TEXTURE_ALPHA_TYPE = 0x8C13
;export inline constexpr auto GL_TEXTURE_DEPTH_TYPE = 0x8C16
;export inline constexpr auto GL_UNSIGNED_NORMALIZED = 0x8C17
;export inline constexpr auto GL_FRAMEBUFFER_BINDING = 0x8CA6
;export inline constexpr auto GL_DRAW_FRAMEBUFFER_BINDING = 0x8CA6
;export inline constexpr auto GL_RENDERBUFFER_BINDING = 0x8CA7
;export inline constexpr auto GL_READ_FRAMEBUFFER = 0x8CA8
;export inline constexpr auto GL_DRAW_FRAMEBUFFER = 0x8CA9
;export inline constexpr auto GL_READ_FRAMEBUFFER_BINDING = 0x8CAA
;export inline constexpr auto GL_RENDERBUFFER_SAMPLES = 0x8CAB
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 0x8CD0
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 0x8CD1
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 0x8CD2
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 0x8CD3
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = 0x8CD4
;export inline constexpr auto GL_FRAMEBUFFER_COMPLETE = 0x8CD5
;export inline constexpr auto GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 0x8CD6
;export inline constexpr auto GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7
;export inline constexpr auto GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER = 0x8CDB
;export inline constexpr auto GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER = 0x8CDC
;export inline constexpr auto GL_FRAMEBUFFER_UNSUPPORTED = 0x8CDD
;export inline constexpr auto GL_MAX_COLOR_ATTACHMENTS = 0x8CDF
;export inline constexpr auto GL_COLOR_ATTACHMENT0 = 0x8CE0
;export inline constexpr auto GL_COLOR_ATTACHMENT1 = 0x8CE1
;export inline constexpr auto GL_COLOR_ATTACHMENT2 = 0x8CE2
;export inline constexpr auto GL_COLOR_ATTACHMENT3 = 0x8CE3
;export inline constexpr auto GL_COLOR_ATTACHMENT4 = 0x8CE4
;export inline constexpr auto GL_COLOR_ATTACHMENT5 = 0x8CE5
;export inline constexpr auto GL_COLOR_ATTACHMENT6 = 0x8CE6
;export inline constexpr auto GL_COLOR_ATTACHMENT7 = 0x8CE7
;export inline constexpr auto GL_COLOR_ATTACHMENT8 = 0x8CE8
;export inline constexpr auto GL_COLOR_ATTACHMENT9 = 0x8CE9
;export inline constexpr auto GL_COLOR_ATTACHMENT10 = 0x8CEA
;export inline constexpr auto GL_COLOR_ATTACHMENT11 = 0x8CEB
;export inline constexpr auto GL_COLOR_ATTACHMENT12 = 0x8CEC
;export inline constexpr auto GL_COLOR_ATTACHMENT13 = 0x8CED
;export inline constexpr auto GL_COLOR_ATTACHMENT14 = 0x8CEE
;export inline constexpr auto GL_COLOR_ATTACHMENT15 = 0x8CEF
;export inline constexpr auto GL_COLOR_ATTACHMENT16 = 0x8CF0
;export inline constexpr auto GL_COLOR_ATTACHMENT17 = 0x8CF1
;export inline constexpr auto GL_COLOR_ATTACHMENT18 = 0x8CF2
;export inline constexpr auto GL_COLOR_ATTACHMENT19 = 0x8CF3
;export inline constexpr auto GL_COLOR_ATTACHMENT20 = 0x8CF4
;export inline constexpr auto GL_COLOR_ATTACHMENT21 = 0x8CF5
;export inline constexpr auto GL_COLOR_ATTACHMENT22 = 0x8CF6
;export inline constexpr auto GL_COLOR_ATTACHMENT23 = 0x8CF7
;export inline constexpr auto GL_COLOR_ATTACHMENT24 = 0x8CF8
;export inline constexpr auto GL_COLOR_ATTACHMENT25 = 0x8CF9
;export inline constexpr auto GL_COLOR_ATTACHMENT26 = 0x8CFA
;export inline constexpr auto GL_COLOR_ATTACHMENT27 = 0x8CFB
;export inline constexpr auto GL_COLOR_ATTACHMENT28 = 0x8CFC
;export inline constexpr auto GL_COLOR_ATTACHMENT29 = 0x8CFD
;export inline constexpr auto GL_COLOR_ATTACHMENT30 = 0x8CFE
;export inline constexpr auto GL_COLOR_ATTACHMENT31 = 0x8CFF
;export inline constexpr auto GL_DEPTH_ATTACHMENT = 0x8D00
;export inline constexpr auto GL_STENCIL_ATTACHMENT = 0x8D20
;export inline constexpr auto GL_FRAMEBUFFER = 0x8D40
;export inline constexpr auto GL_RENDERBUFFER = 0x8D41
;export inline constexpr auto GL_RENDERBUFFER_WIDTH = 0x8D42
;export inline constexpr auto GL_RENDERBUFFER_HEIGHT = 0x8D43
;export inline constexpr auto GL_RENDERBUFFER_INTERNAL_FORMAT = 0x8D44
;export inline constexpr auto GL_STENCIL_INDEX1 = 0x8D46
;export inline constexpr auto GL_STENCIL_INDEX4 = 0x8D47
;export inline constexpr auto GL_STENCIL_INDEX8 = 0x8D48
;export inline constexpr auto GL_STENCIL_INDEX16 = 0x8D49
;export inline constexpr auto GL_RENDERBUFFER_RED_SIZE = 0x8D50
;export inline constexpr auto GL_RENDERBUFFER_GREEN_SIZE = 0x8D51
;export inline constexpr auto GL_RENDERBUFFER_BLUE_SIZE = 0x8D52
;export inline constexpr auto GL_RENDERBUFFER_ALPHA_SIZE = 0x8D53
;export inline constexpr auto GL_RENDERBUFFER_DEPTH_SIZE = 0x8D54
;export inline constexpr auto GL_RENDERBUFFER_STENCIL_SIZE = 0x8D55
;export inline constexpr auto GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = 0x8D56
;export inline constexpr auto GL_MAX_SAMPLES = 0x8D57
;export inline constexpr auto GL_FRAMEBUFFER_SRGB = 0x8DB9
;export inline constexpr auto GL_HALF_FLOAT = 0x140B
;export inline constexpr auto GL_MAP_READ_BIT = 0x0001
;export inline constexpr auto GL_MAP_WRITE_BIT = 0x0002
;export inline constexpr auto GL_MAP_INVALIDATE_RANGE_BIT = 0x0004
;export inline constexpr auto GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008
;export inline constexpr auto GL_MAP_FLUSH_EXPLICIT_BIT = 0x0010
;export inline constexpr auto GL_MAP_UNSYNCHRONIZED_BIT = 0x0020
;export inline constexpr auto GL_COMPRESSED_RED_RGTC1 = 0x8DBB
;export inline constexpr auto GL_COMPRESSED_SIGNED_RED_RGTC1 = 0x8DBC
;export inline constexpr auto GL_COMPRESSED_RG_RGTC2 = 0x8DBD
;export inline constexpr auto GL_COMPRESSED_SIGNED_RG_RGTC2 = 0x8DBE
;export inline constexpr auto GL_RG = 0x8227
;export inline constexpr auto GL_RG_INTEGER = 0x8228
;export inline constexpr auto GL_R8 = 0x8229
;export inline constexpr auto GL_R16 = 0x822A
;export inline constexpr auto GL_RG8 = 0x822B
;export inline constexpr auto GL_RG16 = 0x822C
;export inline constexpr auto GL_R16F = 0x822D
;export inline constexpr auto GL_R32F = 0x822E
;export inline constexpr auto GL_RG16F = 0x822F
;export inline constexpr auto GL_RG32F = 0x8230
;export inline constexpr auto GL_R8I = 0x8231
;export inline constexpr auto GL_R8UI = 0x8232
;export inline constexpr auto GL_R16I = 0x8233
;export inline constexpr auto GL_R16UI = 0x8234
;export inline constexpr auto GL_R32I = 0x8235
;export inline constexpr auto GL_R32UI = 0x8236
;export inline constexpr auto GL_RG8I = 0x8237
;export inline constexpr auto GL_RG8UI = 0x8238
;export inline constexpr auto GL_RG16I = 0x8239
;export inline constexpr auto GL_RG16UI = 0x823A
;export inline constexpr auto GL_RG32I = 0x823B
;export inline constexpr auto GL_RG32UI = 0x823C
;export inline constexpr auto GL_VERTEX_ARRAY_BINDING = 0x85B5
;export inline constexpr auto GL_SAMPLER_2D_RECT = 0x8B63
;export inline constexpr auto GL_SAMPLER_2D_RECT_SHADOW = 0x8B64
;export inline constexpr auto GL_SAMPLER_BUFFER = 0x8DC2
;export inline constexpr auto GL_INT_SAMPLER_2D_RECT = 0x8DCD
;export inline constexpr auto GL_INT_SAMPLER_BUFFER = 0x8DD0
;export inline constexpr auto GL_UNSIGNED_INT_SAMPLER_2D_RECT = 0x8DD5
;export inline constexpr auto GL_UNSIGNED_INT_SAMPLER_BUFFER = 0x8DD8
;export inline constexpr auto GL_TEXTURE_BUFFER = 0x8C2A
;export inline constexpr auto GL_MAX_TEXTURE_BUFFER_SIZE = 0x8C2B
;export inline constexpr auto GL_TEXTURE_BINDING_BUFFER = 0x8C2C
;export inline constexpr auto GL_TEXTURE_BUFFER_DATA_STORE_BINDING = 0x8C2D
;export inline constexpr auto GL_TEXTURE_RECTANGLE = 0x84F5
;export inline constexpr auto GL_TEXTURE_BINDING_RECTANGLE = 0x84F6
;export inline constexpr auto GL_PROXY_TEXTURE_RECTANGLE = 0x84F7
;export inline constexpr auto GL_MAX_RECTANGLE_TEXTURE_SIZE = 0x84F8
;export inline constexpr auto GL_R8_SNORM = 0x8F94
;export inline constexpr auto GL_RG8_SNORM = 0x8F95
;export inline constexpr auto GL_RGB8_SNORM = 0x8F96
;export inline constexpr auto GL_RGBA8_SNORM = 0x8F97
;export inline constexpr auto GL_R16_SNORM = 0x8F98
;export inline constexpr auto GL_RG16_SNORM = 0x8F99
;export inline constexpr auto GL_RGB16_SNORM = 0x8F9A
;export inline constexpr auto GL_RGBA16_SNORM = 0x8F9B
;export inline constexpr auto GL_SIGNED_NORMALIZED = 0x8F9C
;export inline constexpr auto GL_PRIMITIVE_RESTART = 0x8F9D
;export inline constexpr auto GL_PRIMITIVE_RESTART_INDEX = 0x8F9E
;export inline constexpr auto GL_COPY_READ_BUFFER = 0x8F36
;export inline constexpr auto GL_COPY_WRITE_BUFFER = 0x8F37
;export inline constexpr auto GL_UNIFORM_BUFFER = 0x8A11
;export inline constexpr auto GL_UNIFORM_BUFFER_BINDING = 0x8A28
;export inline constexpr auto GL_UNIFORM_BUFFER_START = 0x8A29
;export inline constexpr auto GL_UNIFORM_BUFFER_SIZE = 0x8A2A
;export inline constexpr auto GL_MAX_VERTEX_UNIFORM_BLOCKS = 0x8A2B
;export inline constexpr auto GL_MAX_GEOMETRY_UNIFORM_BLOCKS = 0x8A2C
;export inline constexpr auto GL_MAX_FRAGMENT_UNIFORM_BLOCKS = 0x8A2D
;export inline constexpr auto GL_MAX_COMBINED_UNIFORM_BLOCKS = 0x8A2E
;export inline constexpr auto GL_MAX_UNIFORM_BUFFER_BINDINGS = 0x8A2F
;export inline constexpr auto GL_MAX_UNIFORM_BLOCK_SIZE = 0x8A30
;export inline constexpr auto GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = 0x8A31
;export inline constexpr auto GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = 0x8A32
;export inline constexpr auto GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = 0x8A33
;export inline constexpr auto GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = 0x8A34
;export inline constexpr auto GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = 0x8A35
;export inline constexpr auto GL_ACTIVE_UNIFORM_BLOCKS = 0x8A36
;export inline constexpr auto GL_UNIFORM_TYPE = 0x8A37
;export inline constexpr auto GL_UNIFORM_SIZE = 0x8A38
;export inline constexpr auto GL_UNIFORM_NAME_LENGTH = 0x8A39
;export inline constexpr auto GL_UNIFORM_BLOCK_INDEX = 0x8A3A
;export inline constexpr auto GL_UNIFORM_OFFSET = 0x8A3B
;export inline constexpr auto GL_UNIFORM_ARRAY_STRIDE = 0x8A3C
;export inline constexpr auto GL_UNIFORM_MATRIX_STRIDE = 0x8A3D
;export inline constexpr auto GL_UNIFORM_IS_ROW_MAJOR = 0x8A3E
;export inline constexpr auto GL_UNIFORM_BLOCK_BINDING = 0x8A3F
;export inline constexpr auto GL_UNIFORM_BLOCK_DATA_SIZE = 0x8A40
;export inline constexpr auto GL_UNIFORM_BLOCK_NAME_LENGTH = 0x8A41
;export inline constexpr auto GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = 0x8A42
;export inline constexpr auto GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = 0x8A43
;export inline constexpr auto GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = 0x8A44
;export inline constexpr auto GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER = 0x8A45
;export inline constexpr auto GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = 0x8A46
;export inline constexpr auto GL_INVALID_INDEX = 0xFFFFFFFF
;export inline constexpr auto GL_CONTEXT_CORE_PROFILE_BIT = 0x00000001
;export inline constexpr auto GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002
;export inline constexpr auto GL_LINES_ADJACENCY = 0x000A
;export inline constexpr auto GL_LINE_STRIP_ADJACENCY = 0x000B
;export inline constexpr auto GL_TRIANGLES_ADJACENCY = 0x000C
;export inline constexpr auto GL_TRIANGLE_STRIP_ADJACENCY = 0x000D
;export inline constexpr auto GL_PROGRAM_POINT_SIZE = 0x8642
;export inline constexpr auto GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = 0x8C29
;export inline constexpr auto GL_FRAMEBUFFER_ATTACHMENT_LAYERED = 0x8DA7
;export inline constexpr auto GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = 0x8DA8
;export inline constexpr auto GL_GEOMETRY_SHADER = 0x8DD9
;export inline constexpr auto GL_GEOMETRY_VERTICES_OUT = 0x8916
;export inline constexpr auto GL_GEOMETRY_INPUT_TYPE = 0x8917
;export inline constexpr auto GL_GEOMETRY_OUTPUT_TYPE = 0x8918
;export inline constexpr auto GL_MAX_GEOMETRY_UNIFORM_COMPONENTS = 0x8DDF
;export inline constexpr auto GL_MAX_GEOMETRY_OUTPUT_VERTICES = 0x8DE0
;export inline constexpr auto GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = 0x8DE1
;export inline constexpr auto GL_MAX_VERTEX_OUTPUT_COMPONENTS = 0x9122
;export inline constexpr auto GL_MAX_GEOMETRY_INPUT_COMPONENTS = 0x9123
;export inline constexpr auto GL_MAX_GEOMETRY_OUTPUT_COMPONENTS = 0x9124
;export inline constexpr auto GL_MAX_FRAGMENT_INPUT_COMPONENTS = 0x9125
;export inline constexpr auto GL_CONTEXT_PROFILE_MASK = 0x9126
;export inline constexpr auto GL_DEPTH_CLAMP = 0x864F
;export inline constexpr auto GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION = 0x8E4C
;export inline constexpr auto GL_FIRST_VERTEX_CONVENTION = 0x8E4D
;export inline constexpr auto GL_LAST_VERTEX_CONVENTION = 0x8E4E
;export inline constexpr auto GL_PROVOKING_VERTEX = 0x8E4F
;export inline constexpr auto GL_TEXTURE_CUBE_MAP_SEAMLESS = 0x884F
;export inline constexpr auto GL_MAX_SERVER_WAIT_TIMEOUT = 0x9111
;export inline constexpr auto GL_OBJECT_TYPE = 0x9112
;export inline constexpr auto GL_SYNC_CONDITION = 0x9113
;export inline constexpr auto GL_SYNC_STATUS = 0x9114
;export inline constexpr auto GL_SYNC_FLAGS = 0x9115
;export inline constexpr auto GL_SYNC_FENCE = 0x9116
;export inline constexpr auto GL_SYNC_GPU_COMMANDS_COMPLETE = 0x9117
;export inline constexpr auto GL_UNSIGNALED = 0x9118
;export inline constexpr auto GL_SIGNALED = 0x9119
;export inline constexpr auto GL_ALREADY_SIGNALED = 0x911A
;export inline constexpr auto GL_TIMEOUT_EXPIRED = 0x911B
;export inline constexpr auto GL_CONDITION_SATISFIED = 0x911C
;export inline constexpr auto GL_WAIT_FAILED = 0x911D
;export inline constexpr auto GL_TIMEOUT_IGNORED = 0xFFFFFFFFFFFFFFFF
;export inline constexpr auto GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001
;export inline constexpr auto GL_SAMPLE_POSITION = 0x8E50
;export inline constexpr auto GL_SAMPLE_MASK = 0x8E51
;export inline constexpr auto GL_SAMPLE_MASK_VALUE = 0x8E52
;export inline constexpr auto GL_MAX_SAMPLE_MASK_WORDS = 0x8E59
;export inline constexpr auto GL_TEXTURE_2D_MULTISAMPLE = 0x9100
;export inline constexpr auto GL_PROXY_TEXTURE_2D_MULTISAMPLE = 0x9101
;export inline constexpr auto GL_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102
;export inline constexpr auto GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9103
;export inline constexpr auto GL_TEXTURE_BINDING_2D_MULTISAMPLE = 0x9104
;export inline constexpr auto GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = 0x9105
;export inline constexpr auto GL_TEXTURE_SAMPLES = 0x9106
;export inline constexpr auto GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = 0x9107
;export inline constexpr auto GL_SAMPLER_2D_MULTISAMPLE = 0x9108
;export inline constexpr auto GL_INT_SAMPLER_2D_MULTISAMPLE = 0x9109
;export inline constexpr auto GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = 0x910A
;export inline constexpr auto GL_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910B
;export inline constexpr auto GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910C
;export inline constexpr auto GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910D
;export inline constexpr auto GL_MAX_COLOR_TEXTURE_SAMPLES = 0x910E
;export inline constexpr auto GL_MAX_DEPTH_TEXTURE_SAMPLES = 0x910F
;export inline constexpr auto GL_MAX_INTEGER_SAMPLES = 0x9110
;export inline constexpr auto GL_VERTEX_ATTRIB_ARRAY_DIVISOR = 0x88FE
;export inline constexpr auto GL_SRC1_COLOR = 0x88F9
;export inline constexpr auto GL_ONE_MINUS_SRC1_COLOR = 0x88FA
;export inline constexpr auto GL_ONE_MINUS_SRC1_ALPHA = 0x88FB
;export inline constexpr auto GL_MAX_DUAL_SOURCE_DRAW_BUFFERS = 0x88FC
;export inline constexpr auto GL_ANY_SAMPLES_PASSED = 0x8C2F
;export inline constexpr auto GL_SAMPLER_BINDING = 0x8919
;export inline constexpr auto GL_RGB10_A2UI = 0x906F
;export inline constexpr auto GL_TEXTURE_SWIZZLE_R = 0x8E42
;export inline constexpr auto GL_TEXTURE_SWIZZLE_G = 0x8E43
;export inline constexpr auto GL_TEXTURE_SWIZZLE_B = 0x8E44
;export inline constexpr auto GL_TEXTURE_SWIZZLE_A = 0x8E45
;export inline constexpr auto GL_TEXTURE_SWIZZLE_RGBA = 0x8E46
;export inline constexpr auto GL_TIME_ELAPSED = 0x88BF
;export inline constexpr auto GL_TIMESTAMP = 0x8E28
;export inline constexpr auto GL_INT_2_10_10_10_REV = 0x8D9F
;export inline constexpr auto GL_SAMPLE_SHADING = 0x8C36
;export inline constexpr auto GL_MIN_SAMPLE_SHADING_VALUE = 0x8C37
;export inline constexpr auto GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5E
;export inline constexpr auto GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5F
;export inline constexpr auto GL_TEXTURE_CUBE_MAP_ARRAY = 0x9009
;export inline constexpr auto GL_TEXTURE_BINDING_CUBE_MAP_ARRAY = 0x900A
;export inline constexpr auto GL_PROXY_TEXTURE_CUBE_MAP_ARRAY = 0x900B
;export inline constexpr auto GL_SAMPLER_CUBE_MAP_ARRAY = 0x900C
;export inline constexpr auto GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW = 0x900D
;export inline constexpr auto GL_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900E
;export inline constexpr auto GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900F
;export inline constexpr auto GL_DRAW_INDIRECT_BUFFER = 0x8F3F
;export inline constexpr auto GL_DRAW_INDIRECT_BUFFER_BINDING = 0x8F43
;export inline constexpr auto GL_GEOMETRY_SHADER_INVOCATIONS = 0x887F
;export inline constexpr auto GL_MAX_GEOMETRY_SHADER_INVOCATIONS = 0x8E5A
;export inline constexpr auto GL_MIN_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5B
;export inline constexpr auto GL_MAX_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5C
;export inline constexpr auto GL_FRAGMENT_INTERPOLATION_OFFSET_BITS = 0x8E5D
;export inline constexpr auto GL_MAX_VERTEX_STREAMS = 0x8E71
;export inline constexpr auto GL_DOUBLE_VEC2 = 0x8FFC
;export inline constexpr auto GL_DOUBLE_VEC3 = 0x8FFD
;export inline constexpr auto GL_DOUBLE_VEC4 = 0x8FFE
;export inline constexpr auto GL_DOUBLE_MAT2 = 0x8F46
;export inline constexpr auto GL_DOUBLE_MAT3 = 0x8F47
;export inline constexpr auto GL_DOUBLE_MAT4 = 0x8F48
;export inline constexpr auto GL_DOUBLE_MAT2x3 = 0x8F49
;export inline constexpr auto GL_DOUBLE_MAT2x4 = 0x8F4A
;export inline constexpr auto GL_DOUBLE_MAT3x2 = 0x8F4B
;export inline constexpr auto GL_DOUBLE_MAT3x4 = 0x8F4C
;export inline constexpr auto GL_DOUBLE_MAT4x2 = 0x8F4D
;export inline constexpr auto GL_DOUBLE_MAT4x3 = 0x8F4E
;export inline constexpr auto GL_ACTIVE_SUBROUTINES = 0x8DE5
;export inline constexpr auto GL_ACTIVE_SUBROUTINE_UNIFORMS = 0x8DE6
;export inline constexpr auto GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS = 0x8E47
;export inline constexpr auto GL_ACTIVE_SUBROUTINE_MAX_LENGTH = 0x8E48
;export inline constexpr auto GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH = 0x8E49
;export inline constexpr auto GL_MAX_SUBROUTINES = 0x8DE7
;export inline constexpr auto GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS = 0x8DE8
;export inline constexpr auto GL_NUM_COMPATIBLE_SUBROUTINES = 0x8E4A
;export inline constexpr auto GL_COMPATIBLE_SUBROUTINES = 0x8E4B
;export inline constexpr auto GL_PATCHES = 0x000E
;export inline constexpr auto GL_PATCH_VERTICES = 0x8E72
;export inline constexpr auto GL_PATCH_DEFAULT_INNER_LEVEL = 0x8E73
;export inline constexpr auto GL_PATCH_DEFAULT_OUTER_LEVEL = 0x8E74
;export inline constexpr auto GL_TESS_CONTROL_OUTPUT_VERTICES = 0x8E75
;export inline constexpr auto GL_TESS_GEN_MODE = 0x8E76
;export inline constexpr auto GL_TESS_GEN_SPACING = 0x8E77
;export inline constexpr auto GL_TESS_GEN_VERTEX_ORDER = 0x8E78
;export inline constexpr auto GL_TESS_GEN_POINT_MODE = 0x8E79
;export inline constexpr auto GL_ISOLINES = 0x8E7A
;export inline constexpr auto GL_QUADS = 0x0007
;export inline constexpr auto GL_FRACTIONAL_ODD = 0x8E7B
;export inline constexpr auto GL_FRACTIONAL_EVEN = 0x8E7C
;export inline constexpr auto GL_MAX_PATCH_VERTICES = 0x8E7D
;export inline constexpr auto GL_MAX_TESS_GEN_LEVEL = 0x8E7E
;export inline constexpr auto GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E7F
;export inline constexpr auto GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E80
;export inline constexpr auto GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = 0x8E81
;export inline constexpr auto GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = 0x8E82
;export inline constexpr auto GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS = 0x8E83
;export inline constexpr auto GL_MAX_TESS_PATCH_COMPONENTS = 0x8E84
;export inline constexpr auto GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = 0x8E85
;export inline constexpr auto GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = 0x8E86
;export inline constexpr auto GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS = 0x8E89
;export inline constexpr auto GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS = 0x8E8A
;export inline constexpr auto GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = 0x886C
;export inline constexpr auto GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = 0x886D
;export inline constexpr auto GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E1E
;export inline constexpr auto GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E1F
;export inline constexpr auto GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER = 0x84F0
;export inline constexpr auto GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x84F1
;export inline constexpr auto GL_TESS_EVALUATION_SHADER = 0x8E87
;export inline constexpr auto GL_TESS_CONTROL_SHADER = 0x8E88
;export inline constexpr auto GL_TRANSFORM_FEEDBACK = 0x8E22
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED = 0x8E23
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE = 0x8E24
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_BINDING = 0x8E25
;export inline constexpr auto GL_MAX_TRANSFORM_FEEDBACK_BUFFERS = 0x8E70
;export inline constexpr auto GL_FIXED = 0x140C
;export inline constexpr auto GL_IMPLEMENTATION_COLOR_READ_TYPE = 0x8B9A
;export inline constexpr auto GL_IMPLEMENTATION_COLOR_READ_FORMAT = 0x8B9B
;export inline constexpr auto GL_LOW_FLOAT = 0x8DF0
;export inline constexpr auto GL_MEDIUM_FLOAT = 0x8DF1
;export inline constexpr auto GL_HIGH_FLOAT = 0x8DF2
;export inline constexpr auto GL_LOW_INT = 0x8DF3
;export inline constexpr auto GL_MEDIUM_INT = 0x8DF4
;export inline constexpr auto GL_HIGH_INT = 0x8DF5
;export inline constexpr auto GL_SHADER_COMPILER = 0x8DFA
;export inline constexpr auto GL_SHADER_BINARY_FORMATS = 0x8DF8
;export inline constexpr auto GL_NUM_SHADER_BINARY_FORMATS = 0x8DF9
;export inline constexpr auto GL_MAX_VERTEX_UNIFORM_VECTORS = 0x8DFB
;export inline constexpr auto GL_MAX_VARYING_VECTORS = 0x8DFC
;export inline constexpr auto GL_MAX_FRAGMENT_UNIFORM_VECTORS = 0x8DFD
;export inline constexpr auto GL_RGB565 = 0x8D62
;export inline constexpr auto GL_PROGRAM_BINARY_RETRIEVABLE_HINT = 0x8257
;export inline constexpr auto GL_PROGRAM_BINARY_LENGTH = 0x8741
;export inline constexpr auto GL_NUM_PROGRAM_BINARY_FORMATS = 0x87FE
;export inline constexpr auto GL_PROGRAM_BINARY_FORMATS = 0x87FF
;export inline constexpr auto GL_VERTEX_SHADER_BIT = 0x00000001
;export inline constexpr auto GL_FRAGMENT_SHADER_BIT = 0x00000002
;export inline constexpr auto GL_GEOMETRY_SHADER_BIT = 0x00000004
;export inline constexpr auto GL_TESS_CONTROL_SHADER_BIT = 0x00000008
;export inline constexpr auto GL_TESS_EVALUATION_SHADER_BIT = 0x00000010
;export inline constexpr auto GL_ALL_SHADER_BITS = 0xFFFFFFFF
;export inline constexpr auto GL_PROGRAM_SEPARABLE = 0x8258
;export inline constexpr auto GL_ACTIVE_PROGRAM = 0x8259
;export inline constexpr auto GL_PROGRAM_PIPELINE_BINDING = 0x825A
;export inline constexpr auto GL_MAX_VIEWPORTS = 0x825B
;export inline constexpr auto GL_VIEWPORT_SUBPIXEL_BITS = 0x825C
;export inline constexpr auto GL_VIEWPORT_BOUNDS_RANGE = 0x825D
;export inline constexpr auto GL_LAYER_PROVOKING_VERTEX = 0x825E
;export inline constexpr auto GL_VIEWPORT_INDEX_PROVOKING_VERTEX = 0x825F
;export inline constexpr auto GL_UNDEFINED_VERTEX = 0x8260
;export inline constexpr auto GL_COPY_READ_BUFFER_BINDING = 0x8F36
;export inline constexpr auto GL_COPY_WRITE_BUFFER_BINDING = 0x8F37
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_ACTIVE = 0x8E24
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_PAUSED = 0x8E23
;export inline constexpr auto GL_UNPACK_COMPRESSED_BLOCK_WIDTH = 0x9127
;export inline constexpr auto GL_UNPACK_COMPRESSED_BLOCK_HEIGHT = 0x9128
;export inline constexpr auto GL_UNPACK_COMPRESSED_BLOCK_DEPTH = 0x9129
;export inline constexpr auto GL_UNPACK_COMPRESSED_BLOCK_SIZE = 0x912A
;export inline constexpr auto GL_PACK_COMPRESSED_BLOCK_WIDTH = 0x912B
;export inline constexpr auto GL_PACK_COMPRESSED_BLOCK_HEIGHT = 0x912C
;export inline constexpr auto GL_PACK_COMPRESSED_BLOCK_DEPTH = 0x912D
;export inline constexpr auto GL_PACK_COMPRESSED_BLOCK_SIZE = 0x912E
;export inline constexpr auto GL_NUM_SAMPLE_COUNTS = 0x9380
;export inline constexpr auto GL_MIN_MAP_BUFFER_ALIGNMENT = 0x90BC
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER = 0x92C0
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_BINDING = 0x92C1
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_START = 0x92C2
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_SIZE = 0x92C3
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE = 0x92C4
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS = 0x92C5
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES = 0x92C6
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER = 0x92C7
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER = 0x92C8
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x92C9
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER = 0x92CA
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER = 0x92CB
;export inline constexpr auto GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = 0x92CC
;export inline constexpr auto GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = 0x92CD
;export inline constexpr auto GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = 0x92CE
;export inline constexpr auto GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = 0x92CF
;export inline constexpr auto GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = 0x92D0
;export inline constexpr auto GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = 0x92D1
;export inline constexpr auto GL_MAX_VERTEX_ATOMIC_COUNTERS = 0x92D2
;export inline constexpr auto GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS = 0x92D3
;export inline constexpr auto GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS = 0x92D4
;export inline constexpr auto GL_MAX_GEOMETRY_ATOMIC_COUNTERS = 0x92D5
;export inline constexpr auto GL_MAX_FRAGMENT_ATOMIC_COUNTERS = 0x92D6
;export inline constexpr auto GL_MAX_COMBINED_ATOMIC_COUNTERS = 0x92D7
;export inline constexpr auto GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE = 0x92D8
;export inline constexpr auto GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = 0x92DC
;export inline constexpr auto GL_ACTIVE_ATOMIC_COUNTER_BUFFERS = 0x92D9
;export inline constexpr auto GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX = 0x92DA
;export inline constexpr auto GL_UNSIGNED_INT_ATOMIC_COUNTER = 0x92DB
;export inline constexpr auto GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001
;export inline constexpr auto GL_ELEMENT_ARRAY_BARRIER_BIT = 0x00000002
;export inline constexpr auto GL_UNIFORM_BARRIER_BIT = 0x00000004
;export inline constexpr auto GL_TEXTURE_FETCH_BARRIER_BIT = 0x00000008
;export inline constexpr auto GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020
;export inline constexpr auto GL_COMMAND_BARRIER_BIT = 0x00000040
;export inline constexpr auto GL_PIXEL_BUFFER_BARRIER_BIT = 0x00000080
;export inline constexpr auto GL_TEXTURE_UPDATE_BARRIER_BIT = 0x00000100
;export inline constexpr auto GL_BUFFER_UPDATE_BARRIER_BIT = 0x00000200
;export inline constexpr auto GL_FRAMEBUFFER_BARRIER_BIT = 0x00000400
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800
;export inline constexpr auto GL_ATOMIC_COUNTER_BARRIER_BIT = 0x00001000
;export inline constexpr auto GL_ALL_BARRIER_BITS = 0xFFFFFFFF
;export inline constexpr auto GL_MAX_IMAGE_UNITS = 0x8F38
;export inline constexpr auto GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS = 0x8F39
;export inline constexpr auto GL_IMAGE_BINDING_NAME = 0x8F3A
;export inline constexpr auto GL_IMAGE_BINDING_LEVEL = 0x8F3B
;export inline constexpr auto GL_IMAGE_BINDING_LAYERED = 0x8F3C
;export inline constexpr auto GL_IMAGE_BINDING_LAYER = 0x8F3D
;export inline constexpr auto GL_IMAGE_BINDING_ACCESS = 0x8F3E
;export inline constexpr auto GL_IMAGE_1D = 0x904C
;export inline constexpr auto GL_IMAGE_2D = 0x904D
;export inline constexpr auto GL_IMAGE_3D = 0x904E
;export inline constexpr auto GL_IMAGE_2D_RECT = 0x904F
;export inline constexpr auto GL_IMAGE_CUBE = 0x9050
;export inline constexpr auto GL_IMAGE_BUFFER = 0x9051
;export inline constexpr auto GL_IMAGE_1D_ARRAY = 0x9052
;export inline constexpr auto GL_IMAGE_2D_ARRAY = 0x9053
;export inline constexpr auto GL_IMAGE_CUBE_MAP_ARRAY = 0x9054
;export inline constexpr auto GL_IMAGE_2D_MULTISAMPLE = 0x9055
;export inline constexpr auto GL_IMAGE_2D_MULTISAMPLE_ARRAY = 0x9056
;export inline constexpr auto GL_INT_IMAGE_1D = 0x9057
;export inline constexpr auto GL_INT_IMAGE_2D = 0x9058
;export inline constexpr auto GL_INT_IMAGE_3D = 0x9059
;export inline constexpr auto GL_INT_IMAGE_2D_RECT = 0x905A
;export inline constexpr auto GL_INT_IMAGE_CUBE = 0x905B
;export inline constexpr auto GL_INT_IMAGE_BUFFER = 0x905C
;export inline constexpr auto GL_INT_IMAGE_1D_ARRAY = 0x905D
;export inline constexpr auto GL_INT_IMAGE_2D_ARRAY = 0x905E
;export inline constexpr auto GL_INT_IMAGE_CUBE_MAP_ARRAY = 0x905F
;export inline constexpr auto GL_INT_IMAGE_2D_MULTISAMPLE = 0x9060
;export inline constexpr auto GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x9061
;export inline constexpr auto GL_UNSIGNED_INT_IMAGE_1D = 0x9062
;export inline constexpr auto GL_UNSIGNED_INT_IMAGE_2D = 0x9063
;export inline constexpr auto GL_UNSIGNED_INT_IMAGE_3D = 0x9064
;export inline constexpr auto GL_UNSIGNED_INT_IMAGE_2D_RECT = 0x9065
;export inline constexpr auto GL_UNSIGNED_INT_IMAGE_CUBE = 0x9066
;export inline constexpr auto GL_UNSIGNED_INT_IMAGE_BUFFER = 0x9067
;export inline constexpr auto GL_UNSIGNED_INT_IMAGE_1D_ARRAY = 0x9068
;export inline constexpr auto GL_UNSIGNED_INT_IMAGE_2D_ARRAY = 0x9069
;export inline constexpr auto GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = 0x906A
;export inline constexpr auto GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE = 0x906B
;export inline constexpr auto GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x906C
;export inline constexpr auto GL_MAX_IMAGE_SAMPLES = 0x906D
;export inline constexpr auto GL_IMAGE_BINDING_FORMAT = 0x906E
;export inline constexpr auto GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = 0x90C7
;export inline constexpr auto GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = 0x90C8
;export inline constexpr auto GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = 0x90C9
;export inline constexpr auto GL_MAX_VERTEX_IMAGE_UNIFORMS = 0x90CA
;export inline constexpr auto GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS = 0x90CB
;export inline constexpr auto GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS = 0x90CC
;export inline constexpr auto GL_MAX_GEOMETRY_IMAGE_UNIFORMS = 0x90CD
;export inline constexpr auto GL_MAX_FRAGMENT_IMAGE_UNIFORMS = 0x90CE
;export inline constexpr auto GL_MAX_COMBINED_IMAGE_UNIFORMS = 0x90CF
;export inline constexpr auto GL_COMPRESSED_RGBA_BPTC_UNORM = 0x8E8C
;export inline constexpr auto GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM = 0x8E8D
;export inline constexpr auto GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT = 0x8E8E
;export inline constexpr auto GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT = 0x8E8F
;export inline constexpr auto GL_TEXTURE_IMMUTABLE_FORMAT = 0x912F
;export inline constexpr auto GL_NUM_SHADING_LANGUAGE_VERSIONS = 0x82E9
;export inline constexpr auto GL_VERTEX_ATTRIB_ARRAY_LONG = 0x874E
;export inline constexpr auto GL_COMPRESSED_RGB8_ETC2 = 0x9274
;export inline constexpr auto GL_COMPRESSED_SRGB8_ETC2 = 0x9275
;export inline constexpr auto GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9276
;export inline constexpr auto GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9277
;export inline constexpr auto GL_COMPRESSED_RGBA8_ETC2_EAC = 0x9278
;export inline constexpr auto GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = 0x9279
;export inline constexpr auto GL_COMPRESSED_R11_EAC = 0x9270
;export inline constexpr auto GL_COMPRESSED_SIGNED_R11_EAC = 0x9271
;export inline constexpr auto GL_COMPRESSED_RG11_EAC = 0x9272
;export inline constexpr auto GL_COMPRESSED_SIGNED_RG11_EAC = 0x9273
;export inline constexpr auto GL_PRIMITIVE_RESTART_FIXED_INDEX = 0x8D69
;export inline constexpr auto GL_ANY_SAMPLES_PASSED_CONSERVATIVE = 0x8D6A
;export inline constexpr auto GL_MAX_ELEMENT_INDEX = 0x8D6B
;export inline constexpr auto GL_COMPUTE_SHADER = 0x91B9
;export inline constexpr auto GL_MAX_COMPUTE_UNIFORM_BLOCKS = 0x91BB
;export inline constexpr auto GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS = 0x91BC
;export inline constexpr auto GL_MAX_COMPUTE_IMAGE_UNIFORMS = 0x91BD
;export inline constexpr auto GL_MAX_COMPUTE_SHARED_MEMORY_SIZE = 0x8262
;export inline constexpr auto GL_MAX_COMPUTE_UNIFORM_COMPONENTS = 0x8263
;export inline constexpr auto GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = 0x8264
;export inline constexpr auto GL_MAX_COMPUTE_ATOMIC_COUNTERS = 0x8265
;export inline constexpr auto GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = 0x8266
;export inline constexpr auto GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS = 0x90EB
;export inline constexpr auto GL_MAX_COMPUTE_WORK_GROUP_COUNT = 0x91BE
;export inline constexpr auto GL_MAX_COMPUTE_WORK_GROUP_SIZE = 0x91BF
;export inline constexpr auto GL_COMPUTE_WORK_GROUP_SIZE = 0x8267
;export inline constexpr auto GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER = 0x90EC
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER = 0x90ED
;export inline constexpr auto GL_DISPATCH_INDIRECT_BUFFER = 0x90EE
;export inline constexpr auto GL_DISPATCH_INDIRECT_BUFFER_BINDING = 0x90EF
;export inline constexpr auto GL_COMPUTE_SHADER_BIT = 0x00000020
;export inline constexpr auto GL_DEBUG_OUTPUT_SYNCHRONOUS = 0x8242
;export inline constexpr auto GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = 0x8243
;export inline constexpr auto GL_DEBUG_CALLBACK_FUNCTION = 0x8244
;export inline constexpr auto GL_DEBUG_CALLBACK_USER_PARAM = 0x8245
;export inline constexpr auto GL_DEBUG_SOURCE_API = 0x8246
;export inline constexpr auto GL_DEBUG_SOURCE_WINDOW_SYSTEM = 0x8247
;export inline constexpr auto GL_DEBUG_SOURCE_SHADER_COMPILER = 0x8248
;export inline constexpr auto GL_DEBUG_SOURCE_THIRD_PARTY = 0x8249
;export inline constexpr auto GL_DEBUG_SOURCE_APPLICATION = 0x824A
;export inline constexpr auto GL_DEBUG_SOURCE_OTHER = 0x824B
;export inline constexpr auto GL_DEBUG_TYPE_ERROR = 0x824C
;export inline constexpr auto GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR = 0x824D
;export inline constexpr auto GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR = 0x824E
;export inline constexpr auto GL_DEBUG_TYPE_PORTABILITY = 0x824F
;export inline constexpr auto GL_DEBUG_TYPE_PERFORMANCE = 0x8250
;export inline constexpr auto GL_DEBUG_TYPE_OTHER = 0x8251
;export inline constexpr auto GL_MAX_DEBUG_MESSAGE_LENGTH = 0x9143
;export inline constexpr auto GL_MAX_DEBUG_LOGGED_MESSAGES = 0x9144
;export inline constexpr auto GL_DEBUG_LOGGED_MESSAGES = 0x9145
;export inline constexpr auto GL_DEBUG_SEVERITY_HIGH = 0x9146
;export inline constexpr auto GL_DEBUG_SEVERITY_MEDIUM = 0x9147
;export inline constexpr auto GL_DEBUG_SEVERITY_LOW = 0x9148
;export inline constexpr auto GL_DEBUG_TYPE_MARKER = 0x8268
;export inline constexpr auto GL_DEBUG_TYPE_PUSH_GROUP = 0x8269
;export inline constexpr auto GL_DEBUG_TYPE_POP_GROUP = 0x826A
;export inline constexpr auto GL_DEBUG_SEVERITY_NOTIFICATION = 0x826B
;export inline constexpr auto GL_MAX_DEBUG_GROUP_STACK_DEPTH = 0x826C
;export inline constexpr auto GL_DEBUG_GROUP_STACK_DEPTH = 0x826D
;export inline constexpr auto GL_BUFFER = 0x82E0
;export inline constexpr auto GL_SHADER = 0x82E1
;export inline constexpr auto GL_PROGRAM = 0x82E2
;export inline constexpr auto GL_VERTEX_ARRAY = 0x8074
;export inline constexpr auto GL_QUERY = 0x82E3
;export inline constexpr auto GL_PROGRAM_PIPELINE = 0x82E4
;export inline constexpr auto GL_SAMPLER = 0x82E6
;export inline constexpr auto GL_MAX_LABEL_LENGTH = 0x82E8
;export inline constexpr auto GL_DEBUG_OUTPUT = 0x92E0
;export inline constexpr auto GL_CONTEXT_FLAG_DEBUG_BIT = 0x00000002
;export inline constexpr auto GL_MAX_UNIFORM_LOCATIONS = 0x826E
;export inline constexpr auto GL_FRAMEBUFFER_DEFAULT_WIDTH = 0x9310
;export inline constexpr auto GL_FRAMEBUFFER_DEFAULT_HEIGHT = 0x9311
;export inline constexpr auto GL_FRAMEBUFFER_DEFAULT_LAYERS = 0x9312
;export inline constexpr auto GL_FRAMEBUFFER_DEFAULT_SAMPLES = 0x9313
;export inline constexpr auto GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = 0x9314
;export inline constexpr auto GL_MAX_FRAMEBUFFER_WIDTH = 0x9315
;export inline constexpr auto GL_MAX_FRAMEBUFFER_HEIGHT = 0x9316
;export inline constexpr auto GL_MAX_FRAMEBUFFER_LAYERS = 0x9317
;export inline constexpr auto GL_MAX_FRAMEBUFFER_SAMPLES = 0x9318
;export inline constexpr auto GL_INTERNALFORMAT_SUPPORTED = 0x826F
;export inline constexpr auto GL_INTERNALFORMAT_PREFERRED = 0x8270
;export inline constexpr auto GL_INTERNALFORMAT_RED_SIZE = 0x8271
;export inline constexpr auto GL_INTERNALFORMAT_GREEN_SIZE = 0x8272
;export inline constexpr auto GL_INTERNALFORMAT_BLUE_SIZE = 0x8273
;export inline constexpr auto GL_INTERNALFORMAT_ALPHA_SIZE = 0x8274
;export inline constexpr auto GL_INTERNALFORMAT_DEPTH_SIZE = 0x8275
;export inline constexpr auto GL_INTERNALFORMAT_STENCIL_SIZE = 0x8276
;export inline constexpr auto GL_INTERNALFORMAT_SHARED_SIZE = 0x8277
;export inline constexpr auto GL_INTERNALFORMAT_RED_TYPE = 0x8278
;export inline constexpr auto GL_INTERNALFORMAT_GREEN_TYPE = 0x8279
;export inline constexpr auto GL_INTERNALFORMAT_BLUE_TYPE = 0x827A
;export inline constexpr auto GL_INTERNALFORMAT_ALPHA_TYPE = 0x827B
;export inline constexpr auto GL_INTERNALFORMAT_DEPTH_TYPE = 0x827C
;export inline constexpr auto GL_INTERNALFORMAT_STENCIL_TYPE = 0x827D
;export inline constexpr auto GL_MAX_WIDTH = 0x827E
;export inline constexpr auto GL_MAX_HEIGHT = 0x827F
;export inline constexpr auto GL_MAX_DEPTH = 0x8280
;export inline constexpr auto GL_MAX_LAYERS = 0x8281
;export inline constexpr auto GL_MAX_COMBINED_DIMENSIONS = 0x8282
;export inline constexpr auto GL_COLOR_COMPONENTS = 0x8283
;export inline constexpr auto GL_DEPTH_COMPONENTS = 0x8284
;export inline constexpr auto GL_STENCIL_COMPONENTS = 0x8285
;export inline constexpr auto GL_COLOR_RENDERABLE = 0x8286
;export inline constexpr auto GL_DEPTH_RENDERABLE = 0x8287
;export inline constexpr auto GL_STENCIL_RENDERABLE = 0x8288
;export inline constexpr auto GL_FRAMEBUFFER_RENDERABLE = 0x8289
;export inline constexpr auto GL_FRAMEBUFFER_RENDERABLE_LAYERED = 0x828A
;export inline constexpr auto GL_FRAMEBUFFER_BLEND = 0x828B
;export inline constexpr auto GL_READ_PIXELS = 0x828C
;export inline constexpr auto GL_READ_PIXELS_FORMAT = 0x828D
;export inline constexpr auto GL_READ_PIXELS_TYPE = 0x828E
;export inline constexpr auto GL_TEXTURE_IMAGE_FORMAT = 0x828F
;export inline constexpr auto GL_TEXTURE_IMAGE_TYPE = 0x8290
;export inline constexpr auto GL_GET_TEXTURE_IMAGE_FORMAT = 0x8291
;export inline constexpr auto GL_GET_TEXTURE_IMAGE_TYPE = 0x8292
;export inline constexpr auto GL_MIPMAP = 0x8293
;export inline constexpr auto GL_MANUAL_GENERATE_MIPMAP = 0x8294
;export inline constexpr auto GL_AUTO_GENERATE_MIPMAP = 0x8295
;export inline constexpr auto GL_COLOR_ENCODING = 0x8296
;export inline constexpr auto GL_SRGB_READ = 0x8297
;export inline constexpr auto GL_SRGB_WRITE = 0x8298
;export inline constexpr auto GL_FILTER = 0x829A
;export inline constexpr auto GL_VERTEX_TEXTURE = 0x829B
;export inline constexpr auto GL_TESS_CONTROL_TEXTURE = 0x829C
;export inline constexpr auto GL_TESS_EVALUATION_TEXTURE = 0x829D
;export inline constexpr auto GL_GEOMETRY_TEXTURE = 0x829E
;export inline constexpr auto GL_FRAGMENT_TEXTURE = 0x829F
;export inline constexpr auto GL_COMPUTE_TEXTURE = 0x82A0
;export inline constexpr auto GL_TEXTURE_SHADOW = 0x82A1
;export inline constexpr auto GL_TEXTURE_GATHER = 0x82A2
;export inline constexpr auto GL_TEXTURE_GATHER_SHADOW = 0x82A3
;export inline constexpr auto GL_SHADER_IMAGE_LOAD = 0x82A4
;export inline constexpr auto GL_SHADER_IMAGE_STORE = 0x82A5
;export inline constexpr auto GL_SHADER_IMAGE_ATOMIC = 0x82A6
;export inline constexpr auto GL_IMAGE_TEXEL_SIZE = 0x82A7
;export inline constexpr auto GL_IMAGE_COMPATIBILITY_CLASS = 0x82A8
;export inline constexpr auto GL_IMAGE_PIXEL_FORMAT = 0x82A9
;export inline constexpr auto GL_IMAGE_PIXEL_TYPE = 0x82AA
;export inline constexpr auto GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST = 0x82AC
;export inline constexpr auto GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST = 0x82AD
;export inline constexpr auto GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE = 0x82AE
;export inline constexpr auto GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE = 0x82AF
;export inline constexpr auto GL_TEXTURE_COMPRESSED_BLOCK_WIDTH = 0x82B1
;export inline constexpr auto GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT = 0x82B2
;export inline constexpr auto GL_TEXTURE_COMPRESSED_BLOCK_SIZE = 0x82B3
;export inline constexpr auto GL_CLEAR_BUFFER = 0x82B4
;export inline constexpr auto GL_TEXTURE_VIEW = 0x82B5
;export inline constexpr auto GL_VIEW_COMPATIBILITY_CLASS = 0x82B6
;export inline constexpr auto GL_FULL_SUPPORT = 0x82B7
;export inline constexpr auto GL_CAVEAT_SUPPORT = 0x82B8
;export inline constexpr auto GL_IMAGE_CLASS_4_X_32 = 0x82B9
;export inline constexpr auto GL_IMAGE_CLASS_2_X_32 = 0x82BA
;export inline constexpr auto GL_IMAGE_CLASS_1_X_32 = 0x82BB
;export inline constexpr auto GL_IMAGE_CLASS_4_X_16 = 0x82BC
;export inline constexpr auto GL_IMAGE_CLASS_2_X_16 = 0x82BD
;export inline constexpr auto GL_IMAGE_CLASS_1_X_16 = 0x82BE
;export inline constexpr auto GL_IMAGE_CLASS_4_X_8 = 0x82BF
;export inline constexpr auto GL_IMAGE_CLASS_2_X_8 = 0x82C0
;export inline constexpr auto GL_IMAGE_CLASS_1_X_8 = 0x82C1
;export inline constexpr auto GL_IMAGE_CLASS_11_11_10 = 0x82C2
;export inline constexpr auto GL_IMAGE_CLASS_10_10_10_2 = 0x82C3
;export inline constexpr auto GL_VIEW_CLASS_128_BITS = 0x82C4
;export inline constexpr auto GL_VIEW_CLASS_96_BITS = 0x82C5
;export inline constexpr auto GL_VIEW_CLASS_64_BITS = 0x82C6
;export inline constexpr auto GL_VIEW_CLASS_48_BITS = 0x82C7
;export inline constexpr auto GL_VIEW_CLASS_32_BITS = 0x82C8
;export inline constexpr auto GL_VIEW_CLASS_24_BITS = 0x82C9
;export inline constexpr auto GL_VIEW_CLASS_16_BITS = 0x82CA
;export inline constexpr auto GL_VIEW_CLASS_8_BITS = 0x82CB
;export inline constexpr auto GL_VIEW_CLASS_S3TC_DXT1_RGB = 0x82CC
;export inline constexpr auto GL_VIEW_CLASS_S3TC_DXT1_RGBA = 0x82CD
;export inline constexpr auto GL_VIEW_CLASS_S3TC_DXT3_RGBA = 0x82CE
;export inline constexpr auto GL_VIEW_CLASS_S3TC_DXT5_RGBA = 0x82CF
;export inline constexpr auto GL_VIEW_CLASS_RGTC1_RED = 0x82D0
;export inline constexpr auto GL_VIEW_CLASS_RGTC2_RG = 0x82D1
;export inline constexpr auto GL_VIEW_CLASS_BPTC_UNORM = 0x82D2
;export inline constexpr auto GL_VIEW_CLASS_BPTC_FLOAT = 0x82D3
;export inline constexpr auto GL_UNIFORM = 0x92E1
;export inline constexpr auto GL_UNIFORM_BLOCK = 0x92E2
;export inline constexpr auto GL_PROGRAM_INPUT = 0x92E3
;export inline constexpr auto GL_PROGRAM_OUTPUT = 0x92E4
;export inline constexpr auto GL_BUFFER_VARIABLE = 0x92E5
;export inline constexpr auto GL_SHADER_STORAGE_BLOCK = 0x92E6
;export inline constexpr auto GL_VERTEX_SUBROUTINE = 0x92E8
;export inline constexpr auto GL_TESS_CONTROL_SUBROUTINE = 0x92E9
;export inline constexpr auto GL_TESS_EVALUATION_SUBROUTINE = 0x92EA
;export inline constexpr auto GL_GEOMETRY_SUBROUTINE = 0x92EB
;export inline constexpr auto GL_FRAGMENT_SUBROUTINE = 0x92EC
;export inline constexpr auto GL_COMPUTE_SUBROUTINE = 0x92ED
;export inline constexpr auto GL_VERTEX_SUBROUTINE_UNIFORM = 0x92EE
;export inline constexpr auto GL_TESS_CONTROL_SUBROUTINE_UNIFORM = 0x92EF
;export inline constexpr auto GL_TESS_EVALUATION_SUBROUTINE_UNIFORM = 0x92F0
;export inline constexpr auto GL_GEOMETRY_SUBROUTINE_UNIFORM = 0x92F1
;export inline constexpr auto GL_FRAGMENT_SUBROUTINE_UNIFORM = 0x92F2
;export inline constexpr auto GL_COMPUTE_SUBROUTINE_UNIFORM = 0x92F3
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_VARYING = 0x92F4
;export inline constexpr auto GL_ACTIVE_RESOURCES = 0x92F5
;export inline constexpr auto GL_MAX_NAME_LENGTH = 0x92F6
;export inline constexpr auto GL_MAX_NUM_ACTIVE_VARIABLES = 0x92F7
;export inline constexpr auto GL_MAX_NUM_COMPATIBLE_SUBROUTINES = 0x92F8
;export inline constexpr auto GL_NAME_LENGTH = 0x92F9
;export inline constexpr auto GL_TYPE = 0x92FA
;export inline constexpr auto GL_ARRAY_SIZE = 0x92FB
;export inline constexpr auto GL_OFFSET = 0x92FC
;export inline constexpr auto GL_BLOCK_INDEX = 0x92FD
;export inline constexpr auto GL_ARRAY_STRIDE = 0x92FE
;export inline constexpr auto GL_MATRIX_STRIDE = 0x92FF
;export inline constexpr auto GL_IS_ROW_MAJOR = 0x9300
;export inline constexpr auto GL_ATOMIC_COUNTER_BUFFER_INDEX = 0x9301
;export inline constexpr auto GL_BUFFER_BINDING = 0x9302
;export inline constexpr auto GL_BUFFER_DATA_SIZE = 0x9303
;export inline constexpr auto GL_NUM_ACTIVE_VARIABLES = 0x9304
;export inline constexpr auto GL_ACTIVE_VARIABLES = 0x9305
;export inline constexpr auto GL_REFERENCED_BY_VERTEX_SHADER = 0x9306
;export inline constexpr auto GL_REFERENCED_BY_TESS_CONTROL_SHADER = 0x9307
;export inline constexpr auto GL_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x9308
;export inline constexpr auto GL_REFERENCED_BY_GEOMETRY_SHADER = 0x9309
;export inline constexpr auto GL_REFERENCED_BY_FRAGMENT_SHADER = 0x930A
;export inline constexpr auto GL_REFERENCED_BY_COMPUTE_SHADER = 0x930B
;export inline constexpr auto GL_TOP_LEVEL_ARRAY_SIZE = 0x930C
;export inline constexpr auto GL_TOP_LEVEL_ARRAY_STRIDE = 0x930D
;export inline constexpr auto GL_LOCATION = 0x930E
;export inline constexpr auto GL_LOCATION_INDEX = 0x930F
;export inline constexpr auto GL_IS_PER_PATCH = 0x92E7
;export inline constexpr auto GL_SHADER_STORAGE_BUFFER = 0x90D2
;export inline constexpr auto GL_SHADER_STORAGE_BUFFER_BINDING = 0x90D3
;export inline constexpr auto GL_SHADER_STORAGE_BUFFER_START = 0x90D4
;export inline constexpr auto GL_SHADER_STORAGE_BUFFER_SIZE = 0x90D5
;export inline constexpr auto GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS = 0x90D6
;export inline constexpr auto GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = 0x90D7
;export inline constexpr auto GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = 0x90D8
;export inline constexpr auto GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = 0x90D9
;export inline constexpr auto GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = 0x90DA
;export inline constexpr auto GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS = 0x90DB
;export inline constexpr auto GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS = 0x90DC
;export inline constexpr auto GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS = 0x90DD
;export inline constexpr auto GL_MAX_SHADER_STORAGE_BLOCK_SIZE = 0x90DE
;export inline constexpr auto GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = 0x90DF
;export inline constexpr auto GL_SHADER_STORAGE_BARRIER_BIT = 0x00002000
;export inline constexpr auto GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES = 0x8F39
;export inline constexpr auto GL_DEPTH_STENCIL_TEXTURE_MODE = 0x90EA
;export inline constexpr auto GL_TEXTURE_BUFFER_OFFSET = 0x919D
;export inline constexpr auto GL_TEXTURE_BUFFER_SIZE = 0x919E
;export inline constexpr auto GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT = 0x919F
;export inline constexpr auto GL_TEXTURE_VIEW_MIN_LEVEL = 0x82DB
;export inline constexpr auto GL_TEXTURE_VIEW_NUM_LEVELS = 0x82DC
;export inline constexpr auto GL_TEXTURE_VIEW_MIN_LAYER = 0x82DD
;export inline constexpr auto GL_TEXTURE_VIEW_NUM_LAYERS = 0x82DE
;export inline constexpr auto GL_TEXTURE_IMMUTABLE_LEVELS = 0x82DF
;export inline constexpr auto GL_VERTEX_ATTRIB_BINDING = 0x82D4
;export inline constexpr auto GL_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D5
;export inline constexpr auto GL_VERTEX_BINDING_DIVISOR = 0x82D6
;export inline constexpr auto GL_VERTEX_BINDING_OFFSET = 0x82D7
;export inline constexpr auto GL_VERTEX_BINDING_STRIDE = 0x82D8
;export inline constexpr auto GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D9
;export inline constexpr auto GL_MAX_VERTEX_ATTRIB_BINDINGS = 0x82DA
;export inline constexpr auto GL_VERTEX_BINDING_BUFFER = 0x8F4F
;export inline constexpr auto GL_DISPLAY_LIST = 0x82E7
;export inline constexpr auto GL_STACK_UNDERFLOW = 0x0504
;export inline constexpr auto GL_STACK_OVERFLOW = 0x0503
;export inline constexpr auto GL_MAX_VERTEX_ATTRIB_STRIDE = 0x82E5
;export inline constexpr auto GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = 0x8221
;export inline constexpr auto GL_TEXTURE_BUFFER_BINDING = 0x8C2A
;export inline constexpr auto GL_MAP_PERSISTENT_BIT = 0x0040
;export inline constexpr auto GL_MAP_COHERENT_BIT = 0x0080
;export inline constexpr auto GL_DYNAMIC_STORAGE_BIT = 0x0100
;export inline constexpr auto GL_CLIENT_STORAGE_BIT = 0x0200
;export inline constexpr auto GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT = 0x00004000
;export inline constexpr auto GL_BUFFER_IMMUTABLE_STORAGE = 0x821F
;export inline constexpr auto GL_BUFFER_STORAGE_FLAGS = 0x8220
;export inline constexpr auto GL_CLEAR_TEXTURE = 0x9365
;export inline constexpr auto GL_LOCATION_COMPONENT = 0x934A
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_BUFFER_INDEX = 0x934B
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE = 0x934C
;export inline constexpr auto GL_QUERY_BUFFER = 0x9192
;export inline constexpr auto GL_QUERY_BUFFER_BARRIER_BIT = 0x00008000
;export inline constexpr auto GL_QUERY_BUFFER_BINDING = 0x9193
;export inline constexpr auto GL_QUERY_RESULT_NO_WAIT = 0x9194
;export inline constexpr auto GL_MIRROR_CLAMP_TO_EDGE = 0x8743
;export inline constexpr auto GL_CONTEXT_LOST = 0x0507
;export inline constexpr auto GL_NEGATIVE_ONE_TO_ONE = 0x935E
;export inline constexpr auto GL_ZERO_TO_ONE = 0x935F
;export inline constexpr auto GL_CLIP_ORIGIN = 0x935C
;export inline constexpr auto GL_CLIP_DEPTH_MODE = 0x935D
;export inline constexpr auto GL_QUERY_WAIT_INVERTED = 0x8E17
;export inline constexpr auto GL_QUERY_NO_WAIT_INVERTED = 0x8E18
;export inline constexpr auto GL_QUERY_BY_REGION_WAIT_INVERTED = 0x8E19
;export inline constexpr auto GL_QUERY_BY_REGION_NO_WAIT_INVERTED = 0x8E1A
;export inline constexpr auto GL_MAX_CULL_DISTANCES = 0x82F9
;export inline constexpr auto GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES = 0x82FA
;export inline constexpr auto GL_TEXTURE_TARGET = 0x1006
;export inline constexpr auto GL_QUERY_TARGET = 0x82EA
;export inline constexpr auto GL_GUILTY_CONTEXT_RESET = 0x8253
;export inline constexpr auto GL_INNOCENT_CONTEXT_RESET = 0x8254
;export inline constexpr auto GL_UNKNOWN_CONTEXT_RESET = 0x8255
;export inline constexpr auto GL_RESET_NOTIFICATION_STRATEGY = 0x8256
;export inline constexpr auto GL_LOSE_CONTEXT_ON_RESET = 0x8252
;export inline constexpr auto GL_NO_RESET_NOTIFICATION = 0x8261
;export inline constexpr auto GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT = 0x00000004
;export inline constexpr auto GL_COLOR_TABLE = 0x80D0
;export inline constexpr auto GL_POST_CONVOLUTION_COLOR_TABLE = 0x80D1
;export inline constexpr auto GL_POST_COLOR_MATRIX_COLOR_TABLE = 0x80D2
;export inline constexpr auto GL_PROXY_COLOR_TABLE = 0x80D3
;export inline constexpr auto GL_PROXY_POST_CONVOLUTION_COLOR_TABLE = 0x80D4
;export inline constexpr auto GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE = 0x80D5
;export inline constexpr auto GL_CONVOLUTION_1D = 0x8010
;export inline constexpr auto GL_CONVOLUTION_2D = 0x8011
;export inline constexpr auto GL_SEPARABLE_2D = 0x8012
;export inline constexpr auto GL_HISTOGRAM = 0x8024
;export inline constexpr auto GL_PROXY_HISTOGRAM = 0x8025
;export inline constexpr auto GL_MINMAX = 0x802E
;export inline constexpr auto GL_CONTEXT_RELEASE_BEHAVIOR = 0x82FB
;export inline constexpr auto GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH = 0x82FC
;export inline constexpr auto GL_SHADER_BINARY_FORMAT_SPIR_V = 0x9551
;export inline constexpr auto GL_SPIR_V_BINARY = 0x9552
;export inline constexpr auto GL_PARAMETER_BUFFER = 0x80EE
;export inline constexpr auto GL_PARAMETER_BUFFER_BINDING = 0x80EF
;export inline constexpr auto GL_CONTEXT_FLAG_NO_ERROR_BIT = 0x00000008
;export inline constexpr auto GL_VERTICES_SUBMITTED = 0x82EE
;export inline constexpr auto GL_PRIMITIVES_SUBMITTED = 0x82EF
;export inline constexpr auto GL_VERTEX_SHADER_INVOCATIONS = 0x82F0
;export inline constexpr auto GL_TESS_CONTROL_SHADER_PATCHES = 0x82F1
;export inline constexpr auto GL_TESS_EVALUATION_SHADER_INVOCATIONS = 0x82F2
;export inline constexpr auto GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED = 0x82F3
;export inline constexpr auto GL_FRAGMENT_SHADER_INVOCATIONS = 0x82F4
;export inline constexpr auto GL_COMPUTE_SHADER_INVOCATIONS = 0x82F5
;export inline constexpr auto GL_CLIPPING_INPUT_PRIMITIVES = 0x82F6
;export inline constexpr auto GL_CLIPPING_OUTPUT_PRIMITIVES = 0x82F7
;export inline constexpr auto GL_POLYGON_OFFSET_CLAMP = 0x8E1B
;export inline constexpr auto GL_SPIR_V_EXTENSIONS = 0x9553
;export inline constexpr auto GL_NUM_SPIR_V_EXTENSIONS = 0x9554
;export inline constexpr auto GL_TEXTURE_MAX_ANISOTROPY = 0x84FE
;export inline constexpr auto GL_MAX_TEXTURE_MAX_ANISOTROPY = 0x84FF
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_OVERFLOW = 0x82EC
;export inline constexpr auto GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW = 0x82ED;


extern "C"{

    export typedef __int32                 khronos_int32_t;
    export typedef unsigned __int32        khronos_uint32_t;
    export typedef __int64                 khronos_int64_t;
    export typedef unsigned __int64        khronos_uint64_t;
    export typedef signed   long long int  khronos_ssize_t;
    export typedef unsigned long long int  khronos_usize_t;
    export typedef signed   char           khronos_int8_t;
    export typedef unsigned char           khronos_uint8_t;
    export typedef signed   short int      khronos_int16_t;
    export typedef unsigned short int      khronos_uint16_t;
    export typedef signed   long long int  khronos_intptr_t;
    export typedef unsigned long long int  khronos_uintptr_t;
    export typedef          float          khronos_float_t;
    export typedef khronos_uint64_t        khronos_utime_nanoseconds_t;
    export typedef khronos_int64_t         khronos_stime_nanoseconds_t;
    export typedef unsigned int GLenum;
    export typedef unsigned char GLboolean;
    export typedef unsigned int GLbitfield;
    export typedef void GLvoid;
    export typedef khronos_int8_t GLbyte;
    export typedef khronos_uint8_t GLubyte;
    export typedef khronos_int16_t GLshort;
    export typedef khronos_uint16_t GLushort;
    export typedef int GLint;
    export typedef unsigned int GLuint;
    export typedef khronos_int32_t GLclampx;
    export typedef int GLsizei;
    export typedef khronos_float_t GLfloat;
    export typedef khronos_float_t GLclampf;
    export typedef double GLdouble;
    export typedef double GLclampd;
    export typedef void* GLeglClientBufferEXT;
    export typedef void* GLeglImageOES;
    export typedef char GLchar;
    export typedef char GLcharARB;
    export typedef unsigned int GLhandleARB;
    export typedef khronos_uint16_t GLhalf;
    export typedef khronos_uint16_t GLhalfARB;
    export typedef khronos_int32_t GLfixed;
    export typedef khronos_intptr_t GLintptr;
    export typedef khronos_intptr_t GLintptrARB;
    export typedef khronos_ssize_t GLsizeiptr;
    export typedef khronos_ssize_t GLsizeiptrARB;
    export typedef khronos_int64_t GLint64;
    export typedef khronos_int64_t GLint64EXT;
    export typedef khronos_uint64_t GLuint64;
    export typedef khronos_uint64_t GLuint64EXT;
    export typedef struct __GLsync* GLsync;
    export struct _cl_context;
    export struct _cl_event;

    export typedef void (__stdcall* GLDEBUGPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);
    export typedef void (__stdcall* GLDEBUGPROCARB)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);
    export typedef void (__stdcall* GLDEBUGPROCKHR)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);
    export typedef void (__stdcall* GLDEBUGPROCAMD)(GLuint id, GLenum category, GLenum severity, GLsizei length, const GLchar* message, void* userParam);
    export typedef unsigned short GLhalfNV;
    export typedef GLintptr GLvdpauSurfaceNV;
    export typedef void (__stdcall* GLVULKANPROCNV)(void);

    export inline constexpr auto KHRONOS_MAX_ENUM = 0x7FFFFFFF;
    export inline constexpr auto KHRONOS_SUPPORT_INT64 = 1;
    export inline constexpr auto KHRONOS_SUPPORT_FLOAT = 1;

    export typedef enum {
        KHRONOS_FALSE = 0,
        KHRONOS_TRUE = 1,
        KHRONOS_BOOLEAN_ENUM_FORCE_SIZE = KHRONOS_MAX_ENUM
    } khronos_boolean_enum_t;

    export struct gladGLversionStruct {
        int major;
        int minor;
    };

    export typedef void* (*GLADloadproc)(const char* name);
	export typedef void* (*GLADloadproc)(const char* name);
   

typedef void (__stdcall * PFNGLCULLFACEPROC)(GLenum mode);
typedef void (__stdcall * PFNGLFRONTFACEPROC)(GLenum mode);
typedef void (__stdcall * PFNGLHINTPROC)(GLenum target, GLenum mode);
typedef void (__stdcall * PFNGLLINEWIDTHPROC)(GLfloat width);
typedef void (__stdcall * PFNGLPOINTSIZEPROC)(GLfloat size);
typedef void (__stdcall * PFNGLPOLYGONMODEPROC)(GLenum face, GLenum mode);
typedef void (__stdcall * PFNGLSCISSORPROC)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLTEXPARAMETERFPROC)(GLenum target, GLenum pname, GLfloat param);
typedef void (__stdcall * PFNGLTEXPARAMETERFVPROC)(GLenum target, GLenum pname, const GLfloat *params);
typedef void (__stdcall * PFNGLTEXPARAMETERIPROC)(GLenum target, GLenum pname, GLint param);
typedef void (__stdcall * PFNGLTEXPARAMETERIVPROC)(GLenum target, GLenum pname, const GLint *params);
typedef void (__stdcall * PFNGLTEXIMAGE1DPROC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (__stdcall * PFNGLTEXIMAGE2DPROC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (__stdcall * PFNGLDRAWBUFFERPROC)(GLenum buf);
typedef void (__stdcall * PFNGLCLEARPROC)(GLbitfield mask);
typedef void (__stdcall * PFNGLCLEARCOLORPROC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (__stdcall * PFNGLCLEARSTENCILPROC)(GLint s);
typedef void (__stdcall * PFNGLCLEARDEPTHPROC)(GLdouble depth);
typedef void (__stdcall * PFNGLSTENCILMASKPROC)(GLuint mask);
typedef void (__stdcall * PFNGLCOLORMASKPROC)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (__stdcall * PFNGLDEPTHMASKPROC)(GLboolean flag);
typedef void (__stdcall * PFNGLDISABLEPROC)(GLenum cap);
typedef void (__stdcall * PFNGLENABLEPROC)(GLenum cap);
typedef void (__stdcall * PFNGLFINISHPROC)(void);
typedef void (__stdcall * PFNGLFLUSHPROC)(void);
typedef void (__stdcall * PFNGLBLENDFUNCPROC)(GLenum sfactor, GLenum dfactor);
typedef void (__stdcall * PFNGLLOGICOPPROC)(GLenum opcode);
typedef void (__stdcall * PFNGLSTENCILFUNCPROC)(GLenum func, GLint ref, GLuint mask);
typedef void (__stdcall * PFNGLSTENCILOPPROC)(GLenum fail, GLenum zfail, GLenum zpass);
typedef void (__stdcall * PFNGLDEPTHFUNCPROC)(GLenum func);
typedef void (__stdcall * PFNGLPIXELSTOREFPROC)(GLenum pname, GLfloat param);
typedef void (__stdcall * PFNGLPIXELSTOREIPROC)(GLenum pname, GLint param);
typedef void (__stdcall * PFNGLREADBUFFERPROC)(GLenum src);
typedef void (__stdcall * PFNGLREADPIXELSPROC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
typedef void (__stdcall * PFNGLGETBOOLEANVPROC)(GLenum pname, GLboolean *data);
typedef void (__stdcall * PFNGLGETDOUBLEVPROC)(GLenum pname, GLdouble *data);
typedef GLenum (__stdcall * PFNGLGETERRORPROC)(void);
typedef void (__stdcall * PFNGLGETFLOATVPROC)(GLenum pname, GLfloat *data);
typedef void (__stdcall * PFNGLGETINTEGERVPROC)(GLenum pname, GLint *data);
typedef const GLubyte * (__stdcall * PFNGLGETSTRINGPROC)(GLenum name);
typedef void (__stdcall * PFNGLGETTEXIMAGEPROC)(GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
typedef void (__stdcall * PFNGLGETTEXPARAMETERFVPROC)(GLenum target, GLenum pname, GLfloat *params);
typedef void (__stdcall * PFNGLGETTEXPARAMETERIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETTEXLEVELPARAMETERFVPROC)(GLenum target, GLint level, GLenum pname, GLfloat *params);
typedef void (__stdcall * PFNGLGETTEXLEVELPARAMETERIVPROC)(GLenum target, GLint level, GLenum pname, GLint *params);
typedef GLboolean (__stdcall * PFNGLISENABLEDPROC)(GLenum cap);
typedef void (__stdcall * PFNGLDEPTHRANGEPROC)(GLdouble n, GLdouble f);
typedef void (__stdcall * PFNGLVIEWPORTPROC)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLDRAWARRAYSPROC)(GLenum mode, GLint first, GLsizei count);
typedef void (__stdcall * PFNGLDRAWELEMENTSPROC)(GLenum mode, GLsizei count, GLenum type, const void *indices);
typedef void (__stdcall * PFNGLPOLYGONOFFSETPROC)(GLfloat factor, GLfloat units);
typedef void (__stdcall * PFNGLCOPYTEXIMAGE1DPROC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (__stdcall * PFNGLCOPYTEXIMAGE2DPROC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (__stdcall * PFNGLCOPYTEXSUBIMAGE1DPROC)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (__stdcall * PFNGLCOPYTEXSUBIMAGE2DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLTEXSUBIMAGE1DPROC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
typedef void (__stdcall * PFNGLTEXSUBIMAGE2DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (__stdcall * PFNGLBINDTEXTUREPROC)(GLenum target, GLuint texture);
typedef void (__stdcall * PFNGLDELETETEXTURESPROC)(GLsizei n, const GLuint *textures);
typedef void (__stdcall * PFNGLGENTEXTURESPROC)(GLsizei n, GLuint *textures);
typedef GLboolean (__stdcall * PFNGLISTEXTUREPROC)(GLuint texture);
typedef void (__stdcall * PFNGLDRAWRANGEELEMENTSPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
typedef void (__stdcall * PFNGLTEXIMAGE3DPROC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (__stdcall * PFNGLTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (__stdcall * PFNGLCOPYTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void(__stdcall* PFNGLACTIVETEXTUREPROC)(GLenum texture);
typedef void(__stdcall* PFNGLSAMPLECOVERAGEPROC)(GLfloat value, GLboolean invert);
typedef void (__stdcall * PFNGLCOMPRESSEDTEXIMAGE3DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
typedef void (__stdcall * PFNGLCOMPRESSEDTEXIMAGE2DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
typedef void (__stdcall * PFNGLCOMPRESSEDTEXIMAGE1DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
typedef void (__stdcall * PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (__stdcall * PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (__stdcall * PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
typedef void (__stdcall * PFNGLGETCOMPRESSEDTEXIMAGEPROC)(GLenum target, GLint level, void *img);
typedef void (__stdcall * PFNGLBLENDFUNCSEPARATEPROC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (__stdcall * PFNGLMULTIDRAWARRAYSPROC)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
typedef void (__stdcall * PFNGLMULTIDRAWELEMENTSPROC)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
typedef void (__stdcall * PFNGLPOINTPARAMETERFPROC)(GLenum pname, GLfloat param);
typedef void (__stdcall * PFNGLPOINTPARAMETERFVPROC)(GLenum pname, const GLfloat *params);
typedef void (__stdcall * PFNGLPOINTPARAMETERIPROC)(GLenum pname, GLint param);
typedef void (__stdcall * PFNGLPOINTPARAMETERIVPROC)(GLenum pname, const GLint *params);
typedef void (__stdcall * PFNGLBLENDCOLORPROC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (__stdcall * PFNGLBLENDEQUATIONPROC)(GLenum mode);
typedef void (__stdcall * PFNGLGENQUERIESPROC)(GLsizei n, GLuint *ids);
typedef void (__stdcall * PFNGLDELETEQUERIESPROC)(GLsizei n, const GLuint *ids);
typedef GLboolean (__stdcall * PFNGLISQUERYPROC)(GLuint id);
typedef void (__stdcall * PFNGLBEGINQUERYPROC)(GLenum target, GLuint id);
typedef void (__stdcall * PFNGLENDQUERYPROC)(GLenum target);
typedef void (__stdcall * PFNGLGETQUERYIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETQUERYOBJECTIVPROC)(GLuint id, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETQUERYOBJECTUIVPROC)(GLuint id, GLenum pname, GLuint *params);
typedef void (__stdcall * PFNGLBINDBUFFERPROC)(GLenum target, GLuint buffer);
typedef void (__stdcall * PFNGLDELETEBUFFERSPROC)(GLsizei n, const GLuint *buffers);
typedef void (__stdcall * PFNGLGENBUFFERSPROC)(GLsizei n, GLuint *buffers);
typedef GLboolean (__stdcall * PFNGLISBUFFERPROC)(GLuint buffer);
typedef void (__stdcall * PFNGLBUFFERDATAPROC)(GLenum target, GLsizeiptr size, const void *data, GLenum usage);
typedef void (__stdcall * PFNGLBUFFERSUBDATAPROC)(GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
typedef void (__stdcall * PFNGLGETBUFFERSUBDATAPROC)(GLenum target, GLintptr offset, GLsizeiptr size, void *data);
typedef void * (__stdcall * PFNGLMAPBUFFERPROC)(GLenum target, GLenum access);
typedef GLboolean (__stdcall * PFNGLUNMAPBUFFERPROC)(GLenum target);
typedef void (__stdcall * PFNGLGETBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETBUFFERPOINTERVPROC)(GLenum target, GLenum pname, void **params);
typedef void (__stdcall * PFNGLBLENDEQUATIONSEPARATEPROC)(GLenum modeRGB, GLenum modeAlpha);
typedef void (__stdcall * PFNGLDRAWBUFFERSPROC)(GLsizei n, const GLenum *bufs);
typedef void (__stdcall * PFNGLSTENCILOPSEPARATEPROC)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (__stdcall * PFNGLSTENCILFUNCSEPARATEPROC)(GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (__stdcall * PFNGLSTENCILMASKSEPARATEPROC)(GLenum face, GLuint mask);
typedef void (__stdcall * PFNGLATTACHSHADERPROC)(GLuint program, GLuint shader);
typedef void (__stdcall * PFNGLBINDATTRIBLOCATIONPROC)(GLuint program, GLuint index, const GLchar *name);
typedef void (__stdcall * PFNGLCOMPILESHADERPROC)(GLuint shader);
typedef GLuint (__stdcall * PFNGLCREATEPROGRAMPROC)(void);
typedef GLuint (__stdcall * PFNGLCREATESHADERPROC)(GLenum type);
typedef void (__stdcall * PFNGLDELETEPROGRAMPROC)(GLuint program);
typedef void (__stdcall * PFNGLDELETESHADERPROC)(GLuint shader);
typedef void (__stdcall * PFNGLDETACHSHADERPROC)(GLuint program, GLuint shader);
typedef void (__stdcall * PFNGLDISABLEVERTEXATTRIBARRAYPROC)(GLuint index);
typedef void (__stdcall * PFNGLENABLEVERTEXATTRIBARRAYPROC)(GLuint index);
typedef void (__stdcall * PFNGLGETACTIVEATTRIBPROC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (__stdcall * PFNGLGETACTIVEUNIFORMPROC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (__stdcall * PFNGLGETATTACHEDSHADERSPROC)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
typedef GLint (__stdcall * PFNGLGETATTRIBLOCATIONPROC)(GLuint program, const GLchar *name);
typedef void (__stdcall * PFNGLGETPROGRAMIVPROC)(GLuint program, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETPROGRAMINFOLOGPROC)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (__stdcall * PFNGLGETSHADERIVPROC)(GLuint shader, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETSHADERINFOLOGPROC)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (__stdcall * PFNGLGETSHADERSOURCEPROC)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
typedef GLint (__stdcall * PFNGLGETUNIFORMLOCATIONPROC)(GLuint program, const GLchar *name);
typedef void (__stdcall * PFNGLGETUNIFORMFVPROC)(GLuint program, GLint location, GLfloat *params);
typedef void (__stdcall * PFNGLGETUNIFORMIVPROC)(GLuint program, GLint location, GLint *params);
typedef void (__stdcall * PFNGLGETVERTEXATTRIBDVPROC)(GLuint index, GLenum pname, GLdouble *params);
typedef void (__stdcall * PFNGLGETVERTEXATTRIBFVPROC)(GLuint index, GLenum pname, GLfloat *params);
typedef void (__stdcall * PFNGLGETVERTEXATTRIBIVPROC)(GLuint index, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETVERTEXATTRIBPOINTERVPROC)(GLuint index, GLenum pname, void **pointer);
typedef GLboolean (__stdcall * PFNGLISPROGRAMPROC)(GLuint program);
typedef GLboolean (__stdcall * PFNGLISSHADERPROC)(GLuint shader);
typedef void (__stdcall * PFNGLLINKPROGRAMPROC)(GLuint program);
typedef void (__stdcall * PFNGLSHADERSOURCEPROC)(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
typedef void (__stdcall * PFNGLUSEPROGRAMPROC)(GLuint program);
typedef void (__stdcall * PFNGLUNIFORM1FPROC)(GLint location, GLfloat v0);
typedef void (__stdcall * PFNGLUNIFORM2FPROC)(GLint location, GLfloat v0, GLfloat v1);
typedef void (__stdcall * PFNGLUNIFORM3FPROC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (__stdcall * PFNGLUNIFORM4FPROC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (__stdcall * PFNGLUNIFORM1IPROC)(GLint location, GLint v0);
typedef void (__stdcall * PFNGLUNIFORM2IPROC)(GLint location, GLint v0, GLint v1);
typedef void (__stdcall * PFNGLUNIFORM3IPROC)(GLint location, GLint v0, GLint v1, GLint v2);
typedef void (__stdcall * PFNGLUNIFORM4IPROC)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (__stdcall * PFNGLUNIFORM1FVPROC)(GLint location, GLsizei count, const GLfloat *value);
typedef void (__stdcall * PFNGLUNIFORM2FVPROC)(GLint location, GLsizei count, const GLfloat *value);
typedef void (__stdcall * PFNGLUNIFORM3FVPROC)(GLint location, GLsizei count, const GLfloat *value);
typedef void (__stdcall * PFNGLUNIFORM4FVPROC)(GLint location, GLsizei count, const GLfloat *value);
typedef void (__stdcall * PFNGLUNIFORM1IVPROC)(GLint location, GLsizei count, const GLint *value);
typedef void (__stdcall * PFNGLUNIFORM2IVPROC)(GLint location, GLsizei count, const GLint *value);
typedef void (__stdcall * PFNGLUNIFORM3IVPROC)(GLint location, GLsizei count, const GLint *value);
typedef void (__stdcall * PFNGLUNIFORM4IVPROC)(GLint location, GLsizei count, const GLint *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX2FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX3FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX4FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLVALIDATEPROGRAMPROC)(GLuint program);
typedef void (__stdcall * PFNGLVERTEXATTRIB1DPROC)(GLuint index, GLdouble x);
typedef void (__stdcall * PFNGLVERTEXATTRIB1DVPROC)(GLuint index, const GLdouble *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB1FPROC)(GLuint index, GLfloat x);
typedef void (__stdcall * PFNGLVERTEXATTRIB1FVPROC)(GLuint index, const GLfloat *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB1SPROC)(GLuint index, GLshort x);
typedef void (__stdcall * PFNGLVERTEXATTRIB1SVPROC)(GLuint index, const GLshort *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB2DPROC)(GLuint index, GLdouble x, GLdouble y);
typedef void (__stdcall * PFNGLVERTEXATTRIB2DVPROC)(GLuint index, const GLdouble *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB2FPROC)(GLuint index, GLfloat x, GLfloat y);
typedef void (__stdcall * PFNGLVERTEXATTRIB2FVPROC)(GLuint index, const GLfloat *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB2SPROC)(GLuint index, GLshort x, GLshort y);
typedef void (__stdcall * PFNGLVERTEXATTRIB2SVPROC)(GLuint index, const GLshort *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB3DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (__stdcall * PFNGLVERTEXATTRIB3DVPROC)(GLuint index, const GLdouble *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB3FPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (__stdcall * PFNGLVERTEXATTRIB3FVPROC)(GLuint index, const GLfloat *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB3SPROC)(GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (__stdcall * PFNGLVERTEXATTRIB3SVPROC)(GLuint index, const GLshort *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4NBVPROC)(GLuint index, const GLbyte *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4NIVPROC)(GLuint index, const GLint *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4NSVPROC)(GLuint index, const GLshort *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4NUBPROC)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (__stdcall * PFNGLVERTEXATTRIB4NUBVPROC)(GLuint index, const GLubyte *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4NUIVPROC)(GLuint index, const GLuint *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4NUSVPROC)(GLuint index, const GLushort *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4BVPROC)(GLuint index, const GLbyte *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (__stdcall * PFNGLVERTEXATTRIB4DVPROC)(GLuint index, const GLdouble *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4FPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (__stdcall * PFNGLVERTEXATTRIB4FVPROC)(GLuint index, const GLfloat *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4IVPROC)(GLuint index, const GLint *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4SPROC)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (__stdcall * PFNGLVERTEXATTRIB4SVPROC)(GLuint index, const GLshort *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4UBVPROC)(GLuint index, const GLubyte *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4UIVPROC)(GLuint index, const GLuint *v);
typedef void (__stdcall * PFNGLVERTEXATTRIB4USVPROC)(GLuint index, const GLushort *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBPOINTERPROC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
typedef void (__stdcall * PFNGLUNIFORMMATRIX2X3FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX3X2FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX2X4FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX4X2FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX3X4FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX4X3FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLCOLORMASKIPROC)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef void (__stdcall * PFNGLGETBOOLEANI_VPROC)(GLenum target, GLuint index, GLboolean *data);
typedef void (__stdcall * PFNGLGETINTEGERI_VPROC)(GLenum target, GLuint index, GLint *data);
typedef void (__stdcall * PFNGLENABLEIPROC)(GLenum target, GLuint index);
typedef void (__stdcall * PFNGLDISABLEIPROC)(GLenum target, GLuint index);
typedef GLboolean (__stdcall * PFNGLISENABLEDIPROC)(GLenum target, GLuint index);
typedef void (__stdcall * PFNGLBEGINTRANSFORMFEEDBACKPROC)(GLenum primitiveMode);
typedef void (__stdcall * PFNGLENDTRANSFORMFEEDBACKPROC)(void);
typedef void (__stdcall * PFNGLBINDBUFFERRANGEPROC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (__stdcall * PFNGLBINDBUFFERBASEPROC)(GLenum target, GLuint index, GLuint buffer);
typedef void (__stdcall * PFNGLTRANSFORMFEEDBACKVARYINGSPROC)(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
typedef void (__stdcall * PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
typedef void (__stdcall * PFNGLCLAMPCOLORPROC)(GLenum target, GLenum clamp);
typedef void (__stdcall * PFNGLBEGINCONDITIONALRENDERPROC)(GLuint id, GLenum mode);
typedef void (__stdcall * PFNGLENDCONDITIONALRENDERPROC)(void);
typedef void (__stdcall * PFNGLVERTEXATTRIBIPOINTERPROC)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (__stdcall * PFNGLGETVERTEXATTRIBIIVPROC)(GLuint index, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETVERTEXATTRIBIUIVPROC)(GLuint index, GLenum pname, GLuint *params);
typedef void (__stdcall * PFNGLVERTEXATTRIBI1IPROC)(GLuint index, GLint x);
typedef void (__stdcall * PFNGLVERTEXATTRIBI2IPROC)(GLuint index, GLint x, GLint y);
typedef void (__stdcall * PFNGLVERTEXATTRIBI3IPROC)(GLuint index, GLint x, GLint y, GLint z);
typedef void (__stdcall * PFNGLVERTEXATTRIBI4IPROC)(GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (__stdcall * PFNGLVERTEXATTRIBI1UIPROC)(GLuint index, GLuint x);
typedef void (__stdcall * PFNGLVERTEXATTRIBI2UIPROC)(GLuint index, GLuint x, GLuint y);
typedef void (__stdcall * PFNGLVERTEXATTRIBI3UIPROC)(GLuint index, GLuint x, GLuint y, GLuint z);
typedef void (__stdcall * PFNGLVERTEXATTRIBI4UIPROC)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (__stdcall * PFNGLVERTEXATTRIBI1IVPROC)(GLuint index, const GLint *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBI2IVPROC)(GLuint index, const GLint *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBI3IVPROC)(GLuint index, const GLint *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBI4IVPROC)(GLuint index, const GLint *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBI1UIVPROC)(GLuint index, const GLuint *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBI2UIVPROC)(GLuint index, const GLuint *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBI3UIVPROC)(GLuint index, const GLuint *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBI4UIVPROC)(GLuint index, const GLuint *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBI4BVPROC)(GLuint index, const GLbyte *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBI4SVPROC)(GLuint index, const GLshort *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBI4UBVPROC)(GLuint index, const GLubyte *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBI4USVPROC)(GLuint index, const GLushort *v);
typedef void (__stdcall * PFNGLGETUNIFORMUIVPROC)(GLuint program, GLint location, GLuint *params);
typedef void (__stdcall * PFNGLBINDFRAGDATALOCATIONPROC)(GLuint program, GLuint color, const GLchar *name);
typedef GLint (__stdcall * PFNGLGETFRAGDATALOCATIONPROC)(GLuint program, const GLchar *name);
typedef void (__stdcall * PFNGLUNIFORM1UIPROC)(GLint location, GLuint v0);
typedef void (__stdcall * PFNGLUNIFORM2UIPROC)(GLint location, GLuint v0, GLuint v1);
typedef void (__stdcall * PFNGLUNIFORM3UIPROC)(GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (__stdcall * PFNGLUNIFORM4UIPROC)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (__stdcall * PFNGLUNIFORM1UIVPROC)(GLint location, GLsizei count, const GLuint *value);
typedef void (__stdcall * PFNGLUNIFORM2UIVPROC)(GLint location, GLsizei count, const GLuint *value);
typedef void (__stdcall * PFNGLUNIFORM3UIVPROC)(GLint location, GLsizei count, const GLuint *value);
typedef void (__stdcall * PFNGLUNIFORM4UIVPROC)(GLint location, GLsizei count, const GLuint *value);
typedef void (__stdcall * PFNGLTEXPARAMETERIIVPROC)(GLenum target, GLenum pname, const GLint *params);
typedef void (__stdcall * PFNGLTEXPARAMETERIUIVPROC)(GLenum target, GLenum pname, const GLuint *params);
typedef void (__stdcall * PFNGLGETTEXPARAMETERIIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETTEXPARAMETERIUIVPROC)(GLenum target, GLenum pname, GLuint *params);
typedef void (__stdcall * PFNGLCLEARBUFFERIVPROC)(GLenum buffer, GLint drawbuffer, const GLint *value);
typedef void (__stdcall * PFNGLCLEARBUFFERUIVPROC)(GLenum buffer, GLint drawbuffer, const GLuint *value);
typedef void (__stdcall * PFNGLCLEARBUFFERFVPROC)(GLenum buffer, GLint drawbuffer, const GLfloat *value);
typedef void (__stdcall * PFNGLCLEARBUFFERFIPROC)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef const GLubyte * (__stdcall * PFNGLGETSTRINGIPROC)(GLenum name, GLuint index);
typedef GLboolean (__stdcall * PFNGLISRENDERBUFFERPROC)(GLuint renderbuffer);
typedef void (__stdcall * PFNGLBINDRENDERBUFFERPROC)(GLenum target, GLuint renderbuffer);
typedef void (__stdcall * PFNGLDELETERENDERBUFFERSPROC)(GLsizei n, const GLuint *renderbuffers);
typedef void (__stdcall * PFNGLGENRENDERBUFFERSPROC)(GLsizei n, GLuint *renderbuffers);
typedef void (__stdcall * PFNGLRENDERBUFFERSTORAGEPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLGETRENDERBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef GLboolean (__stdcall * PFNGLISFRAMEBUFFERPROC)(GLuint framebuffer);
typedef void (__stdcall * PFNGLBINDFRAMEBUFFERPROC)(GLenum target, GLuint framebuffer);
typedef void (__stdcall * PFNGLDELETEFRAMEBUFFERSPROC)(GLsizei n, const GLuint *framebuffers);
typedef void (__stdcall * PFNGLGENFRAMEBUFFERSPROC)(GLsizei n, GLuint *framebuffers);
typedef GLenum (__stdcall * PFNGLCHECKFRAMEBUFFERSTATUSPROC)(GLenum target);
typedef void (__stdcall * PFNGLFRAMEBUFFERTEXTURE1DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (__stdcall * PFNGLFRAMEBUFFERTEXTURE2DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (__stdcall * PFNGLFRAMEBUFFERTEXTURE3DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (__stdcall * PFNGLFRAMEBUFFERRENDERBUFFERPROC)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (__stdcall * PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)(GLenum target, GLenum attachment, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGENERATEMIPMAPPROC)(GLenum target);
typedef void (__stdcall * PFNGLBLITFRAMEBUFFERPROC)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (__stdcall * PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLFRAMEBUFFERTEXTURELAYERPROC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void * (__stdcall * PFNGLMAPBUFFERRANGEPROC)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (__stdcall * PFNGLFLUSHMAPPEDBUFFERRANGEPROC)(GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (__stdcall * PFNGLBINDVERTEXARRAYPROC)(GLuint array);
typedef void (__stdcall * PFNGLDELETEVERTEXARRAYSPROC)(GLsizei n, const GLuint *arrays);
typedef void (__stdcall * PFNGLGENVERTEXARRAYSPROC)(GLsizei n, GLuint *arrays);
typedef GLboolean (__stdcall * PFNGLISVERTEXARRAYPROC)(GLuint array);
typedef void (__stdcall * PFNGLDRAWARRAYSINSTANCEDPROC)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
typedef void (__stdcall * PFNGLDRAWELEMENTSINSTANCEDPROC)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
typedef void (__stdcall * PFNGLTEXBUFFERPROC)(GLenum target, GLenum internalformat, GLuint buffer);
typedef void (__stdcall * PFNGLPRIMITIVERESTARTINDEXPROC)(GLuint index);
typedef void (__stdcall * PFNGLCOPYBUFFERSUBDATAPROC)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (__stdcall * PFNGLGETUNIFORMINDICESPROC)(GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
typedef void (__stdcall * PFNGLGETACTIVEUNIFORMSIVPROC)(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETACTIVEUNIFORMNAMEPROC)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
typedef GLuint (__stdcall * PFNGLGETUNIFORMBLOCKINDEXPROC)(GLuint program, const GLchar *uniformBlockName);
typedef void (__stdcall * PFNGLGETACTIVEUNIFORMBLOCKIVPROC)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
typedef void (__stdcall * PFNGLUNIFORMBLOCKBINDINGPROC)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
typedef void (__stdcall * PFNGLDRAWELEMENTSBASEVERTEXPROC)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (__stdcall * PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (__stdcall * PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
typedef void (__stdcall * PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
typedef void (__stdcall * PFNGLPROVOKINGVERTEXPROC)(GLenum mode);
typedef GLsync (__stdcall * PFNGLFENCESYNCPROC)(GLenum condition, GLbitfield flags);
typedef GLboolean (__stdcall * PFNGLISSYNCPROC)(GLsync sync);
typedef void (__stdcall * PFNGLDELETESYNCPROC)(GLsync sync);
typedef GLenum (__stdcall * PFNGLCLIENTWAITSYNCPROC)(GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (__stdcall * PFNGLWAITSYNCPROC)(GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (__stdcall * PFNGLGETINTEGER64VPROC)(GLenum pname, GLint64 *data);
typedef void (__stdcall * PFNGLGETSYNCIVPROC)(GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values);
typedef void (__stdcall * PFNGLGETINTEGER64I_VPROC)(GLenum target, GLuint index, GLint64 *data);
typedef void (__stdcall * PFNGLGETBUFFERPARAMETERI64VPROC)(GLenum target, GLenum pname, GLint64 *params);
typedef void (__stdcall * PFNGLFRAMEBUFFERTEXTUREPROC)(GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (__stdcall * PFNGLTEXIMAGE2DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (__stdcall * PFNGLTEXIMAGE3DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (__stdcall * PFNGLGETMULTISAMPLEFVPROC)(GLenum pname, GLuint index, GLfloat *val);
typedef void (__stdcall * PFNGLSAMPLEMASKIPROC)(GLuint maskNumber, GLbitfield mask);
typedef void (__stdcall * PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)(GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
typedef GLint (__stdcall * PFNGLGETFRAGDATAINDEXPROC)(GLuint program, const GLchar *name);
typedef void (__stdcall * PFNGLGENSAMPLERSPROC)(GLsizei count, GLuint *samplers);
typedef void (__stdcall * PFNGLDELETESAMPLERSPROC)(GLsizei count, const GLuint *samplers);
typedef GLboolean (__stdcall * PFNGLISSAMPLERPROC)(GLuint sampler);
typedef void (__stdcall * PFNGLBINDSAMPLERPROC)(GLuint unit, GLuint sampler);
typedef void (__stdcall * PFNGLSAMPLERPARAMETERIPROC)(GLuint sampler, GLenum pname, GLint param);
typedef void (__stdcall * PFNGLSAMPLERPARAMETERIVPROC)(GLuint sampler, GLenum pname, const GLint *param);
typedef void (__stdcall * PFNGLSAMPLERPARAMETERFPROC)(GLuint sampler, GLenum pname, GLfloat param);
typedef void (__stdcall * PFNGLSAMPLERPARAMETERFVPROC)(GLuint sampler, GLenum pname, const GLfloat *param);
typedef void (__stdcall * PFNGLSAMPLERPARAMETERIIVPROC)(GLuint sampler, GLenum pname, const GLint *param);
typedef void (__stdcall * PFNGLSAMPLERPARAMETERIUIVPROC)(GLuint sampler, GLenum pname, const GLuint *param);
typedef void (__stdcall * PFNGLGETSAMPLERPARAMETERIVPROC)(GLuint sampler, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETSAMPLERPARAMETERIIVPROC)(GLuint sampler, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETSAMPLERPARAMETERFVPROC)(GLuint sampler, GLenum pname, GLfloat *params);
typedef void (__stdcall * PFNGLGETSAMPLERPARAMETERIUIVPROC)(GLuint sampler, GLenum pname, GLuint *params);
typedef void (__stdcall * PFNGLQUERYCOUNTERPROC)(GLuint id, GLenum target);
typedef void (__stdcall * PFNGLGETQUERYOBJECTI64VPROC)(GLuint id, GLenum pname, GLint64 *params);
typedef void (__stdcall * PFNGLGETQUERYOBJECTUI64VPROC)(GLuint id, GLenum pname, GLuint64 *params);
typedef void (__stdcall * PFNGLVERTEXATTRIBDIVISORPROC)(GLuint index, GLuint divisor);
typedef void (__stdcall * PFNGLVERTEXATTRIBP1UIPROC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (__stdcall * PFNGLVERTEXATTRIBP1UIVPROC)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (__stdcall * PFNGLVERTEXATTRIBP2UIPROC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (__stdcall * PFNGLVERTEXATTRIBP2UIVPROC)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (__stdcall * PFNGLVERTEXATTRIBP3UIPROC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (__stdcall * PFNGLVERTEXATTRIBP3UIVPROC)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (__stdcall * PFNGLVERTEXATTRIBP4UIPROC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (__stdcall * PFNGLVERTEXATTRIBP4UIVPROC)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (__stdcall * PFNGLVERTEXP2UIPROC)(GLenum type, GLuint value);
typedef void (__stdcall * PFNGLVERTEXP2UIVPROC)(GLenum type, const GLuint *value);
typedef void (__stdcall * PFNGLVERTEXP3UIPROC)(GLenum type, GLuint value);
typedef void (__stdcall * PFNGLVERTEXP3UIVPROC)(GLenum type, const GLuint *value);
typedef void (__stdcall * PFNGLVERTEXP4UIPROC)(GLenum type, GLuint value);
typedef void (__stdcall * PFNGLVERTEXP4UIVPROC)(GLenum type, const GLuint *value);
typedef void (__stdcall * PFNGLTEXCOORDP1UIPROC)(GLenum type, GLuint coords);
typedef void (__stdcall * PFNGLTEXCOORDP1UIVPROC)(GLenum type, const GLuint *coords);
typedef void (__stdcall * PFNGLTEXCOORDP2UIPROC)(GLenum type, GLuint coords);
typedef void (__stdcall * PFNGLTEXCOORDP2UIVPROC)(GLenum type, const GLuint *coords);
typedef void (__stdcall * PFNGLTEXCOORDP3UIPROC)(GLenum type, GLuint coords);
typedef void (__stdcall * PFNGLTEXCOORDP3UIVPROC)(GLenum type, const GLuint *coords);
typedef void (__stdcall * PFNGLTEXCOORDP4UIPROC)(GLenum type, GLuint coords);
typedef void (__stdcall * PFNGLTEXCOORDP4UIVPROC)(GLenum type, const GLuint *coords);
typedef void (__stdcall * PFNGLMULTITEXCOORDP1UIPROC)(GLenum texture, GLenum type, GLuint coords);
typedef void (__stdcall * PFNGLMULTITEXCOORDP1UIVPROC)(GLenum texture, GLenum type, const GLuint *coords);
typedef void (__stdcall * PFNGLMULTITEXCOORDP2UIPROC)(GLenum texture, GLenum type, GLuint coords);
typedef void (__stdcall * PFNGLMULTITEXCOORDP2UIVPROC)(GLenum texture, GLenum type, const GLuint *coords);
typedef void (__stdcall * PFNGLMULTITEXCOORDP3UIPROC)(GLenum texture, GLenum type, GLuint coords);
typedef void (__stdcall * PFNGLMULTITEXCOORDP3UIVPROC)(GLenum texture, GLenum type, const GLuint *coords);
typedef void (__stdcall * PFNGLMULTITEXCOORDP4UIPROC)(GLenum texture, GLenum type, GLuint coords);
typedef void (__stdcall * PFNGLMULTITEXCOORDP4UIVPROC)(GLenum texture, GLenum type, const GLuint *coords);
typedef void (__stdcall * PFNGLNORMALP3UIPROC)(GLenum type, GLuint coords);
typedef void (__stdcall * PFNGLNORMALP3UIVPROC)(GLenum type, const GLuint *coords);
typedef void (__stdcall * PFNGLCOLORP3UIPROC)(GLenum type, GLuint color);
typedef void (__stdcall * PFNGLCOLORP3UIVPROC)(GLenum type, const GLuint *color);
typedef void (__stdcall * PFNGLCOLORP4UIPROC)(GLenum type, GLuint color);
typedef void (__stdcall * PFNGLCOLORP4UIVPROC)(GLenum type, const GLuint *color);
typedef void (__stdcall * PFNGLSECONDARYCOLORP3UIPROC)(GLenum type, GLuint color);
typedef void (__stdcall * PFNGLSECONDARYCOLORP3UIVPROC)(GLenum type, const GLuint *color);
typedef void (__stdcall * PFNGLMINSAMPLESHADINGPROC)(GLfloat value);
typedef void (__stdcall * PFNGLBLENDEQUATIONIPROC)(GLuint buf, GLenum mode);
typedef void (__stdcall * PFNGLBLENDEQUATIONSEPARATEIPROC)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (__stdcall * PFNGLBLENDFUNCIPROC)(GLuint buf, GLenum src, GLenum dst);
typedef void (__stdcall * PFNGLBLENDFUNCSEPARATEIPROC)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (__stdcall * PFNGLDRAWARRAYSINDIRECTPROC)(GLenum mode, const void *indirect);
typedef void (__stdcall * PFNGLDRAWELEMENTSINDIRECTPROC)(GLenum mode, GLenum type, const void *indirect);
typedef void (__stdcall * PFNGLUNIFORM1DPROC)(GLint location, GLdouble x);
typedef void (__stdcall * PFNGLUNIFORM2DPROC)(GLint location, GLdouble x, GLdouble y);
typedef void (__stdcall * PFNGLUNIFORM3DPROC)(GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (__stdcall * PFNGLUNIFORM4DPROC)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (__stdcall * PFNGLUNIFORM1DVPROC)(GLint location, GLsizei count, const GLdouble *value);
typedef void (__stdcall * PFNGLUNIFORM2DVPROC)(GLint location, GLsizei count, const GLdouble *value);
typedef void (__stdcall * PFNGLUNIFORM3DVPROC)(GLint location, GLsizei count, const GLdouble *value);
typedef void (__stdcall * PFNGLUNIFORM4DVPROC)(GLint location, GLsizei count, const GLdouble *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX2DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX3DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX4DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX2X3DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX2X4DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX3X2DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX3X4DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX4X2DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLUNIFORMMATRIX4X3DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLGETUNIFORMDVPROC)(GLuint program, GLint location, GLdouble *params);
typedef GLint (__stdcall * PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)(GLuint program, GLenum shadertype, const GLchar *name);
typedef GLuint (__stdcall * PFNGLGETSUBROUTINEINDEXPROC)(GLuint program, GLenum shadertype, const GLchar *name);
typedef void (__stdcall * PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
typedef void (__stdcall * PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
typedef void (__stdcall * PFNGLGETACTIVESUBROUTINENAMEPROC)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
typedef void (__stdcall * PFNGLUNIFORMSUBROUTINESUIVPROC)(GLenum shadertype, GLsizei count, const GLuint *indices);
typedef void (__stdcall * PFNGLGETUNIFORMSUBROUTINEUIVPROC)(GLenum shadertype, GLint location, GLuint *params);
typedef void (__stdcall * PFNGLGETPROGRAMSTAGEIVPROC)(GLuint program, GLenum shadertype, GLenum pname, GLint *values);
typedef void (__stdcall * PFNGLPATCHPARAMETERIPROC)(GLenum pname, GLint value);
typedef void (__stdcall * PFNGLPATCHPARAMETERFVPROC)(GLenum pname, const GLfloat *values);
typedef void (__stdcall * PFNGLBINDTRANSFORMFEEDBACKPROC)(GLenum target, GLuint id);
typedef void (__stdcall * PFNGLDELETETRANSFORMFEEDBACKSPROC)(GLsizei n, const GLuint *ids);
typedef void (__stdcall * PFNGLGENTRANSFORMFEEDBACKSPROC)(GLsizei n, GLuint *ids);
typedef GLboolean (__stdcall * PFNGLISTRANSFORMFEEDBACKPROC)(GLuint id);
typedef void (__stdcall * PFNGLPAUSETRANSFORMFEEDBACKPROC)(void);
typedef void (__stdcall * PFNGLRESUMETRANSFORMFEEDBACKPROC)(void);
typedef void (__stdcall * PFNGLDRAWTRANSFORMFEEDBACKPROC)(GLenum mode, GLuint id);
typedef void (__stdcall * PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)(GLenum mode, GLuint id, GLuint stream);
typedef void (__stdcall * PFNGLBEGINQUERYINDEXEDPROC)(GLenum target, GLuint index, GLuint id);
typedef void (__stdcall * PFNGLENDQUERYINDEXEDPROC)(GLenum target, GLuint index);
typedef void (__stdcall * PFNGLGETQUERYINDEXEDIVPROC)(GLenum target, GLuint index, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLRELEASESHADERCOMPILERPROC)(void);
typedef void (__stdcall * PFNGLSHADERBINARYPROC)(GLsizei count, const GLuint *shaders, GLenum binaryFormat, const void *binary, GLsizei length);
typedef void (__stdcall * PFNGLGETSHADERPRECISIONFORMATPROC)(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
typedef void (__stdcall * PFNGLDEPTHRANGEFPROC)(GLfloat n, GLfloat f);
typedef void (__stdcall * PFNGLCLEARDEPTHFPROC)(GLfloat d);
typedef void (__stdcall * PFNGLGETPROGRAMBINARYPROC)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
typedef void (__stdcall * PFNGLPROGRAMBINARYPROC)(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
typedef void (__stdcall * PFNGLPROGRAMPARAMETERIPROC)(GLuint program, GLenum pname, GLint value);
typedef void (__stdcall * PFNGLUSEPROGRAMSTAGESPROC)(GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (__stdcall * PFNGLACTIVESHADERPROGRAMPROC)(GLuint pipeline, GLuint program);
typedef GLuint (__stdcall * PFNGLCREATESHADERPROGRAMVPROC)(GLenum type, GLsizei count, const GLchar *const*strings);
typedef void (__stdcall * PFNGLBINDPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef void (__stdcall * PFNGLDELETEPROGRAMPIPELINESPROC)(GLsizei n, const GLuint *pipelines);
typedef void (__stdcall * PFNGLGENPROGRAMPIPELINESPROC)(GLsizei n, GLuint *pipelines);
typedef GLboolean (__stdcall * PFNGLISPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef void (__stdcall * PFNGLGETPROGRAMPIPELINEIVPROC)(GLuint pipeline, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM1IPROC)(GLuint program, GLint location, GLint v0);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM1IVPROC)(GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM1FPROC)(GLuint program, GLint location, GLfloat v0);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM1FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM1DPROC)(GLuint program, GLint location, GLdouble v0);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM1DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM1UIPROC)(GLuint program, GLint location, GLuint v0);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM1UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM2IPROC)(GLuint program, GLint location, GLint v0, GLint v1);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM2IVPROC)(GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM2FPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM2FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM2DPROC)(GLuint program, GLint location, GLdouble v0, GLdouble v1);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM2DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM2UIPROC)(GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM2UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM3IPROC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM3IVPROC)(GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM3FPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM3FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM3DPROC)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM3DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM3UIPROC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM3UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM4IPROC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM4IVPROC)(GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM4FPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM4FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM4DPROC)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM4DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM4UIPROC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (__stdcall * PFNGLPROGRAMUNIFORM4UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX2DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX3DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX4DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (__stdcall * PFNGLVALIDATEPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef void (__stdcall * PFNGLGETPROGRAMPIPELINEINFOLOGPROC)(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (__stdcall * PFNGLVERTEXATTRIBL1DPROC)(GLuint index, GLdouble x);
typedef void (__stdcall * PFNGLVERTEXATTRIBL2DPROC)(GLuint index, GLdouble x, GLdouble y);
typedef void (__stdcall * PFNGLVERTEXATTRIBL3DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (__stdcall * PFNGLVERTEXATTRIBL4DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (__stdcall * PFNGLVERTEXATTRIBL1DVPROC)(GLuint index, const GLdouble *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBL2DVPROC)(GLuint index, const GLdouble *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBL3DVPROC)(GLuint index, const GLdouble *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBL4DVPROC)(GLuint index, const GLdouble *v);
typedef void (__stdcall * PFNGLVERTEXATTRIBLPOINTERPROC)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (__stdcall * PFNGLGETVERTEXATTRIBLDVPROC)(GLuint index, GLenum pname, GLdouble *params);
typedef void (__stdcall * PFNGLVIEWPORTARRAYVPROC)(GLuint first, GLsizei count, const GLfloat *v);
typedef void (__stdcall * PFNGLVIEWPORTINDEXEDFPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (__stdcall * PFNGLVIEWPORTINDEXEDFVPROC)(GLuint index, const GLfloat *v);
typedef void (__stdcall * PFNGLSCISSORARRAYVPROC)(GLuint first, GLsizei count, const GLint *v);
typedef void (__stdcall * PFNGLSCISSORINDEXEDPROC)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLSCISSORINDEXEDVPROC)(GLuint index, const GLint *v);
typedef void (__stdcall * PFNGLDEPTHRANGEARRAYVPROC)(GLuint first, GLsizei count, const GLdouble *v);
typedef void (__stdcall * PFNGLDEPTHRANGEINDEXEDPROC)(GLuint index, GLdouble n, GLdouble f);
typedef void (__stdcall * PFNGLGETFLOATI_VPROC)(GLenum target, GLuint index, GLfloat *data);
typedef void (__stdcall * PFNGLGETDOUBLEI_VPROC)(GLenum target, GLuint index, GLdouble *data);
typedef void (__stdcall * PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (__stdcall * PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
typedef void (__stdcall * PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
typedef void (__stdcall * PFNGLGETINTERNALFORMATIVPROC)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params);
typedef void (__stdcall * PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLBINDIMAGETEXTUREPROC)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef void (__stdcall * PFNGLMEMORYBARRIERPROC)(GLbitfield barriers);
typedef void (__stdcall * PFNGLTEXSTORAGE1DPROC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (__stdcall * PFNGLTEXSTORAGE2DPROC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLTEXSTORAGE3DPROC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (__stdcall * PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)(GLenum mode, GLuint id, GLsizei instancecount);
typedef void (__stdcall * PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
typedef void (__stdcall * PFNGLCLEARBUFFERDATAPROC)(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
typedef void (__stdcall * PFNGLCLEARBUFFERSUBDATAPROC)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
typedef void (__stdcall * PFNGLDISPATCHCOMPUTEPROC)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (__stdcall * PFNGLDISPATCHCOMPUTEINDIRECTPROC)(GLintptr indirect);
typedef void (__stdcall * PFNGLCOPYIMAGESUBDATAPROC)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (__stdcall * PFNGLFRAMEBUFFERPARAMETERIPROC)(GLenum target, GLenum pname, GLint param);
typedef void (__stdcall * PFNGLGETFRAMEBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETINTERNALFORMATI64VPROC)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 *params);
typedef void (__stdcall * PFNGLINVALIDATETEXSUBIMAGEPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
typedef void (__stdcall * PFNGLINVALIDATETEXIMAGEPROC)(GLuint texture, GLint level);
typedef void (__stdcall * PFNGLINVALIDATEBUFFERSUBDATAPROC)(GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (__stdcall * PFNGLINVALIDATEBUFFERDATAPROC)(GLuint buffer);
typedef void (__stdcall * PFNGLINVALIDATEFRAMEBUFFERPROC)(GLenum target, GLsizei numAttachments, const GLenum *attachments);
typedef void (__stdcall * PFNGLINVALIDATESUBFRAMEBUFFERPROC)(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLMULTIDRAWARRAYSINDIRECTPROC)(GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
typedef void (__stdcall * PFNGLMULTIDRAWELEMENTSINDIRECTPROC)(GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
typedef void (__stdcall * PFNGLGETPROGRAMINTERFACEIVPROC)(GLuint program, GLenum programInterface, GLenum pname, GLint *params);
typedef GLuint (__stdcall * PFNGLGETPROGRAMRESOURCEINDEXPROC)(GLuint program, GLenum programInterface, const GLchar *name);
typedef void (__stdcall * PFNGLGETPROGRAMRESOURCENAMEPROC)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
typedef void (__stdcall * PFNGLGETPROGRAMRESOURCEIVPROC)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei count, GLsizei *length, GLint *params);
typedef GLint (__stdcall * PFNGLGETPROGRAMRESOURCELOCATIONPROC)(GLuint program, GLenum programInterface, const GLchar *name);
typedef GLint (__stdcall * PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)(GLuint program, GLenum programInterface, const GLchar *name);
typedef void (__stdcall * PFNGLSHADERSTORAGEBLOCKBINDINGPROC)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
typedef void (__stdcall * PFNGLTEXBUFFERRANGEPROC)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (__stdcall * PFNGLTEXSTORAGE2DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (__stdcall * PFNGLTEXSTORAGE3DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (__stdcall * PFNGLTEXTUREVIEWPROC)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (__stdcall * PFNGLBINDVERTEXBUFFERPROC)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (__stdcall * PFNGLVERTEXATTRIBFORMATPROC)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (__stdcall * PFNGLVERTEXATTRIBIFORMATPROC)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (__stdcall * PFNGLVERTEXATTRIBLFORMATPROC)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (__stdcall * PFNGLVERTEXATTRIBBINDINGPROC)(GLuint attribindex, GLuint bindingindex);
typedef void (__stdcall * PFNGLVERTEXBINDINGDIVISORPROC)(GLuint bindingindex, GLuint divisor);
typedef void (__stdcall * PFNGLDEBUGMESSAGECONTROLPROC)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
typedef void (__stdcall * PFNGLDEBUGMESSAGEINSERTPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
typedef void (__stdcall * PFNGLDEBUGMESSAGECALLBACKPROC)(GLDEBUGPROC callback, const void *userParam);
typedef GLuint (__stdcall * PFNGLGETDEBUGMESSAGELOGPROC)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
typedef void (__stdcall * PFNGLPUSHDEBUGGROUPPROC)(GLenum source, GLuint id, GLsizei length, const GLchar *message);
typedef void (__stdcall * PFNGLPOPDEBUGGROUPPROC)(void);
typedef void (__stdcall * PFNGLOBJECTLABELPROC)(GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
typedef void (__stdcall * PFNGLGETOBJECTLABELPROC)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (__stdcall * PFNGLOBJECTPTRLABELPROC)(const void *ptr, GLsizei length, const GLchar *label);
typedef void (__stdcall * PFNGLGETOBJECTPTRLABELPROC)(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (__stdcall * PFNGLGETPOINTERVPROC)(GLenum pname, void **params);
typedef void (__stdcall * PFNGLBUFFERSTORAGEPROC)(GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
typedef void (__stdcall * PFNGLCLEARTEXIMAGEPROC)(GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
typedef void (__stdcall * PFNGLCLEARTEXSUBIMAGEPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
typedef void (__stdcall * PFNGLBINDBUFFERSBASEPROC)(GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
typedef void (__stdcall * PFNGLBINDBUFFERSRANGEPROC)(GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
typedef void (__stdcall * PFNGLBINDTEXTURESPROC)(GLuint first, GLsizei count, const GLuint *textures);
typedef void (__stdcall * PFNGLBINDSAMPLERSPROC)(GLuint first, GLsizei count, const GLuint *samplers);
typedef void (__stdcall * PFNGLBINDIMAGETEXTURESPROC)(GLuint first, GLsizei count, const GLuint *textures);
typedef void (__stdcall * PFNGLBINDVERTEXBUFFERSPROC)(GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
typedef void (__stdcall * PFNGLCLIPCONTROLPROC)(GLenum origin, GLenum depth);
typedef void (__stdcall * PFNGLCREATETRANSFORMFEEDBACKSPROC)(GLsizei n, GLuint *ids);
typedef void (__stdcall * PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC)(GLuint xfb, GLuint index, GLuint buffer);
typedef void (__stdcall * PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC)(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (__stdcall * PFNGLGETTRANSFORMFEEDBACKIVPROC)(GLuint xfb, GLenum pname, GLint *param);
typedef void (__stdcall * PFNGLGETTRANSFORMFEEDBACKI_VPROC)(GLuint xfb, GLenum pname, GLuint index, GLint *param);
typedef void (__stdcall * PFNGLGETTRANSFORMFEEDBACKI64_VPROC)(GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
typedef void (__stdcall * PFNGLCREATEBUFFERSPROC)(GLsizei n, GLuint *buffers);
typedef void (__stdcall * PFNGLNAMEDBUFFERSTORAGEPROC)(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
typedef void (__stdcall * PFNGLNAMEDBUFFERDATAPROC)(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
typedef void (__stdcall * PFNGLNAMEDBUFFERSUBDATAPROC)(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
typedef void (__stdcall * PFNGLCOPYNAMEDBUFFERSUBDATAPROC)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (__stdcall * PFNGLCLEARNAMEDBUFFERDATAPROC)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
typedef void (__stdcall * PFNGLCLEARNAMEDBUFFERSUBDATAPROC)(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
typedef void * (__stdcall * PFNGLMAPNAMEDBUFFERPROC)(GLuint buffer, GLenum access);
typedef void * (__stdcall * PFNGLMAPNAMEDBUFFERRANGEPROC)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef GLboolean (__stdcall * PFNGLUNMAPNAMEDBUFFERPROC)(GLuint buffer);
typedef void (__stdcall * PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC)(GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (__stdcall * PFNGLGETNAMEDBUFFERPARAMETERIVPROC)(GLuint buffer, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETNAMEDBUFFERPARAMETERI64VPROC)(GLuint buffer, GLenum pname, GLint64 *params);
typedef void (__stdcall * PFNGLGETNAMEDBUFFERPOINTERVPROC)(GLuint buffer, GLenum pname, void **params);
typedef void (__stdcall * PFNGLGETNAMEDBUFFERSUBDATAPROC)(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
typedef void (__stdcall * PFNGLCREATEFRAMEBUFFERSPROC)(GLsizei n, GLuint *framebuffers);
typedef void (__stdcall * PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (__stdcall * PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC)(GLuint framebuffer, GLenum pname, GLint param);
typedef void (__stdcall * PFNGLNAMEDFRAMEBUFFERTEXTUREPROC)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
typedef void (__stdcall * PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (__stdcall * PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC)(GLuint framebuffer, GLenum buf);
typedef void (__stdcall * PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC)(GLuint framebuffer, GLsizei n, const GLenum *bufs);
typedef void (__stdcall * PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC)(GLuint framebuffer, GLenum src);
typedef void (__stdcall * PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC)(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
typedef void (__stdcall * PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC)(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLCLEARNAMEDFRAMEBUFFERIVPROC)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
typedef void (__stdcall * PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
typedef void (__stdcall * PFNGLCLEARNAMEDFRAMEBUFFERFVPROC)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
typedef void (__stdcall * PFNGLCLEARNAMEDFRAMEBUFFERFIPROC)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef void (__stdcall * PFNGLBLITNAMEDFRAMEBUFFERPROC)(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef GLenum (__stdcall * PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC)(GLuint framebuffer, GLenum target);
typedef void (__stdcall * PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC)(GLuint framebuffer, GLenum pname, GLint *param);
typedef void (__stdcall * PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLCREATERENDERBUFFERSPROC)(GLsizei n, GLuint *renderbuffers);
typedef void (__stdcall * PFNGLNAMEDRENDERBUFFERSTORAGEPROC)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC)(GLuint renderbuffer, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLCREATETEXTURESPROC)(GLenum target, GLsizei n, GLuint *textures);
typedef void (__stdcall * PFNGLTEXTUREBUFFERPROC)(GLuint texture, GLenum internalformat, GLuint buffer);
typedef void (__stdcall * PFNGLTEXTUREBUFFERRANGEPROC)(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (__stdcall * PFNGLTEXTURESTORAGE1DPROC)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (__stdcall * PFNGLTEXTURESTORAGE2DPROC)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLTEXTURESTORAGE3DPROC)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (__stdcall * PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (__stdcall * PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (__stdcall * PFNGLTEXTURESUBIMAGE1DPROC)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
typedef void (__stdcall * PFNGLTEXTURESUBIMAGE2DPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (__stdcall * PFNGLTEXTURESUBIMAGE3DPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (__stdcall * PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
typedef void (__stdcall * PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (__stdcall * PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (__stdcall * PFNGLCOPYTEXTURESUBIMAGE1DPROC)(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (__stdcall * PFNGLCOPYTEXTURESUBIMAGE2DPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLCOPYTEXTURESUBIMAGE3DPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (__stdcall * PFNGLTEXTUREPARAMETERFPROC)(GLuint texture, GLenum pname, GLfloat param);
typedef void (__stdcall * PFNGLTEXTUREPARAMETERFVPROC)(GLuint texture, GLenum pname, const GLfloat *param);
typedef void (__stdcall * PFNGLTEXTUREPARAMETERIPROC)(GLuint texture, GLenum pname, GLint param);
typedef void (__stdcall * PFNGLTEXTUREPARAMETERIIVPROC)(GLuint texture, GLenum pname, const GLint *params);
typedef void (__stdcall * PFNGLTEXTUREPARAMETERIUIVPROC)(GLuint texture, GLenum pname, const GLuint *params);
typedef void (__stdcall * PFNGLTEXTUREPARAMETERIVPROC)(GLuint texture, GLenum pname, const GLint *param);
typedef void (__stdcall * PFNGLGENERATETEXTUREMIPMAPPROC)(GLuint texture);
typedef void (__stdcall * PFNGLBINDTEXTUREUNITPROC)(GLuint unit, GLuint texture);
typedef void (__stdcall * PFNGLGETTEXTUREIMAGEPROC)(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
typedef void (__stdcall * PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC)(GLuint texture, GLint level, GLsizei bufSize, void *pixels);
typedef void (__stdcall * PFNGLGETTEXTURELEVELPARAMETERFVPROC)(GLuint texture, GLint level, GLenum pname, GLfloat *params);
typedef void (__stdcall * PFNGLGETTEXTURELEVELPARAMETERIVPROC)(GLuint texture, GLint level, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETTEXTUREPARAMETERFVPROC)(GLuint texture, GLenum pname, GLfloat *params);
typedef void (__stdcall * PFNGLGETTEXTUREPARAMETERIIVPROC)(GLuint texture, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLGETTEXTUREPARAMETERIUIVPROC)(GLuint texture, GLenum pname, GLuint *params);
typedef void (__stdcall * PFNGLGETTEXTUREPARAMETERIVPROC)(GLuint texture, GLenum pname, GLint *params);
typedef void (__stdcall * PFNGLCREATEVERTEXARRAYSPROC)(GLsizei n, GLuint *arrays);
typedef void (__stdcall * PFNGLDISABLEVERTEXARRAYATTRIBPROC)(GLuint vaobj, GLuint index);
typedef void (__stdcall * PFNGLENABLEVERTEXARRAYATTRIBPROC)(GLuint vaobj, GLuint index);
typedef void (__stdcall * PFNGLVERTEXARRAYELEMENTBUFFERPROC)(GLuint vaobj, GLuint buffer);
typedef void (__stdcall * PFNGLVERTEXARRAYVERTEXBUFFERPROC)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (__stdcall * PFNGLVERTEXARRAYVERTEXBUFFERSPROC)(GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
typedef void (__stdcall * PFNGLVERTEXARRAYATTRIBBINDINGPROC)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
typedef void (__stdcall * PFNGLVERTEXARRAYATTRIBFORMATPROC)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (__stdcall * PFNGLVERTEXARRAYATTRIBIFORMATPROC)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (__stdcall * PFNGLVERTEXARRAYATTRIBLFORMATPROC)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (__stdcall * PFNGLVERTEXARRAYBINDINGDIVISORPROC)(GLuint vaobj, GLuint bindingindex, GLuint divisor);
typedef void (__stdcall * PFNGLGETVERTEXARRAYIVPROC)(GLuint vaobj, GLenum pname, GLint *param);
typedef void (__stdcall * PFNGLGETVERTEXARRAYINDEXEDIVPROC)(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
typedef void (__stdcall * PFNGLGETVERTEXARRAYINDEXED64IVPROC)(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
typedef void (__stdcall * PFNGLCREATESAMPLERSPROC)(GLsizei n, GLuint *samplers);
typedef void (__stdcall * PFNGLCREATEPROGRAMPIPELINESPROC)(GLsizei n, GLuint *pipelines);
typedef void (__stdcall * PFNGLCREATEQUERIESPROC)(GLenum target, GLsizei n, GLuint *ids);
typedef void (__stdcall * PFNGLGETQUERYBUFFEROBJECTI64VPROC)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (__stdcall * PFNGLGETQUERYBUFFEROBJECTIVPROC)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (__stdcall * PFNGLGETQUERYBUFFEROBJECTUI64VPROC)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (__stdcall * PFNGLGETQUERYBUFFEROBJECTUIVPROC)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (__stdcall * PFNGLMEMORYBARRIERBYREGIONPROC)(GLbitfield barriers);
typedef void (__stdcall * PFNGLGETTEXTURESUBIMAGEPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
typedef void (__stdcall * PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
typedef GLenum (__stdcall * PFNGLGETGRAPHICSRESETSTATUSPROC)(void);
typedef void (__stdcall * PFNGLGETNCOMPRESSEDTEXIMAGEPROC)(GLenum target, GLint lod, GLsizei bufSize, void *pixels);
typedef void (__stdcall * PFNGLGETNTEXIMAGEPROC)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
typedef void (__stdcall * PFNGLGETNUNIFORMDVPROC)(GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
typedef void (__stdcall * PFNGLGETNUNIFORMFVPROC)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
typedef void (__stdcall * PFNGLGETNUNIFORMIVPROC)(GLuint program, GLint location, GLsizei bufSize, GLint *params);
typedef void (__stdcall * PFNGLGETNUNIFORMUIVPROC)(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
typedef void (__stdcall * PFNGLREADNPIXELSPROC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
typedef void (__stdcall * PFNGLGETNMAPDVPROC)(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v);
typedef void (__stdcall * PFNGLGETNMAPFVPROC)(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v);
typedef void (__stdcall * PFNGLGETNMAPIVPROC)(GLenum target, GLenum query, GLsizei bufSize, GLint *v);
typedef void (__stdcall * PFNGLGETNPIXELMAPFVPROC)(GLenum map, GLsizei bufSize, GLfloat *values);
typedef void (__stdcall * PFNGLGETNPIXELMAPUIVPROC)(GLenum map, GLsizei bufSize, GLuint *values);
typedef void (__stdcall * PFNGLGETNPIXELMAPUSVPROC)(GLenum map, GLsizei bufSize, GLushort *values);
typedef void (__stdcall * PFNGLGETNPOLYGONSTIPPLEPROC)(GLsizei bufSize, GLubyte *pattern);
typedef void (__stdcall * PFNGLGETNCOLORTABLEPROC)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table);
typedef void (__stdcall * PFNGLGETNCONVOLUTIONFILTERPROC)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image);
typedef void (__stdcall * PFNGLGETNSEPARABLEFILTERPROC)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span);
typedef void (__stdcall * PFNGLGETNHISTOGRAMPROC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
typedef void (__stdcall * PFNGLGETNMINMAXPROC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
typedef void (__stdcall * PFNGLTEXTUREBARRIERPROC)(void);
typedef void (__stdcall * PFNGLSPECIALIZESHADERPROC)(GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
typedef void (__stdcall * PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC)(GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (__stdcall * PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC)(GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (__stdcall * PFNGLPOLYGONOFFSETCLAMPPROC)(GLfloat factor, GLfloat units, GLfloat clamp);
typedef void*(__stdcall* PFNWGLGETPROCADDRESSPROC_PRIVATE)(const char*);

bool GL_VERSION_1_0 = false;
bool GL_VERSION_1_1 = false;
bool GL_VERSION_1_2 = false;
bool GL_VERSION_1_3 = false;
bool GL_VERSION_1_4 = false;
bool GL_VERSION_1_5 = false;
bool GL_VERSION_2_0 = false;
bool GL_VERSION_2_1 = false;
bool GL_VERSION_3_0 = false;
bool GL_VERSION_3_1 = false;
bool GL_VERSION_3_2 = false;
bool GL_VERSION_3_3 = false;
bool GL_VERSION_4_0 = false;
bool GL_VERSION_4_1 = false;
bool GL_VERSION_4_2 = false;
bool GL_VERSION_4_3 = false;
bool GL_VERSION_4_4 = false;
bool GL_VERSION_4_5 = false;
bool GL_VERSION_4_6 = false;

export PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram = nullptr;
export PFNGLACTIVETEXTUREPROC glActiveTexture = nullptr;
export PFNGLATTACHSHADERPROC glAttachShader = nullptr;
export PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender = nullptr;
export PFNGLBEGINQUERYPROC glBeginQuery = nullptr;
export PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed = nullptr;
export PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback = nullptr;
export PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation = nullptr;
export PFNGLBINDBUFFERPROC glBindBuffer = nullptr;
export PFNGLBINDBUFFERBASEPROC glBindBufferBase = nullptr;
export PFNGLBINDBUFFERRANGEPROC glBindBufferRange = nullptr;
export PFNGLBINDBUFFERSBASEPROC glBindBuffersBase = nullptr;
export PFNGLBINDBUFFERSRANGEPROC glBindBuffersRange = nullptr;
export PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation = nullptr;
export PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed = nullptr;
export PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer = nullptr;
export PFNGLBINDIMAGETEXTUREPROC glBindImageTexture = nullptr;
export PFNGLBINDIMAGETEXTURESPROC glBindImageTextures = nullptr;
export PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline = nullptr;
export PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer = nullptr;
export PFNGLBINDSAMPLERPROC glBindSampler = nullptr;
export PFNGLBINDSAMPLERSPROC glBindSamplers = nullptr;
export PFNGLBINDTEXTUREPROC glBindTexture = nullptr;
export PFNGLBINDTEXTUREUNITPROC glBindTextureUnit = nullptr;
export PFNGLBINDTEXTURESPROC glBindTextures = nullptr;
export PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback = nullptr;
export PFNGLBINDVERTEXARRAYPROC glBindVertexArray = nullptr;
export PFNGLBINDVERTEXBUFFERPROC glBindVertexBuffer = nullptr;
export PFNGLBINDVERTEXBUFFERSPROC glBindVertexBuffers = nullptr;
export PFNGLBLENDCOLORPROC glBlendColor = nullptr;
export PFNGLBLENDEQUATIONPROC glBlendEquation = nullptr;
export PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate = nullptr;
export PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei = nullptr;
export PFNGLBLENDEQUATIONIPROC glBlendEquationi = nullptr;
export PFNGLBLENDFUNCPROC glBlendFunc = nullptr;
export PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate = nullptr;
export PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei = nullptr;
export PFNGLBLENDFUNCIPROC glBlendFunci = nullptr;
export PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer = nullptr;
export PFNGLBLITNAMEDFRAMEBUFFERPROC glBlitNamedFramebuffer = nullptr;
export PFNGLBUFFERDATAPROC glBufferData = nullptr;
export PFNGLBUFFERSTORAGEPROC glBufferStorage = nullptr;
export PFNGLBUFFERSUBDATAPROC glBufferSubData = nullptr;
export PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus = nullptr;
export PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC glCheckNamedFramebufferStatus = nullptr;
export PFNGLCLAMPCOLORPROC glClampColor = nullptr;
export PFNGLCLEARPROC glClear = nullptr;
export PFNGLCLEARBUFFERDATAPROC glClearBufferData = nullptr;
export PFNGLCLEARBUFFERSUBDATAPROC glClearBufferSubData = nullptr;
export PFNGLCLEARBUFFERFIPROC glClearBufferfi = nullptr;
export PFNGLCLEARBUFFERFVPROC glClearBufferfv = nullptr;
export PFNGLCLEARBUFFERIVPROC glClearBufferiv = nullptr;
export PFNGLCLEARBUFFERUIVPROC glClearBufferuiv = nullptr;
export PFNGLCLEARCOLORPROC glClearColor = nullptr;
export PFNGLCLEARDEPTHPROC glClearDepth = nullptr;
export PFNGLCLEARDEPTHFPROC glClearDepthf = nullptr;
export PFNGLCLEARNAMEDBUFFERDATAPROC glClearNamedBufferData = nullptr;
export PFNGLCLEARNAMEDBUFFERSUBDATAPROC glClearNamedBufferSubData = nullptr;
export PFNGLCLEARNAMEDFRAMEBUFFERFIPROC glClearNamedFramebufferfi = nullptr;
export PFNGLCLEARNAMEDFRAMEBUFFERFVPROC glClearNamedFramebufferfv = nullptr;
export PFNGLCLEARNAMEDFRAMEBUFFERIVPROC glClearNamedFramebufferiv = nullptr;
export PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC glClearNamedFramebufferuiv = nullptr;
export PFNGLCLEARSTENCILPROC glClearStencil = nullptr;
export PFNGLCLEARTEXIMAGEPROC glClearTexImage = nullptr;
export PFNGLCLEARTEXSUBIMAGEPROC glClearTexSubImage = nullptr;
export PFNGLCLIENTWAITSYNCPROC glClientWaitSync = nullptr;
export PFNGLCLIPCONTROLPROC glClipControl = nullptr;
export PFNGLCOLORMASKPROC glColorMask = nullptr;
export PFNGLCOLORMASKIPROC glColorMaski = nullptr;
export PFNGLCOLORP3UIPROC glColorP3ui = nullptr;
export PFNGLCOLORP3UIVPROC glColorP3uiv = nullptr;
export PFNGLCOLORP4UIPROC glColorP4ui = nullptr;
export PFNGLCOLORP4UIVPROC glColorP4uiv = nullptr;
export PFNGLCOMPILESHADERPROC glCompileShader = nullptr;
export PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D = nullptr;
export PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D = nullptr;
export PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D = nullptr;
export PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D = nullptr;
export PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D = nullptr;
export PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D = nullptr;
export PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC glCompressedTextureSubImage1D = nullptr;
export PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC glCompressedTextureSubImage2D = nullptr;
export PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC glCompressedTextureSubImage3D = nullptr;
export PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData = nullptr;
export PFNGLCOPYIMAGESUBDATAPROC glCopyImageSubData = nullptr;
export PFNGLCOPYNAMEDBUFFERSUBDATAPROC glCopyNamedBufferSubData = nullptr;
export PFNGLCOPYTEXIMAGE1DPROC glCopyTexImage1D = nullptr;
export PFNGLCOPYTEXIMAGE2DPROC glCopyTexImage2D = nullptr;
export PFNGLCOPYTEXSUBIMAGE1DPROC glCopyTexSubImage1D = nullptr;
export PFNGLCOPYTEXSUBIMAGE2DPROC glCopyTexSubImage2D = nullptr;
export PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D = nullptr;
export PFNGLCOPYTEXTURESUBIMAGE1DPROC glCopyTextureSubImage1D = nullptr;
export PFNGLCOPYTEXTURESUBIMAGE2DPROC glCopyTextureSubImage2D = nullptr;
export PFNGLCOPYTEXTURESUBIMAGE3DPROC glCopyTextureSubImage3D = nullptr;
export PFNGLCREATEBUFFERSPROC glCreateBuffers = nullptr;
export PFNGLCREATEFRAMEBUFFERSPROC glCreateFramebuffers = nullptr;
export PFNGLCREATEPROGRAMPROC glCreateProgram = nullptr;
export PFNGLCREATEPROGRAMPIPELINESPROC glCreateProgramPipelines = nullptr;
export PFNGLCREATEQUERIESPROC glCreateQueries = nullptr;
export PFNGLCREATERENDERBUFFERSPROC glCreateRenderbuffers = nullptr;
export PFNGLCREATESAMPLERSPROC glCreateSamplers = nullptr;
export PFNGLCREATESHADERPROC glCreateShader = nullptr;
export PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv = nullptr;
export PFNGLCREATETEXTURESPROC glCreateTextures = nullptr;
export PFNGLCREATETRANSFORMFEEDBACKSPROC glCreateTransformFeedbacks = nullptr;
export PFNGLCREATEVERTEXARRAYSPROC glCreateVertexArrays = nullptr;
export PFNGLCULLFACEPROC glCullFace = nullptr;
export PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback = nullptr;
export PFNGLDEBUGMESSAGECONTROLPROC glDebugMessageControl = nullptr;
export PFNGLDEBUGMESSAGEINSERTPROC glDebugMessageInsert = nullptr;
export PFNGLDELETEBUFFERSPROC glDeleteBuffers = nullptr;
export PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers = nullptr;
export PFNGLDELETEPROGRAMPROC glDeleteProgram = nullptr;
export PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines = nullptr;
export PFNGLDELETEQUERIESPROC glDeleteQueries = nullptr;
export PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers = nullptr;
export PFNGLDELETESAMPLERSPROC glDeleteSamplers = nullptr;
export PFNGLDELETESHADERPROC glDeleteShader = nullptr;
export PFNGLDELETESYNCPROC glDeleteSync = nullptr;
export PFNGLDELETETEXTURESPROC glDeleteTextures = nullptr;
export PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks = nullptr;
export PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays = nullptr;
export PFNGLDEPTHFUNCPROC glDepthFunc = nullptr;
export PFNGLDEPTHMASKPROC glDepthMask = nullptr;
export PFNGLDEPTHRANGEPROC glDepthRange = nullptr;
export PFNGLDEPTHRANGEARRAYVPROC glDepthRangeArrayv = nullptr;
export PFNGLDEPTHRANGEINDEXEDPROC glDepthRangeIndexed = nullptr;
export PFNGLDEPTHRANGEFPROC glDepthRangef = nullptr;
export PFNGLDETACHSHADERPROC glDetachShader = nullptr;
export PFNGLDISABLEPROC glDisable = nullptr;
export PFNGLDISABLEVERTEXARRAYATTRIBPROC glDisableVertexArrayAttrib = nullptr;
export PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray = nullptr;
export PFNGLDISABLEIPROC glDisablei = nullptr;
export PFNGLDISPATCHCOMPUTEPROC glDispatchCompute = nullptr;
export PFNGLDISPATCHCOMPUTEINDIRECTPROC glDispatchComputeIndirect = nullptr;
export PFNGLDRAWARRAYSPROC glDrawArrays = nullptr;
export PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect = nullptr;
export PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced = nullptr;
export PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glDrawArraysInstancedBaseInstance = nullptr;
export PFNGLDRAWBUFFERPROC glDrawBuffer = nullptr;
export PFNGLDRAWBUFFERSPROC glDrawBuffers = nullptr;
export PFNGLDRAWELEMENTSPROC glDrawElements = nullptr;
export PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex = nullptr;
export PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect = nullptr;
export PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced = nullptr;
export PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glDrawElementsInstancedBaseInstance = nullptr;
export PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex = nullptr;
export PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glDrawElementsInstancedBaseVertexBaseInstance = nullptr;
export PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements = nullptr;
export PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex = nullptr;
export PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback = nullptr;
export PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glDrawTransformFeedbackInstanced = nullptr;
export PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream = nullptr;
export PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC glDrawTransformFeedbackStreamInstanced = nullptr;
export PFNGLENABLEPROC glEnable = nullptr;
export PFNGLENABLEVERTEXARRAYATTRIBPROC glEnableVertexArrayAttrib = nullptr;
export PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray = nullptr;
export PFNGLENABLEIPROC glEnablei = nullptr;
export PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender = nullptr;
export PFNGLENDQUERYPROC glEndQuery = nullptr;
export PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed = nullptr;
export PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback = nullptr;
export PFNGLFENCESYNCPROC glFenceSync = nullptr;
export PFNGLFINISHPROC glFinish = nullptr;
export PFNGLFLUSHPROC glFlush = nullptr;
export PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange = nullptr;
export PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC glFlushMappedNamedBufferRange = nullptr;
export PFNGLFRAMEBUFFERPARAMETERIPROC glFramebufferParameteri = nullptr;
export PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer = nullptr;
export PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture = nullptr;
export PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D = nullptr;
export PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D = nullptr;
export PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D = nullptr;
export PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer = nullptr;
export PFNGLFRONTFACEPROC glFrontFace = nullptr;
export PFNGLGENBUFFERSPROC glGenBuffers = nullptr;
export PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers = nullptr;
export PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines = nullptr;
export PFNGLGENQUERIESPROC glGenQueries = nullptr;
export PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers = nullptr;
export PFNGLGENSAMPLERSPROC glGenSamplers = nullptr;
export PFNGLGENTEXTURESPROC glGenTextures = nullptr;
export PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks = nullptr;
export PFNGLGENVERTEXARRAYSPROC glGenVertexArrays = nullptr;
export PFNGLGENERATEMIPMAPPROC glGenerateMipmap = nullptr;
export PFNGLGENERATETEXTUREMIPMAPPROC glGenerateTextureMipmap = nullptr;
export PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glGetActiveAtomicCounterBufferiv = nullptr;
export PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib = nullptr;
export PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName = nullptr;
export PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName = nullptr;
export PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv = nullptr;
export PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform = nullptr;
export PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName = nullptr;
export PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv = nullptr;
export PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName = nullptr;
export PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv = nullptr;
export PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders = nullptr;
export PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation = nullptr;
export PFNGLGETBOOLEANI_VPROC glGetBooleani_v = nullptr;
export PFNGLGETBOOLEANVPROC glGetBooleanv = nullptr;
export PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v = nullptr;
export PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv = nullptr;
export PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv = nullptr;
export PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData = nullptr;
export PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage = nullptr;
export PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC glGetCompressedTextureImage = nullptr;
export PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC glGetCompressedTextureSubImage = nullptr;
export PFNGLGETDEBUGMESSAGELOGPROC glGetDebugMessageLog = nullptr;
export PFNGLGETDOUBLEI_VPROC glGetDoublei_v = nullptr;
export PFNGLGETDOUBLEVPROC glGetDoublev = nullptr;
export PFNGLGETERRORPROC glGetError = nullptr;
export PFNGLGETFLOATI_VPROC glGetFloati_v = nullptr;
export PFNGLGETFLOATVPROC glGetFloatv = nullptr;
export PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex = nullptr;
export PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation = nullptr;
export PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv = nullptr;
export PFNGLGETFRAMEBUFFERPARAMETERIVPROC glGetFramebufferParameteriv = nullptr;
export PFNGLGETGRAPHICSRESETSTATUSPROC glGetGraphicsResetStatus = nullptr;
export PFNGLGETINTEGER64I_VPROC glGetInteger64i_v = nullptr;
export PFNGLGETINTEGER64VPROC glGetInteger64v = nullptr;
export PFNGLGETINTEGERI_VPROC glGetIntegeri_v = nullptr;
export PFNGLGETINTEGERVPROC glGetIntegerv = nullptr;
export PFNGLGETINTERNALFORMATI64VPROC glGetInternalformati64v = nullptr;
export PFNGLGETINTERNALFORMATIVPROC glGetInternalformativ = nullptr;
export PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv = nullptr;
export PFNGLGETNAMEDBUFFERPARAMETERI64VPROC glGetNamedBufferParameteri64v = nullptr;
export PFNGLGETNAMEDBUFFERPARAMETERIVPROC glGetNamedBufferParameteriv = nullptr;
export PFNGLGETNAMEDBUFFERPOINTERVPROC glGetNamedBufferPointerv = nullptr;
export PFNGLGETNAMEDBUFFERSUBDATAPROC glGetNamedBufferSubData = nullptr;
export PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetNamedFramebufferAttachmentParameteriv = nullptr;
export PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC glGetNamedFramebufferParameteriv = nullptr;
export PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC glGetNamedRenderbufferParameteriv = nullptr;
export PFNGLGETOBJECTLABELPROC glGetObjectLabel = nullptr;
export PFNGLGETOBJECTPTRLABELPROC glGetObjectPtrLabel = nullptr;
export PFNGLGETPOINTERVPROC glGetPointerv = nullptr;
export PFNGLGETPROGRAMBINARYPROC glGetProgramBinary = nullptr;
export PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog = nullptr;
export PFNGLGETPROGRAMINTERFACEIVPROC glGetProgramInterfaceiv = nullptr;
export PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog = nullptr;
export PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv = nullptr;
export PFNGLGETPROGRAMRESOURCEINDEXPROC glGetProgramResourceIndex = nullptr;
export PFNGLGETPROGRAMRESOURCELOCATIONPROC glGetProgramResourceLocation = nullptr;
export PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC glGetProgramResourceLocationIndex = nullptr;
export PFNGLGETPROGRAMRESOURCENAMEPROC glGetProgramResourceName = nullptr;
export PFNGLGETPROGRAMRESOURCEIVPROC glGetProgramResourceiv = nullptr;
export PFNGLGETPROGRAMSTAGEIVPROC glGetProgramStageiv = nullptr;
export PFNGLGETPROGRAMIVPROC glGetProgramiv = nullptr;
export PFNGLGETQUERYBUFFEROBJECTI64VPROC glGetQueryBufferObjecti64v = nullptr;
export PFNGLGETQUERYBUFFEROBJECTIVPROC glGetQueryBufferObjectiv = nullptr;
export PFNGLGETQUERYBUFFEROBJECTUI64VPROC glGetQueryBufferObjectui64v = nullptr;
export PFNGLGETQUERYBUFFEROBJECTUIVPROC glGetQueryBufferObjectuiv = nullptr;
export PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv = nullptr;
export PFNGLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v = nullptr;
export PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv = nullptr;
export PFNGLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v = nullptr;
export PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv = nullptr;
export PFNGLGETQUERYIVPROC glGetQueryiv = nullptr;
export PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv = nullptr;
export PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv = nullptr;
export PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv = nullptr;
export PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv = nullptr;
export PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv = nullptr;
export PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog = nullptr;
export PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat = nullptr;
export PFNGLGETSHADERSOURCEPROC glGetShaderSource = nullptr;
export PFNGLGETSHADERIVPROC glGetShaderiv = nullptr;
export PFNGLGETSTRINGPROC glGetString = nullptr;
export PFNGLGETSTRINGIPROC glGetStringi = nullptr;
export PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex = nullptr;
export PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation = nullptr;
export PFNGLGETSYNCIVPROC glGetSynciv = nullptr;
export PFNGLGETTEXIMAGEPROC glGetTexImage = nullptr;
export PFNGLGETTEXLEVELPARAMETERFVPROC glGetTexLevelParameterfv = nullptr;
export PFNGLGETTEXLEVELPARAMETERIVPROC glGetTexLevelParameteriv = nullptr;
export PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv = nullptr;
export PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv = nullptr;
export PFNGLGETTEXPARAMETERFVPROC glGetTexParameterfv = nullptr;
export PFNGLGETTEXPARAMETERIVPROC glGetTexParameteriv = nullptr;
export PFNGLGETTEXTUREIMAGEPROC glGetTextureImage = nullptr;
export PFNGLGETTEXTURELEVELPARAMETERFVPROC glGetTextureLevelParameterfv = nullptr;
export PFNGLGETTEXTURELEVELPARAMETERIVPROC glGetTextureLevelParameteriv = nullptr;
export PFNGLGETTEXTUREPARAMETERIIVPROC glGetTextureParameterIiv = nullptr;
export PFNGLGETTEXTUREPARAMETERIUIVPROC glGetTextureParameterIuiv = nullptr;
export PFNGLGETTEXTUREPARAMETERFVPROC glGetTextureParameterfv = nullptr;
export PFNGLGETTEXTUREPARAMETERIVPROC glGetTextureParameteriv = nullptr;
export PFNGLGETTEXTURESUBIMAGEPROC glGetTextureSubImage = nullptr;
export PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying = nullptr;
export PFNGLGETTRANSFORMFEEDBACKI64_VPROC glGetTransformFeedbacki64_v = nullptr;
export PFNGLGETTRANSFORMFEEDBACKI_VPROC glGetTransformFeedbacki_v = nullptr;
export PFNGLGETTRANSFORMFEEDBACKIVPROC glGetTransformFeedbackiv = nullptr;
export PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex = nullptr;
export PFNGLGETUNIFORMINDICESPROC glGetUniformIndices = nullptr;
export PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation = nullptr;
export PFNGLGETUNIFORMSUBROUTINEUIVPROC glGetUniformSubroutineuiv = nullptr;
export PFNGLGETUNIFORMDVPROC glGetUniformdv = nullptr;
export PFNGLGETUNIFORMFVPROC glGetUniformfv = nullptr;
export PFNGLGETUNIFORMIVPROC glGetUniformiv = nullptr;
export PFNGLGETUNIFORMUIVPROC glGetUniformuiv = nullptr;
export PFNGLGETVERTEXARRAYINDEXED64IVPROC glGetVertexArrayIndexed64iv = nullptr;
export PFNGLGETVERTEXARRAYINDEXEDIVPROC glGetVertexArrayIndexediv = nullptr;
export PFNGLGETVERTEXARRAYIVPROC glGetVertexArrayiv = nullptr;
export PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv = nullptr;
export PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv = nullptr;
export PFNGLGETVERTEXATTRIBLDVPROC glGetVertexAttribLdv = nullptr;
export PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv = nullptr;
export PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv = nullptr;
export PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv = nullptr;
export PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv = nullptr;
export PFNGLGETNCOLORTABLEPROC glGetnColorTable = nullptr;
export PFNGLGETNCOMPRESSEDTEXIMAGEPROC glGetnCompressedTexImage = nullptr;
export PFNGLGETNCONVOLUTIONFILTERPROC glGetnConvolutionFilter = nullptr;
export PFNGLGETNHISTOGRAMPROC glGetnHistogram = nullptr;
export PFNGLGETNMAPDVPROC glGetnMapdv = nullptr;
export PFNGLGETNMAPFVPROC glGetnMapfv = nullptr;
export PFNGLGETNMAPIVPROC glGetnMapiv = nullptr;
export PFNGLGETNMINMAXPROC glGetnMinmax = nullptr;
export PFNGLGETNPIXELMAPFVPROC glGetnPixelMapfv = nullptr;
export PFNGLGETNPIXELMAPUIVPROC glGetnPixelMapuiv = nullptr;
export PFNGLGETNPIXELMAPUSVPROC glGetnPixelMapusv = nullptr;
export PFNGLGETNPOLYGONSTIPPLEPROC glGetnPolygonStipple = nullptr;
export PFNGLGETNSEPARABLEFILTERPROC glGetnSeparableFilter = nullptr;
export PFNGLGETNTEXIMAGEPROC glGetnTexImage = nullptr;
export PFNGLGETNUNIFORMDVPROC glGetnUniformdv = nullptr;
export PFNGLGETNUNIFORMFVPROC glGetnUniformfv = nullptr;
export PFNGLGETNUNIFORMIVPROC glGetnUniformiv = nullptr;
export PFNGLGETNUNIFORMUIVPROC glGetnUniformuiv = nullptr;
export PFNGLHINTPROC glHint = nullptr;
export PFNGLINVALIDATEBUFFERDATAPROC glInvalidateBufferData = nullptr;
export PFNGLINVALIDATEBUFFERSUBDATAPROC glInvalidateBufferSubData = nullptr;
export PFNGLINVALIDATEFRAMEBUFFERPROC glInvalidateFramebuffer = nullptr;
export PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC glInvalidateNamedFramebufferData = nullptr;
export PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC glInvalidateNamedFramebufferSubData = nullptr;
export PFNGLINVALIDATESUBFRAMEBUFFERPROC glInvalidateSubFramebuffer = nullptr;
export PFNGLINVALIDATETEXIMAGEPROC glInvalidateTexImage = nullptr;
export PFNGLINVALIDATETEXSUBIMAGEPROC glInvalidateTexSubImage = nullptr;
export PFNGLISBUFFERPROC glIsBuffer = nullptr;
export PFNGLISENABLEDPROC glIsEnabled = nullptr;
export PFNGLISENABLEDIPROC glIsEnabledi = nullptr;
export PFNGLISFRAMEBUFFERPROC glIsFramebuffer = nullptr;
export PFNGLISPROGRAMPROC glIsProgram = nullptr;
export PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline = nullptr;
export PFNGLISQUERYPROC glIsQuery = nullptr;
export PFNGLISRENDERBUFFERPROC glIsRenderbuffer = nullptr;
export PFNGLISSAMPLERPROC glIsSampler = nullptr;
export PFNGLISSHADERPROC glIsShader = nullptr;
export PFNGLISSYNCPROC glIsSync = nullptr;
export PFNGLISTEXTUREPROC glIsTexture = nullptr;
export PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback = nullptr;
export PFNGLISVERTEXARRAYPROC glIsVertexArray = nullptr;
export PFNGLLINEWIDTHPROC glLineWidth = nullptr;
export PFNGLLINKPROGRAMPROC glLinkProgram = nullptr;
export PFNGLLOGICOPPROC glLogicOp = nullptr;
export PFNGLMAPBUFFERPROC glMapBuffer = nullptr;
export PFNGLMAPBUFFERRANGEPROC glMapBufferRange = nullptr;
export PFNGLMAPNAMEDBUFFERPROC glMapNamedBuffer = nullptr;
export PFNGLMAPNAMEDBUFFERRANGEPROC glMapNamedBufferRange = nullptr;
export PFNGLMEMORYBARRIERPROC glMemoryBarrier = nullptr;
export PFNGLMEMORYBARRIERBYREGIONPROC glMemoryBarrierByRegion = nullptr;
export PFNGLMINSAMPLESHADINGPROC glMinSampleShading = nullptr;
export PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays = nullptr;
export PFNGLMULTIDRAWARRAYSINDIRECTPROC glMultiDrawArraysIndirect = nullptr;
export PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC glMultiDrawArraysIndirectCount = nullptr;
export PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements = nullptr;
export PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex = nullptr;
export PFNGLMULTIDRAWELEMENTSINDIRECTPROC glMultiDrawElementsIndirect = nullptr;
export PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC glMultiDrawElementsIndirectCount = nullptr;
export PFNGLMULTITEXCOORDP1UIPROC glMultiTexCoordP1ui = nullptr;
export PFNGLMULTITEXCOORDP1UIVPROC glMultiTexCoordP1uiv = nullptr;
export PFNGLMULTITEXCOORDP2UIPROC glMultiTexCoordP2ui = nullptr;
export PFNGLMULTITEXCOORDP2UIVPROC glMultiTexCoordP2uiv = nullptr;
export PFNGLMULTITEXCOORDP3UIPROC glMultiTexCoordP3ui = nullptr;
export PFNGLMULTITEXCOORDP3UIVPROC glMultiTexCoordP3uiv = nullptr;
export PFNGLMULTITEXCOORDP4UIPROC glMultiTexCoordP4ui = nullptr;
export PFNGLMULTITEXCOORDP4UIVPROC glMultiTexCoordP4uiv = nullptr;
export PFNGLNAMEDBUFFERDATAPROC glNamedBufferData = nullptr;
export PFNGLNAMEDBUFFERSTORAGEPROC glNamedBufferStorage = nullptr;
export PFNGLNAMEDBUFFERSUBDATAPROC glNamedBufferSubData = nullptr;
export PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC glNamedFramebufferDrawBuffer = nullptr;
export PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC glNamedFramebufferDrawBuffers = nullptr;
export PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC glNamedFramebufferParameteri = nullptr;
export PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC glNamedFramebufferReadBuffer = nullptr;
export PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC glNamedFramebufferRenderbuffer = nullptr;
export PFNGLNAMEDFRAMEBUFFERTEXTUREPROC glNamedFramebufferTexture = nullptr;
export PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC glNamedFramebufferTextureLayer = nullptr;
export PFNGLNAMEDRENDERBUFFERSTORAGEPROC glNamedRenderbufferStorage = nullptr;
export PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC glNamedRenderbufferStorageMultisample = nullptr;
export PFNGLNORMALP3UIPROC glNormalP3ui = nullptr;
export PFNGLNORMALP3UIVPROC glNormalP3uiv = nullptr;
export PFNGLOBJECTLABELPROC glObjectLabel = nullptr;
export PFNGLOBJECTPTRLABELPROC glObjectPtrLabel = nullptr;
export PFNGLPATCHPARAMETERFVPROC glPatchParameterfv = nullptr;
export PFNGLPATCHPARAMETERIPROC glPatchParameteri = nullptr;
export PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback = nullptr;
export PFNGLPIXELSTOREFPROC glPixelStoref = nullptr;
export PFNGLPIXELSTOREIPROC glPixelStorei = nullptr;
export PFNGLPOINTPARAMETERFPROC glPointParameterf = nullptr;
export PFNGLPOINTPARAMETERFVPROC glPointParameterfv = nullptr;
export PFNGLPOINTPARAMETERIPROC glPointParameteri = nullptr;
export PFNGLPOINTPARAMETERIVPROC glPointParameteriv = nullptr;
export PFNGLPOINTSIZEPROC glPointSize = nullptr;
export PFNGLPOLYGONMODEPROC glPolygonMode = nullptr;
export PFNGLPOLYGONOFFSETPROC glPolygonOffset = nullptr;
export PFNGLPOLYGONOFFSETCLAMPPROC glPolygonOffsetClamp = nullptr;
export PFNGLPOPDEBUGGROUPPROC glPopDebugGroup = nullptr;
export PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex = nullptr;
export PFNGLPROGRAMBINARYPROC glProgramBinary = nullptr;
export PFNGLPROGRAMPARAMETERIPROC glProgramParameteri = nullptr;
export PFNGLPROGRAMUNIFORM1DPROC glProgramUniform1d = nullptr;
export PFNGLPROGRAMUNIFORM1DVPROC glProgramUniform1dv = nullptr;
export PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f = nullptr;
export PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv = nullptr;
export PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i = nullptr;
export PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv = nullptr;
export PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui = nullptr;
export PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv = nullptr;
export PFNGLPROGRAMUNIFORM2DPROC glProgramUniform2d = nullptr;
export PFNGLPROGRAMUNIFORM2DVPROC glProgramUniform2dv = nullptr;
export PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f = nullptr;
export PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv = nullptr;
export PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i = nullptr;
export PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv = nullptr;
export PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui = nullptr;
export PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv = nullptr;
export PFNGLPROGRAMUNIFORM3DPROC glProgramUniform3d = nullptr;
export PFNGLPROGRAMUNIFORM3DVPROC glProgramUniform3dv = nullptr;
export PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f = nullptr;
export PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv = nullptr;
export PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i = nullptr;
export PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv = nullptr;
export PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui = nullptr;
export PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv = nullptr;
export PFNGLPROGRAMUNIFORM4DPROC glProgramUniform4d = nullptr;
export PFNGLPROGRAMUNIFORM4DVPROC glProgramUniform4dv = nullptr;
export PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f = nullptr;
export PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv = nullptr;
export PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i = nullptr;
export PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv = nullptr;
export PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui = nullptr;
export PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX2DVPROC glProgramUniformMatrix2dv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glProgramUniformMatrix2x3dv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glProgramUniformMatrix2x4dv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX3DVPROC glProgramUniformMatrix3dv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glProgramUniformMatrix3x2dv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glProgramUniformMatrix3x4dv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX4DVPROC glProgramUniformMatrix4dv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glProgramUniformMatrix4x2dv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glProgramUniformMatrix4x3dv = nullptr;
export PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv = nullptr;
export PFNGLPROVOKINGVERTEXPROC glProvokingVertex = nullptr;
export PFNGLPUSHDEBUGGROUPPROC glPushDebugGroup = nullptr;
export PFNGLQUERYCOUNTERPROC glQueryCounter = nullptr;
export PFNGLREADBUFFERPROC glReadBuffer = nullptr;
export PFNGLREADPIXELSPROC glReadPixels = nullptr;
export PFNGLREADNPIXELSPROC glReadnPixels = nullptr;
export PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler = nullptr;
export PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage = nullptr;
export PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample = nullptr;
export PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback = nullptr;
export PFNGLSAMPLECOVERAGEPROC glSampleCoverage = nullptr;
export PFNGLSAMPLEMASKIPROC glSampleMaski = nullptr;
export PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv = nullptr;
export PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv = nullptr;
export PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf = nullptr;
export PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv = nullptr;
export PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri = nullptr;
export PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv = nullptr;
export PFNGLSCISSORPROC glScissor = nullptr;
export PFNGLSCISSORARRAYVPROC glScissorArrayv = nullptr;
export PFNGLSCISSORINDEXEDPROC glScissorIndexed = nullptr;
export PFNGLSCISSORINDEXEDVPROC glScissorIndexedv = nullptr;
export PFNGLSECONDARYCOLORP3UIPROC glSecondaryColorP3ui = nullptr;
export PFNGLSECONDARYCOLORP3UIVPROC glSecondaryColorP3uiv = nullptr;
export PFNGLSHADERBINARYPROC glShaderBinary = nullptr;
export PFNGLSHADERSOURCEPROC glShaderSource = nullptr;
export PFNGLSHADERSTORAGEBLOCKBINDINGPROC glShaderStorageBlockBinding = nullptr;
export PFNGLSPECIALIZESHADERPROC glSpecializeShader = nullptr;
export PFNGLSTENCILFUNCPROC glStencilFunc = nullptr;
export PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate = nullptr;
export PFNGLSTENCILMASKPROC glStencilMask = nullptr;
export PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate = nullptr;
export PFNGLSTENCILOPPROC glStencilOp = nullptr;
export PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate = nullptr;
export PFNGLTEXBUFFERPROC glTexBuffer = nullptr;
export PFNGLTEXBUFFERRANGEPROC glTexBufferRange = nullptr;
export PFNGLTEXCOORDP1UIPROC glTexCoordP1ui = nullptr;
export PFNGLTEXCOORDP1UIVPROC glTexCoordP1uiv = nullptr;
export PFNGLTEXCOORDP2UIPROC glTexCoordP2ui = nullptr;
export PFNGLTEXCOORDP2UIVPROC glTexCoordP2uiv = nullptr;
export PFNGLTEXCOORDP3UIPROC glTexCoordP3ui = nullptr;
export PFNGLTEXCOORDP3UIVPROC glTexCoordP3uiv = nullptr;
export PFNGLTEXCOORDP4UIPROC glTexCoordP4ui = nullptr;
export PFNGLTEXCOORDP4UIVPROC glTexCoordP4uiv = nullptr;
export PFNGLTEXIMAGE1DPROC glTexImage1D = nullptr;
export PFNGLTEXIMAGE2DPROC glTexImage2D = nullptr;
export PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample = nullptr;
export PFNGLTEXIMAGE3DPROC glTexImage3D = nullptr;
export PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample = nullptr;
export PFNGLTEXPARAMETERIIVPROC glTexParameterIiv = nullptr;
export PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv = nullptr;
export PFNGLTEXPARAMETERFPROC glTexParameterf = nullptr;
export PFNGLTEXPARAMETERFVPROC glTexParameterfv = nullptr;
export PFNGLTEXPARAMETERIPROC glTexParameteri = nullptr;
export PFNGLTEXPARAMETERIVPROC glTexParameteriv = nullptr;
export PFNGLTEXSTORAGE1DPROC glTexStorage1D = nullptr;
export PFNGLTEXSTORAGE2DPROC glTexStorage2D = nullptr;
export PFNGLTEXSTORAGE2DMULTISAMPLEPROC glTexStorage2DMultisample = nullptr;
export PFNGLTEXSTORAGE3DPROC glTexStorage3D = nullptr;
export PFNGLTEXSTORAGE3DMULTISAMPLEPROC glTexStorage3DMultisample = nullptr;
export PFNGLTEXSUBIMAGE1DPROC glTexSubImage1D = nullptr;
export PFNGLTEXSUBIMAGE2DPROC glTexSubImage2D = nullptr;
export PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D = nullptr;
export PFNGLTEXTUREBARRIERPROC glTextureBarrier = nullptr;
export PFNGLTEXTUREBUFFERPROC glTextureBuffer = nullptr;
export PFNGLTEXTUREBUFFERRANGEPROC glTextureBufferRange = nullptr;
export PFNGLTEXTUREPARAMETERIIVPROC glTextureParameterIiv = nullptr;
export PFNGLTEXTUREPARAMETERIUIVPROC glTextureParameterIuiv = nullptr;
export PFNGLTEXTUREPARAMETERFPROC glTextureParameterf = nullptr;
export PFNGLTEXTUREPARAMETERFVPROC glTextureParameterfv = nullptr;
export PFNGLTEXTUREPARAMETERIPROC glTextureParameteri = nullptr;
export PFNGLTEXTUREPARAMETERIVPROC glTextureParameteriv = nullptr;
export PFNGLTEXTURESTORAGE1DPROC glTextureStorage1D = nullptr;
export PFNGLTEXTURESTORAGE2DPROC glTextureStorage2D = nullptr;
export PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC glTextureStorage2DMultisample = nullptr;
export PFNGLTEXTURESTORAGE3DPROC glTextureStorage3D = nullptr;
export PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC glTextureStorage3DMultisample = nullptr;
export PFNGLTEXTURESUBIMAGE1DPROC glTextureSubImage1D = nullptr;
export PFNGLTEXTURESUBIMAGE2DPROC glTextureSubImage2D = nullptr;
export PFNGLTEXTURESUBIMAGE3DPROC glTextureSubImage3D = nullptr;
export PFNGLTEXTUREVIEWPROC glTextureView = nullptr;
export PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC glTransformFeedbackBufferBase = nullptr;
export PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC glTransformFeedbackBufferRange = nullptr;
export PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings = nullptr;
export PFNGLUNIFORM1DPROC glUniform1d = nullptr;
export PFNGLUNIFORM1DVPROC glUniform1dv = nullptr;
export PFNGLUNIFORM1FPROC glUniform1f = nullptr;
export PFNGLUNIFORM1FVPROC glUniform1fv = nullptr;
export PFNGLUNIFORM1IPROC glUniform1i = nullptr;
export PFNGLUNIFORM1IVPROC glUniform1iv = nullptr;
export PFNGLUNIFORM1UIPROC glUniform1ui = nullptr;
export PFNGLUNIFORM1UIVPROC glUniform1uiv = nullptr;
export PFNGLUNIFORM2DPROC glUniform2d = nullptr;
export PFNGLUNIFORM2DVPROC glUniform2dv = nullptr;
export PFNGLUNIFORM2FPROC glUniform2f = nullptr;
export PFNGLUNIFORM2FVPROC glUniform2fv = nullptr;
export PFNGLUNIFORM2IPROC glUniform2i = nullptr;
export PFNGLUNIFORM2IVPROC glUniform2iv = nullptr;
export PFNGLUNIFORM2UIPROC glUniform2ui = nullptr;
export PFNGLUNIFORM2UIVPROC glUniform2uiv = nullptr;
export PFNGLUNIFORM3DPROC glUniform3d = nullptr;
export PFNGLUNIFORM3DVPROC glUniform3dv = nullptr;
export PFNGLUNIFORM3FPROC glUniform3f = nullptr;
export PFNGLUNIFORM3FVPROC glUniform3fv = nullptr;
export PFNGLUNIFORM3IPROC glUniform3i = nullptr;
export PFNGLUNIFORM3IVPROC glUniform3iv = nullptr;
export PFNGLUNIFORM3UIPROC glUniform3ui = nullptr;
export PFNGLUNIFORM3UIVPROC glUniform3uiv = nullptr;
export PFNGLUNIFORM4DPROC glUniform4d = nullptr;
export PFNGLUNIFORM4DVPROC glUniform4dv = nullptr;
export PFNGLUNIFORM4FPROC glUniform4f = nullptr;
export PFNGLUNIFORM4FVPROC glUniform4fv = nullptr;
export PFNGLUNIFORM4IPROC glUniform4i = nullptr;
export PFNGLUNIFORM4IVPROC glUniform4iv = nullptr;
export PFNGLUNIFORM4UIPROC glUniform4ui = nullptr;
export PFNGLUNIFORM4UIVPROC glUniform4uiv = nullptr;
export PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding = nullptr;
export PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv = nullptr;
export PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv = nullptr;
export PFNGLUNIFORMMATRIX2X3DVPROC glUniformMatrix2x3dv = nullptr;
export PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv = nullptr;
export PFNGLUNIFORMMATRIX2X4DVPROC glUniformMatrix2x4dv = nullptr;
export PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv = nullptr;
export PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv = nullptr;
export PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv = nullptr;
export PFNGLUNIFORMMATRIX3X2DVPROC glUniformMatrix3x2dv = nullptr;
export PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv = nullptr;
export PFNGLUNIFORMMATRIX3X4DVPROC glUniformMatrix3x4dv = nullptr;
export PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv = nullptr;
export PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv = nullptr;
export PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv = nullptr;
export PFNGLUNIFORMMATRIX4X2DVPROC glUniformMatrix4x2dv = nullptr;
export PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv = nullptr;
export PFNGLUNIFORMMATRIX4X3DVPROC glUniformMatrix4x3dv = nullptr;
export PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv = nullptr;
export PFNGLUNIFORMSUBROUTINESUIVPROC glUniformSubroutinesuiv = nullptr;
export PFNGLUNMAPBUFFERPROC glUnmapBuffer = nullptr;
export PFNGLUNMAPNAMEDBUFFERPROC glUnmapNamedBuffer = nullptr;
export PFNGLUSEPROGRAMPROC glUseProgram = nullptr;
export PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages = nullptr;
export PFNGLVALIDATEPROGRAMPROC glValidateProgram = nullptr;
export PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline = nullptr;
export PFNGLVERTEXARRAYATTRIBBINDINGPROC glVertexArrayAttribBinding = nullptr;
export PFNGLVERTEXARRAYATTRIBFORMATPROC glVertexArrayAttribFormat = nullptr;
export PFNGLVERTEXARRAYATTRIBIFORMATPROC glVertexArrayAttribIFormat = nullptr;
export PFNGLVERTEXARRAYATTRIBLFORMATPROC glVertexArrayAttribLFormat = nullptr;
export PFNGLVERTEXARRAYBINDINGDIVISORPROC glVertexArrayBindingDivisor = nullptr;
export PFNGLVERTEXARRAYELEMENTBUFFERPROC glVertexArrayElementBuffer = nullptr;
export PFNGLVERTEXARRAYVERTEXBUFFERPROC glVertexArrayVertexBuffer = nullptr;
export PFNGLVERTEXARRAYVERTEXBUFFERSPROC glVertexArrayVertexBuffers = nullptr;
export PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d = nullptr;
export PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv = nullptr;
export PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f = nullptr;
export PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv = nullptr;
export PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s = nullptr;
export PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv = nullptr;
export PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d = nullptr;
export PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv = nullptr;
export PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f = nullptr;
export PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv = nullptr;
export PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s = nullptr;
export PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv = nullptr;
export PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d = nullptr;
export PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv = nullptr;
export PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f = nullptr;
export PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv = nullptr;
export PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s = nullptr;
export PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv = nullptr;
export PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv = nullptr;
export PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv = nullptr;
export PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv = nullptr;
export PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub = nullptr;
export PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv = nullptr;
export PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv = nullptr;
export PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv = nullptr;
export PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv = nullptr;
export PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d = nullptr;
export PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv = nullptr;
export PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f = nullptr;
export PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv = nullptr;
export PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv = nullptr;
export PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s = nullptr;
export PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv = nullptr;
export PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv = nullptr;
export PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv = nullptr;
export PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv = nullptr;
export PFNGLVERTEXATTRIBBINDINGPROC glVertexAttribBinding = nullptr;
export PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor = nullptr;
export PFNGLVERTEXATTRIBFORMATPROC glVertexAttribFormat = nullptr;
export PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i = nullptr;
export PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv = nullptr;
export PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui = nullptr;
export PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv = nullptr;
export PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i = nullptr;
export PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv = nullptr;
export PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui = nullptr;
export PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv = nullptr;
export PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i = nullptr;
export PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv = nullptr;
export PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui = nullptr;
export PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv = nullptr;
export PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv = nullptr;
export PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i = nullptr;
export PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv = nullptr;
export PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv = nullptr;
export PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv = nullptr;
export PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui = nullptr;
export PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv = nullptr;
export PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv = nullptr;
export PFNGLVERTEXATTRIBIFORMATPROC glVertexAttribIFormat = nullptr;
export PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer = nullptr;
export PFNGLVERTEXATTRIBL1DPROC glVertexAttribL1d = nullptr;
export PFNGLVERTEXATTRIBL1DVPROC glVertexAttribL1dv = nullptr;
export PFNGLVERTEXATTRIBL2DPROC glVertexAttribL2d = nullptr;
export PFNGLVERTEXATTRIBL2DVPROC glVertexAttribL2dv = nullptr;
export PFNGLVERTEXATTRIBL3DPROC glVertexAttribL3d = nullptr;
export PFNGLVERTEXATTRIBL3DVPROC glVertexAttribL3dv = nullptr;
export PFNGLVERTEXATTRIBL4DPROC glVertexAttribL4d = nullptr;
export PFNGLVERTEXATTRIBL4DVPROC glVertexAttribL4dv = nullptr;
export PFNGLVERTEXATTRIBLFORMATPROC glVertexAttribLFormat = nullptr;
export PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer = nullptr;
export PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui = nullptr;
export PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv = nullptr;
export PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui = nullptr;
export PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv = nullptr;
export PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui = nullptr;
export PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv = nullptr;
export PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui = nullptr;
export PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv = nullptr;
export PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer = nullptr;
export PFNGLVERTEXBINDINGDIVISORPROC glVertexBindingDivisor = nullptr;
export PFNGLVERTEXP2UIPROC glVertexP2ui = nullptr;
export PFNGLVERTEXP2UIVPROC glVertexP2uiv = nullptr;
export PFNGLVERTEXP3UIPROC glVertexP3ui = nullptr;
export PFNGLVERTEXP3UIVPROC glVertexP3uiv = nullptr;
export PFNGLVERTEXP4UIPROC glVertexP4ui = nullptr;
export PFNGLVERTEXP4UIVPROC glVertexP4uiv = nullptr;
export PFNGLVIEWPORTPROC glViewport = nullptr;
export PFNGLVIEWPORTARRAYVPROC glViewportArrayv = nullptr;
export PFNGLVIEWPORTINDEXEDFPROC glViewportIndexedf = nullptr;
export PFNGLVIEWPORTINDEXEDFVPROC glViewportIndexedfv = nullptr;
export PFNGLWAITSYNCPROC glWaitSync = nullptr;


#ifndef NO_STRICT
#ifndef STRICT
#define STRICT 1
#endif
#endif /* NO_STRICT */
#ifdef STRICT
typedef void* HANDLE;
#if 0 && (_MSC_VER > 1000)
#define DECLARE_HANDLE(name) struct name##__; typedef struct name##__ *name
#else
#define DECLARE_HANDLE(name) struct name##__{int unused;}; typedef struct name##__ *name
#endif
#else
typedef PVOID HANDLE;
#define DECLARE_HANDLE(name) typedef HANDLE name
#endif

//DECLARE_HANDLE(HINSTANCE);
//typedef HINSTANCE HMODULE;

HMODULE libGL;

export PFNWGLGETPROCADDRESSPROC_PRIVATE gladGetProcAddressPtr;

int open_gl(void) {

	libGL = LoadLibraryW(L"opengl32.lib");
	if (libGL != nullptr) {
		void (*tmp)(void);
		tmp = (void(*)(void)) GetProcAddress(libGL, "wglGetProcAddress");
		gladGetProcAddressPtr = (PFNWGLGETPROCADDRESSPROC_PRIVATE)tmp;
		return gladGetProcAddressPtr != nullptr;
	}


	return 0;
}

void close_gl(void) {
	if (libGL != nullptr) {
		FreeLibrary((HMODULE)libGL);
		libGL = nullptr;
	}
}


void* get_proc(const char* namez) {
	void* result = nullptr;
	if (libGL == nullptr) return nullptr;

	if (gladGetProcAddressPtr != nullptr) {
		result = gladGetProcAddressPtr(namez);
	}

	if (result == nullptr) {
		result = (void*)GetProcAddress((HMODULE)libGL, namez);

	}

	return result;
}


	struct gladGLversionStruct GLVersion = { 0, 0 };

	int max_loaded_major;
	int max_loaded_minor;
	const char* exts = nullptr;
	char** exts_i = nullptr;
	int num_exts_i = 0;

	int get_exts(void) {
	
		if (max_loaded_major < 3) {
	
			exts = (const char*)glGetString(GL_EXTENSIONS);
	
		} else {
			unsigned int index;
	
			num_exts_i = 0;
			glGetIntegerv(GL_NUM_EXTENSIONS, &num_exts_i);
			if (num_exts_i > 0) {
				exts_i = (char**)malloc((size_t)num_exts_i * (sizeof * exts_i));
			}
	
			if (exts_i == nullptr) {
				return 0;
			}
	
			for (index = 0; index < (unsigned)num_exts_i; index++) {
				const char* gl_str_tmp = (const char*)glGetStringi(GL_EXTENSIONS, index);
				size_t len = strlen(gl_str_tmp);
	
				char* local_str = (char*)malloc((len + 1) * sizeof(char));
				if (local_str != nullptr) {
					memcpy(local_str, gl_str_tmp, (len + 1) * sizeof(char));
				}
				exts_i[index] = local_str;
			}
		}
	
		return 1;
	}

	void free_exts(void) {
		if (exts_i != nullptr) {
			int index;
			for (index = 0; index < num_exts_i; index++) {
				free((char*)exts_i[index]);
			}
			free((void*)exts_i);
			exts_i = nullptr;
		}
	}
	
	static int has_ext(const char* ext) {
	
		if (max_loaded_major < 3) {
	
			const char* extensions;
			const char* loc;
			const char* terminator;
			extensions = exts;
			if (extensions == nullptr || ext == nullptr) {
				return 0;
			}
	
			while (1) {
				loc = strstr(extensions, ext);
				if (loc == nullptr) {
					return 0;
				}
	
				terminator = loc + strlen(ext);
				if ((loc == extensions || *(loc - 1) == ' ') &&
					(*terminator == ' ' || *terminator == '\0')) {
					return 1;
				}
				extensions = terminator;
			}
	
		}
		else {
			int index;
			if (exts_i == nullptr) return 0;
			for (index = 0; index < num_exts_i; index++) {
				const char* e = exts_i[index];
	
				if (exts_i[index] != nullptr && strcmp(e, ext) == 0) {
					return 1;
				}
			}
		}
	
	
		return 0;
	}


	void load_GL_VERSION_1_0(GLADloadproc load) {
		if (!GL_VERSION_1_0) return;
		glCullFace = (PFNGLCULLFACEPROC)load("glCullFace");
		glFrontFace = (PFNGLFRONTFACEPROC)load("glFrontFace");
		glHint = (PFNGLHINTPROC)load("glHint");
		glLineWidth = (PFNGLLINEWIDTHPROC)load("glLineWidth");
		glPointSize = (PFNGLPOINTSIZEPROC)load("glPointSize");
		glPolygonMode = (PFNGLPOLYGONMODEPROC)load("glPolygonMode");
		glScissor = (PFNGLSCISSORPROC)load("glScissor");
		glTexParameterf = (PFNGLTEXPARAMETERFPROC)load("glTexParameterf");
		glTexParameterfv = (PFNGLTEXPARAMETERFVPROC)load("glTexParameterfv");
		glTexParameteri = (PFNGLTEXPARAMETERIPROC)load("glTexParameteri");
		glTexParameteriv = (PFNGLTEXPARAMETERIVPROC)load("glTexParameteriv");
		glTexImage1D = (PFNGLTEXIMAGE1DPROC)load("glTexImage1D");
		glTexImage2D = (PFNGLTEXIMAGE2DPROC)load("glTexImage2D");
		glDrawBuffer = (PFNGLDRAWBUFFERPROC)load("glDrawBuffer");
		glClear = (PFNGLCLEARPROC)load("glClear");
		glClearColor = (PFNGLCLEARCOLORPROC)load("glClearColor");
		glClearStencil = (PFNGLCLEARSTENCILPROC)load("glClearStencil");
		glClearDepth = (PFNGLCLEARDEPTHPROC)load("glClearDepth");
		glStencilMask = (PFNGLSTENCILMASKPROC)load("glStencilMask");
		glColorMask = (PFNGLCOLORMASKPROC)load("glColorMask");
		glDepthMask = (PFNGLDEPTHMASKPROC)load("glDepthMask");
		glDisable = (PFNGLDISABLEPROC)load("glDisable");
		glEnable = (PFNGLENABLEPROC)load("glEnable");
		glFinish = (PFNGLFINISHPROC)load("glFinish");
		glFlush = (PFNGLFLUSHPROC)load("glFlush");
		glBlendFunc = (PFNGLBLENDFUNCPROC)load("glBlendFunc");
		glLogicOp = (PFNGLLOGICOPPROC)load("glLogicOp");
		glStencilFunc = (PFNGLSTENCILFUNCPROC)load("glStencilFunc");
		glStencilOp = (PFNGLSTENCILOPPROC)load("glStencilOp");
		glDepthFunc = (PFNGLDEPTHFUNCPROC)load("glDepthFunc");
		glPixelStoref = (PFNGLPIXELSTOREFPROC)load("glPixelStoref");
		glPixelStorei = (PFNGLPIXELSTOREIPROC)load("glPixelStorei");
		glReadBuffer = (PFNGLREADBUFFERPROC)load("glReadBuffer");
		glReadPixels = (PFNGLREADPIXELSPROC)load("glReadPixels");
		glGetBooleanv = (PFNGLGETBOOLEANVPROC)load("glGetBooleanv");
		glGetDoublev = (PFNGLGETDOUBLEVPROC)load("glGetDoublev");
		glGetError = (PFNGLGETERRORPROC)load("glGetError");
		glGetFloatv = (PFNGLGETFLOATVPROC)load("glGetFloatv");
		glGetIntegerv = (PFNGLGETINTEGERVPROC)load("glGetIntegerv");
		glGetString = (PFNGLGETSTRINGPROC)load("glGetString");
		glGetTexImage = (PFNGLGETTEXIMAGEPROC)load("glGetTexImage");
		glGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC)load("glGetTexParameterfv");
		glGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC)load("glGetTexParameteriv");
		glGetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC)load("glGetTexLevelParameterfv");
		glGetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC)load("glGetTexLevelParameteriv");
		glIsEnabled = (PFNGLISENABLEDPROC)load("glIsEnabled");
		glDepthRange = (PFNGLDEPTHRANGEPROC)load("glDepthRange");
		glViewport = (PFNGLVIEWPORTPROC)load("glViewport");
	}

	void load_GL_VERSION_1_1(GLADloadproc load) {
		if (!GL_VERSION_1_1) return;
		glDrawArrays = (PFNGLDRAWARRAYSPROC)load("glDrawArrays");
		glDrawElements = (PFNGLDRAWELEMENTSPROC)load("glDrawElements");
		glPolygonOffset = (PFNGLPOLYGONOFFSETPROC)load("glPolygonOffset");
		glCopyTexImage1D = (PFNGLCOPYTEXIMAGE1DPROC)load("glCopyTexImage1D");
		glCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC)load("glCopyTexImage2D");
		glCopyTexSubImage1D = (PFNGLCOPYTEXSUBIMAGE1DPROC)load("glCopyTexSubImage1D");
		glCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC)load("glCopyTexSubImage2D");
		glTexSubImage1D = (PFNGLTEXSUBIMAGE1DPROC)load("glTexSubImage1D");
		glTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC)load("glTexSubImage2D");
		glBindTexture = (PFNGLBINDTEXTUREPROC)load("glBindTexture");
		glDeleteTextures = (PFNGLDELETETEXTURESPROC)load("glDeleteTextures");
		glGenTextures = (PFNGLGENTEXTURESPROC)load("glGenTextures");
		glIsTexture = (PFNGLISTEXTUREPROC)load("glIsTexture");
	}
	void load_GL_VERSION_1_2(GLADloadproc load) {
	if (!GL_VERSION_1_2) return;
	glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)load("glDrawRangeElements");
	glTexImage3D = (PFNGLTEXIMAGE3DPROC)load("glTexImage3D");
	glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC)load("glTexSubImage3D");
	glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC)load("glCopyTexSubImage3D");
}
	void load_GL_VERSION_1_3(GLADloadproc load) {
	if (!GL_VERSION_1_3) return;
	glActiveTexture = (PFNGLACTIVETEXTUREPROC)load("glActiveTexture");
	glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)load("glSampleCoverage");
	glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)load("glCompressedTexImage3D");
	glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)load("glCompressedTexImage2D");
	glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)load("glCompressedTexImage1D");
	glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)load("glCompressedTexSubImage3D");
	glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)load("glCompressedTexSubImage2D");
	glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)load("glCompressedTexSubImage1D");
	glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)load("glGetCompressedTexImage");
}
	void load_GL_VERSION_1_4(GLADloadproc load) {
	if (!GL_VERSION_1_4) return;
	glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)load("glBlendFuncSeparate");
	glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC)load("glMultiDrawArrays");
	glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC)load("glMultiDrawElements");
	glPointParameterf = (PFNGLPOINTPARAMETERFPROC)load("glPointParameterf");
	glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC)load("glPointParameterfv");
	glPointParameteri = (PFNGLPOINTPARAMETERIPROC)load("glPointParameteri");
	glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC)load("glPointParameteriv");
	glBlendColor = (PFNGLBLENDCOLORPROC)load("glBlendColor");
	glBlendEquation = (PFNGLBLENDEQUATIONPROC)load("glBlendEquation");
}
	void load_GL_VERSION_1_5(GLADloadproc load) {
	if (!GL_VERSION_1_5) return;
	glGenQueries = (PFNGLGENQUERIESPROC)load("glGenQueries");
	glDeleteQueries = (PFNGLDELETEQUERIESPROC)load("glDeleteQueries");
	glIsQuery = (PFNGLISQUERYPROC)load("glIsQuery");
	glBeginQuery = (PFNGLBEGINQUERYPROC)load("glBeginQuery");
	glEndQuery = (PFNGLENDQUERYPROC)load("glEndQuery");
	glGetQueryiv = (PFNGLGETQUERYIVPROC)load("glGetQueryiv");
	glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)load("glGetQueryObjectiv");
	glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)load("glGetQueryObjectuiv");
	glBindBuffer = (PFNGLBINDBUFFERPROC)load("glBindBuffer");
	glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)load("glDeleteBuffers");
	glGenBuffers = (PFNGLGENBUFFERSPROC)load("glGenBuffers");
	glIsBuffer = (PFNGLISBUFFERPROC)load("glIsBuffer");
	glBufferData = (PFNGLBUFFERDATAPROC)load("glBufferData");
	glBufferSubData = (PFNGLBUFFERSUBDATAPROC)load("glBufferSubData");
	glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)load("glGetBufferSubData");
	glMapBuffer = (PFNGLMAPBUFFERPROC)load("glMapBuffer");
	glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)load("glUnmapBuffer");
	glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)load("glGetBufferParameteriv");
	glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)load("glGetBufferPointerv");
}
	void load_GL_VERSION_2_0(GLADloadproc load) {
	if (!GL_VERSION_2_0) return;
	glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)load("glBlendEquationSeparate");
	glDrawBuffers = (PFNGLDRAWBUFFERSPROC)load("glDrawBuffers");
	glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC)load("glStencilOpSeparate");
	glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC)load("glStencilFuncSeparate");
	glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC)load("glStencilMaskSeparate");
	glAttachShader = (PFNGLATTACHSHADERPROC)load("glAttachShader");
	glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)load("glBindAttribLocation");
	glCompileShader = (PFNGLCOMPILESHADERPROC)load("glCompileShader");
	glCreateProgram = (PFNGLCREATEPROGRAMPROC)load("glCreateProgram");
	glCreateShader = (PFNGLCREATESHADERPROC)load("glCreateShader");
	glDeleteProgram = (PFNGLDELETEPROGRAMPROC)load("glDeleteProgram");
	glDeleteShader = (PFNGLDELETESHADERPROC)load("glDeleteShader");
	glDetachShader = (PFNGLDETACHSHADERPROC)load("glDetachShader");
	glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)load("glDisableVertexAttribArray");
	glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)load("glEnableVertexAttribArray");
	glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC)load("glGetActiveAttrib");
	glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC)load("glGetActiveUniform");
	glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC)load("glGetAttachedShaders");
	glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)load("glGetAttribLocation");
	glGetProgramiv = (PFNGLGETPROGRAMIVPROC)load("glGetProgramiv");
	glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)load("glGetProgramInfoLog");
	glGetShaderiv = (PFNGLGETSHADERIVPROC)load("glGetShaderiv");
	glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)load("glGetShaderInfoLog");
	glGetShaderSource = (PFNGLGETSHADERSOURCEPROC)load("glGetShaderSource");
	glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)load("glGetUniformLocation");
	glGetUniformfv = (PFNGLGETUNIFORMFVPROC)load("glGetUniformfv");
	glGetUniformiv = (PFNGLGETUNIFORMIVPROC)load("glGetUniformiv");
	glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC)load("glGetVertexAttribdv");
	glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC)load("glGetVertexAttribfv");
	glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC)load("glGetVertexAttribiv");
	glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)load("glGetVertexAttribPointerv");
	glIsProgram = (PFNGLISPROGRAMPROC)load("glIsProgram");
	glIsShader = (PFNGLISSHADERPROC)load("glIsShader");
	glLinkProgram = (PFNGLLINKPROGRAMPROC)load("glLinkProgram");
	glShaderSource = (PFNGLSHADERSOURCEPROC)load("glShaderSource");
	glUseProgram = (PFNGLUSEPROGRAMPROC)load("glUseProgram");
	glUniform1f = (PFNGLUNIFORM1FPROC)load("glUniform1f");
	glUniform2f = (PFNGLUNIFORM2FPROC)load("glUniform2f");
	glUniform3f = (PFNGLUNIFORM3FPROC)load("glUniform3f");
	glUniform4f = (PFNGLUNIFORM4FPROC)load("glUniform4f");
	glUniform1i = (PFNGLUNIFORM1IPROC)load("glUniform1i");
	glUniform2i = (PFNGLUNIFORM2IPROC)load("glUniform2i");
	glUniform3i = (PFNGLUNIFORM3IPROC)load("glUniform3i");
	glUniform4i = (PFNGLUNIFORM4IPROC)load("glUniform4i");
	glUniform1fv = (PFNGLUNIFORM1FVPROC)load("glUniform1fv");
	glUniform2fv = (PFNGLUNIFORM2FVPROC)load("glUniform2fv");
	glUniform3fv = (PFNGLUNIFORM3FVPROC)load("glUniform3fv");
	glUniform4fv = (PFNGLUNIFORM4FVPROC)load("glUniform4fv");
	glUniform1iv = (PFNGLUNIFORM1IVPROC)load("glUniform1iv");
	glUniform2iv = (PFNGLUNIFORM2IVPROC)load("glUniform2iv");
	glUniform3iv = (PFNGLUNIFORM3IVPROC)load("glUniform3iv");
	glUniform4iv = (PFNGLUNIFORM4IVPROC)load("glUniform4iv");
	glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)load("glUniformMatrix2fv");
	glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)load("glUniformMatrix3fv");
	glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)load("glUniformMatrix4fv");
	glValidateProgram = (PFNGLVALIDATEPROGRAMPROC)load("glValidateProgram");
	glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC)load("glVertexAttrib1d");
	glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC)load("glVertexAttrib1dv");
	glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC)load("glVertexAttrib1f");
	glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC)load("glVertexAttrib1fv");
	glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC)load("glVertexAttrib1s");
	glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC)load("glVertexAttrib1sv");
	glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC)load("glVertexAttrib2d");
	glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC)load("glVertexAttrib2dv");
	glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC)load("glVertexAttrib2f");
	glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC)load("glVertexAttrib2fv");
	glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC)load("glVertexAttrib2s");
	glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC)load("glVertexAttrib2sv");
	glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC)load("glVertexAttrib3d");
	glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC)load("glVertexAttrib3dv");
	glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC)load("glVertexAttrib3f");
	glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC)load("glVertexAttrib3fv");
	glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC)load("glVertexAttrib3s");
	glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC)load("glVertexAttrib3sv");
	glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC)load("glVertexAttrib4Nbv");
	glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC)load("glVertexAttrib4Niv");
	glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC)load("glVertexAttrib4Nsv");
	glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC)load("glVertexAttrib4Nub");
	glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC)load("glVertexAttrib4Nubv");
	glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC)load("glVertexAttrib4Nuiv");
	glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC)load("glVertexAttrib4Nusv");
	glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC)load("glVertexAttrib4bv");
	glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC)load("glVertexAttrib4d");
	glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC)load("glVertexAttrib4dv");
	glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC)load("glVertexAttrib4f");
	glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC)load("glVertexAttrib4fv");
	glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC)load("glVertexAttrib4iv");
	glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC)load("glVertexAttrib4s");
	glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC)load("glVertexAttrib4sv");
	glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC)load("glVertexAttrib4ubv");
	glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC)load("glVertexAttrib4uiv");
	glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC)load("glVertexAttrib4usv");
	glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)load("glVertexAttribPointer");
}
	void load_GL_VERSION_2_1(GLADloadproc load) {
	if (!GL_VERSION_2_1) return;
	glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)load("glUniformMatrix2x3fv");
	glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)load("glUniformMatrix3x2fv");
	glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)load("glUniformMatrix2x4fv");
	glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)load("glUniformMatrix4x2fv");
	glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)load("glUniformMatrix3x4fv");
	glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)load("glUniformMatrix4x3fv");
}
	void load_GL_VERSION_3_0(GLADloadproc load) {
	if (!GL_VERSION_3_0) return;
	glColorMaski = (PFNGLCOLORMASKIPROC)load("glColorMaski");
	glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC)load("glGetBooleani_v");
	glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)load("glGetIntegeri_v");
	glEnablei = (PFNGLENABLEIPROC)load("glEnablei");
	glDisablei = (PFNGLDISABLEIPROC)load("glDisablei");
	glIsEnabledi = (PFNGLISENABLEDIPROC)load("glIsEnabledi");
	glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)load("glBeginTransformFeedback");
	glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC)load("glEndTransformFeedback");
	glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)load("glBindBufferRange");
	glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)load("glBindBufferBase");
	glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)load("glTransformFeedbackVaryings");
	glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)load("glGetTransformFeedbackVarying");
	glClampColor = (PFNGLCLAMPCOLORPROC)load("glClampColor");
	glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)load("glBeginConditionalRender");
	glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC)load("glEndConditionalRender");
	glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC)load("glVertexAttribIPointer");
	glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC)load("glGetVertexAttribIiv");
	glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)load("glGetVertexAttribIuiv");
	glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC)load("glVertexAttribI1i");
	glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC)load("glVertexAttribI2i");
	glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC)load("glVertexAttribI3i");
	glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC)load("glVertexAttribI4i");
	glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC)load("glVertexAttribI1ui");
	glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC)load("glVertexAttribI2ui");
	glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC)load("glVertexAttribI3ui");
	glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC)load("glVertexAttribI4ui");
	glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC)load("glVertexAttribI1iv");
	glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC)load("glVertexAttribI2iv");
	glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC)load("glVertexAttribI3iv");
	glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC)load("glVertexAttribI4iv");
	glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC)load("glVertexAttribI1uiv");
	glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC)load("glVertexAttribI2uiv");
	glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC)load("glVertexAttribI3uiv");
	glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC)load("glVertexAttribI4uiv");
	glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC)load("glVertexAttribI4bv");
	glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC)load("glVertexAttribI4sv");
	glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC)load("glVertexAttribI4ubv");
	glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC)load("glVertexAttribI4usv");
	glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC)load("glGetUniformuiv");
	glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC)load("glBindFragDataLocation");
	glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC)load("glGetFragDataLocation");
	glUniform1ui = (PFNGLUNIFORM1UIPROC)load("glUniform1ui");
	glUniform2ui = (PFNGLUNIFORM2UIPROC)load("glUniform2ui");
	glUniform3ui = (PFNGLUNIFORM3UIPROC)load("glUniform3ui");
	glUniform4ui = (PFNGLUNIFORM4UIPROC)load("glUniform4ui");
	glUniform1uiv = (PFNGLUNIFORM1UIVPROC)load("glUniform1uiv");
	glUniform2uiv = (PFNGLUNIFORM2UIVPROC)load("glUniform2uiv");
	glUniform3uiv = (PFNGLUNIFORM3UIVPROC)load("glUniform3uiv");
	glUniform4uiv = (PFNGLUNIFORM4UIVPROC)load("glUniform4uiv");
	glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC)load("glTexParameterIiv");
	glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC)load("glTexParameterIuiv");
	glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC)load("glGetTexParameterIiv");
	glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC)load("glGetTexParameterIuiv");
	glClearBufferiv = (PFNGLCLEARBUFFERIVPROC)load("glClearBufferiv");
	glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC)load("glClearBufferuiv");
	glClearBufferfv = (PFNGLCLEARBUFFERFVPROC)load("glClearBufferfv");
	glClearBufferfi = (PFNGLCLEARBUFFERFIPROC)load("glClearBufferfi");
	glGetStringi = (PFNGLGETSTRINGIPROC)load("glGetStringi");
	glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)load("glIsRenderbuffer");
	glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)load("glBindRenderbuffer");
	glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)load("glDeleteRenderbuffers");
	glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)load("glGenRenderbuffers");
	glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)load("glRenderbufferStorage");
	glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)load("glGetRenderbufferParameteriv");
	glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)load("glIsFramebuffer");
	glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)load("glBindFramebuffer");
	glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)load("glDeleteFramebuffers");
	glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)load("glGenFramebuffers");
	glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)load("glCheckFramebufferStatus");
	glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)load("glFramebufferTexture1D");
	glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)load("glFramebufferTexture2D");
	glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)load("glFramebufferTexture3D");
	glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)load("glFramebufferRenderbuffer");
	glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)load("glGetFramebufferAttachmentParameteriv");
	glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)load("glGenerateMipmap");
	glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC)load("glBlitFramebuffer");
	glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)load("glRenderbufferStorageMultisample");
	glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)load("glFramebufferTextureLayer");
	glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC)load("glMapBufferRange");
	glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)load("glFlushMappedBufferRange");
	glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC)load("glBindVertexArray");
	glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC)load("glDeleteVertexArrays");
	glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC)load("glGenVertexArrays");
	glIsVertexArray = (PFNGLISVERTEXARRAYPROC)load("glIsVertexArray");
}
	void load_GL_VERSION_3_1(GLADloadproc load) {
	if (!GL_VERSION_3_1) return;
	glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC)load("glDrawArraysInstanced");
	glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)load("glDrawElementsInstanced");
	glTexBuffer = (PFNGLTEXBUFFERPROC)load("glTexBuffer");
	glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)load("glPrimitiveRestartIndex");
	glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC)load("glCopyBufferSubData");
	glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC)load("glGetUniformIndices");
	glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)load("glGetActiveUniformsiv");
	glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC)load("glGetActiveUniformName");
	glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC)load("glGetUniformBlockIndex");
	glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)load("glGetActiveUniformBlockiv");
	glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)load("glGetActiveUniformBlockName");
	glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC)load("glUniformBlockBinding");
	glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)load("glBindBufferRange");
	glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)load("glBindBufferBase");
	glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)load("glGetIntegeri_v");
}
	void load_GL_VERSION_3_2(GLADloadproc load) {
	if (!GL_VERSION_3_2) return;
	glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)load("glDrawElementsBaseVertex");
	glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)load("glDrawRangeElementsBaseVertex");
	glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)load("glDrawElementsInstancedBaseVertex");
	glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)load("glMultiDrawElementsBaseVertex");
	glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC)load("glProvokingVertex");
	glFenceSync = (PFNGLFENCESYNCPROC)load("glFenceSync");
	glIsSync = (PFNGLISSYNCPROC)load("glIsSync");
	glDeleteSync = (PFNGLDELETESYNCPROC)load("glDeleteSync");
	glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC)load("glClientWaitSync");
	glWaitSync = (PFNGLWAITSYNCPROC)load("glWaitSync");
	glGetInteger64v = (PFNGLGETINTEGER64VPROC)load("glGetInteger64v");
	glGetSynciv = (PFNGLGETSYNCIVPROC)load("glGetSynciv");
	glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC)load("glGetInteger64i_v");
	glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)load("glGetBufferParameteri64v");
	glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)load("glFramebufferTexture");
	glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)load("glTexImage2DMultisample");
	glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)load("glTexImage3DMultisample");
	glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC)load("glGetMultisamplefv");
	glSampleMaski = (PFNGLSAMPLEMASKIPROC)load("glSampleMaski");
}
	void load_GL_VERSION_3_3(GLADloadproc load) {
	if (!GL_VERSION_3_3) return;
	glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)load("glBindFragDataLocationIndexed");
	glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC)load("glGetFragDataIndex");
	glGenSamplers = (PFNGLGENSAMPLERSPROC)load("glGenSamplers");
	glDeleteSamplers = (PFNGLDELETESAMPLERSPROC)load("glDeleteSamplers");
	glIsSampler = (PFNGLISSAMPLERPROC)load("glIsSampler");
	glBindSampler = (PFNGLBINDSAMPLERPROC)load("glBindSampler");
	glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC)load("glSamplerParameteri");
	glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC)load("glSamplerParameteriv");
	glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC)load("glSamplerParameterf");
	glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC)load("glSamplerParameterfv");
	glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC)load("glSamplerParameterIiv");
	glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC)load("glSamplerParameterIuiv");
	glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)load("glGetSamplerParameteriv");
	glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC)load("glGetSamplerParameterIiv");
	glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)load("glGetSamplerParameterfv");
	glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC)load("glGetSamplerParameterIuiv");
	glQueryCounter = (PFNGLQUERYCOUNTERPROC)load("glQueryCounter");
	glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC)load("glGetQueryObjecti64v");
	glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC)load("glGetQueryObjectui64v");
	glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC)load("glVertexAttribDivisor");
	glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC)load("glVertexAttribP1ui");
	glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC)load("glVertexAttribP1uiv");
	glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC)load("glVertexAttribP2ui");
	glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC)load("glVertexAttribP2uiv");
	glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC)load("glVertexAttribP3ui");
	glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC)load("glVertexAttribP3uiv");
	glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC)load("glVertexAttribP4ui");
	glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC)load("glVertexAttribP4uiv");
	glVertexP2ui = (PFNGLVERTEXP2UIPROC)load("glVertexP2ui");
	glVertexP2uiv = (PFNGLVERTEXP2UIVPROC)load("glVertexP2uiv");
	glVertexP3ui = (PFNGLVERTEXP3UIPROC)load("glVertexP3ui");
	glVertexP3uiv = (PFNGLVERTEXP3UIVPROC)load("glVertexP3uiv");
	glVertexP4ui = (PFNGLVERTEXP4UIPROC)load("glVertexP4ui");
	glVertexP4uiv = (PFNGLVERTEXP4UIVPROC)load("glVertexP4uiv");
	glTexCoordP1ui = (PFNGLTEXCOORDP1UIPROC)load("glTexCoordP1ui");
	glTexCoordP1uiv = (PFNGLTEXCOORDP1UIVPROC)load("glTexCoordP1uiv");
	glTexCoordP2ui = (PFNGLTEXCOORDP2UIPROC)load("glTexCoordP2ui");
	glTexCoordP2uiv = (PFNGLTEXCOORDP2UIVPROC)load("glTexCoordP2uiv");
	glTexCoordP3ui = (PFNGLTEXCOORDP3UIPROC)load("glTexCoordP3ui");
	glTexCoordP3uiv = (PFNGLTEXCOORDP3UIVPROC)load("glTexCoordP3uiv");
	glTexCoordP4ui = (PFNGLTEXCOORDP4UIPROC)load("glTexCoordP4ui");
	glTexCoordP4uiv = (PFNGLTEXCOORDP4UIVPROC)load("glTexCoordP4uiv");
	glMultiTexCoordP1ui = (PFNGLMULTITEXCOORDP1UIPROC)load("glMultiTexCoordP1ui");
	glMultiTexCoordP1uiv = (PFNGLMULTITEXCOORDP1UIVPROC)load("glMultiTexCoordP1uiv");
	glMultiTexCoordP2ui = (PFNGLMULTITEXCOORDP2UIPROC)load("glMultiTexCoordP2ui");
	glMultiTexCoordP2uiv = (PFNGLMULTITEXCOORDP2UIVPROC)load("glMultiTexCoordP2uiv");
	glMultiTexCoordP3ui = (PFNGLMULTITEXCOORDP3UIPROC)load("glMultiTexCoordP3ui");
	glMultiTexCoordP3uiv = (PFNGLMULTITEXCOORDP3UIVPROC)load("glMultiTexCoordP3uiv");
	glMultiTexCoordP4ui = (PFNGLMULTITEXCOORDP4UIPROC)load("glMultiTexCoordP4ui");
	glMultiTexCoordP4uiv = (PFNGLMULTITEXCOORDP4UIVPROC)load("glMultiTexCoordP4uiv");
	glNormalP3ui = (PFNGLNORMALP3UIPROC)load("glNormalP3ui");
	glNormalP3uiv = (PFNGLNORMALP3UIVPROC)load("glNormalP3uiv");
	glColorP3ui = (PFNGLCOLORP3UIPROC)load("glColorP3ui");
	glColorP3uiv = (PFNGLCOLORP3UIVPROC)load("glColorP3uiv");
	glColorP4ui = (PFNGLCOLORP4UIPROC)load("glColorP4ui");
	glColorP4uiv = (PFNGLCOLORP4UIVPROC)load("glColorP4uiv");
	glSecondaryColorP3ui = (PFNGLSECONDARYCOLORP3UIPROC)load("glSecondaryColorP3ui");
	glSecondaryColorP3uiv = (PFNGLSECONDARYCOLORP3UIVPROC)load("glSecondaryColorP3uiv");
}
	void load_GL_VERSION_4_0(GLADloadproc load) {
	if (!GL_VERSION_4_0) return;
	glMinSampleShading = (PFNGLMINSAMPLESHADINGPROC)load("glMinSampleShading");
	glBlendEquationi = (PFNGLBLENDEQUATIONIPROC)load("glBlendEquationi");
	glBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC)load("glBlendEquationSeparatei");
	glBlendFunci = (PFNGLBLENDFUNCIPROC)load("glBlendFunci");
	glBlendFuncSeparatei = (PFNGLBLENDFUNCSEPARATEIPROC)load("glBlendFuncSeparatei");
	glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC)load("glDrawArraysIndirect");
	glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC)load("glDrawElementsIndirect");
	glUniform1d = (PFNGLUNIFORM1DPROC)load("glUniform1d");
	glUniform2d = (PFNGLUNIFORM2DPROC)load("glUniform2d");
	glUniform3d = (PFNGLUNIFORM3DPROC)load("glUniform3d");
	glUniform4d = (PFNGLUNIFORM4DPROC)load("glUniform4d");
	glUniform1dv = (PFNGLUNIFORM1DVPROC)load("glUniform1dv");
	glUniform2dv = (PFNGLUNIFORM2DVPROC)load("glUniform2dv");
	glUniform3dv = (PFNGLUNIFORM3DVPROC)load("glUniform3dv");
	glUniform4dv = (PFNGLUNIFORM4DVPROC)load("glUniform4dv");
	glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC)load("glUniformMatrix2dv");
	glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC)load("glUniformMatrix3dv");
	glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC)load("glUniformMatrix4dv");
	glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC)load("glUniformMatrix2x3dv");
	glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC)load("glUniformMatrix2x4dv");
	glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC)load("glUniformMatrix3x2dv");
	glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC)load("glUniformMatrix3x4dv");
	glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC)load("glUniformMatrix4x2dv");
	glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC)load("glUniformMatrix4x3dv");
	glGetUniformdv = (PFNGLGETUNIFORMDVPROC)load("glGetUniformdv");
	glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)load("glGetSubroutineUniformLocation");
	glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC)load("glGetSubroutineIndex");
	glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)load("glGetActiveSubroutineUniformiv");
	glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)load("glGetActiveSubroutineUniformName");
	glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC)load("glGetActiveSubroutineName");
	glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC)load("glUniformSubroutinesuiv");
	glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC)load("glGetUniformSubroutineuiv");
	glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC)load("glGetProgramStageiv");
	glPatchParameteri = (PFNGLPATCHPARAMETERIPROC)load("glPatchParameteri");
	glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC)load("glPatchParameterfv");
	glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC)load("glBindTransformFeedback");
	glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC)load("glDeleteTransformFeedbacks");
	glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC)load("glGenTransformFeedbacks");
	glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC)load("glIsTransformFeedback");
	glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC)load("glPauseTransformFeedback");
	glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC)load("glResumeTransformFeedback");
	glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC)load("glDrawTransformFeedback");
	glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)load("glDrawTransformFeedbackStream");
	glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC)load("glBeginQueryIndexed");
	glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC)load("glEndQueryIndexed");
	glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC)load("glGetQueryIndexediv");
}
	void load_GL_VERSION_4_1(GLADloadproc load) {
	if (!GL_VERSION_4_1) return;
	glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC)load("glReleaseShaderCompiler");
	glShaderBinary = (PFNGLSHADERBINARYPROC)load("glShaderBinary");
	glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC)load("glGetShaderPrecisionFormat");
	glDepthRangef = (PFNGLDEPTHRANGEFPROC)load("glDepthRangef");
	glClearDepthf = (PFNGLCLEARDEPTHFPROC)load("glClearDepthf");
	glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC)load("glGetProgramBinary");
	glProgramBinary = (PFNGLPROGRAMBINARYPROC)load("glProgramBinary");
	glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC)load("glProgramParameteri");
	glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC)load("glUseProgramStages");
	glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC)load("glActiveShaderProgram");
	glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC)load("glCreateShaderProgramv");
	glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC)load("glBindProgramPipeline");
	glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC)load("glDeleteProgramPipelines");
	glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC)load("glGenProgramPipelines");
	glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC)load("glIsProgramPipeline");
	glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC)load("glGetProgramPipelineiv");
	glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC)load("glProgramParameteri");
	glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC)load("glProgramUniform1i");
	glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC)load("glProgramUniform1iv");
	glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC)load("glProgramUniform1f");
	glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC)load("glProgramUniform1fv");
	glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC)load("glProgramUniform1d");
	glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC)load("glProgramUniform1dv");
	glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC)load("glProgramUniform1ui");
	glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC)load("glProgramUniform1uiv");
	glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC)load("glProgramUniform2i");
	glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC)load("glProgramUniform2iv");
	glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC)load("glProgramUniform2f");
	glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC)load("glProgramUniform2fv");
	glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC)load("glProgramUniform2d");
	glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC)load("glProgramUniform2dv");
	glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC)load("glProgramUniform2ui");
	glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC)load("glProgramUniform2uiv");
	glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC)load("glProgramUniform3i");
	glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC)load("glProgramUniform3iv");
	glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC)load("glProgramUniform3f");
	glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC)load("glProgramUniform3fv");
	glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC)load("glProgramUniform3d");
	glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC)load("glProgramUniform3dv");
	glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC)load("glProgramUniform3ui");
	glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC)load("glProgramUniform3uiv");
	glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC)load("glProgramUniform4i");
	glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC)load("glProgramUniform4iv");
	glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC)load("glProgramUniform4f");
	glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC)load("glProgramUniform4fv");
	glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC)load("glProgramUniform4d");
	glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC)load("glProgramUniform4dv");
	glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC)load("glProgramUniform4ui");
	glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC)load("glProgramUniform4uiv");
	glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC)load("glProgramUniformMatrix2fv");
	glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC)load("glProgramUniformMatrix3fv");
	glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC)load("glProgramUniformMatrix4fv");
	glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC)load("glProgramUniformMatrix2dv");
	glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC)load("glProgramUniformMatrix3dv");
	glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC)load("glProgramUniformMatrix4dv");
	glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)load("glProgramUniformMatrix2x3fv");
	glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)load("glProgramUniformMatrix3x2fv");
	glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)load("glProgramUniformMatrix2x4fv");
	glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)load("glProgramUniformMatrix4x2fv");
	glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)load("glProgramUniformMatrix3x4fv");
	glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)load("glProgramUniformMatrix4x3fv");
	glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)load("glProgramUniformMatrix2x3dv");
	glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)load("glProgramUniformMatrix3x2dv");
	glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)load("glProgramUniformMatrix2x4dv");
	glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)load("glProgramUniformMatrix4x2dv");
	glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)load("glProgramUniformMatrix3x4dv");
	glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)load("glProgramUniformMatrix4x3dv");
	glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC)load("glValidateProgramPipeline");
	glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC)load("glGetProgramPipelineInfoLog");
	glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC)load("glVertexAttribL1d");
	glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC)load("glVertexAttribL2d");
	glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC)load("glVertexAttribL3d");
	glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC)load("glVertexAttribL4d");
	glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC)load("glVertexAttribL1dv");
	glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC)load("glVertexAttribL2dv");
	glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC)load("glVertexAttribL3dv");
	glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC)load("glVertexAttribL4dv");
	glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC)load("glVertexAttribLPointer");
	glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC)load("glGetVertexAttribLdv");
	glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC)load("glViewportArrayv");
	glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC)load("glViewportIndexedf");
	glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC)load("glViewportIndexedfv");
	glScissorArrayv = (PFNGLSCISSORARRAYVPROC)load("glScissorArrayv");
	glScissorIndexed = (PFNGLSCISSORINDEXEDPROC)load("glScissorIndexed");
	glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC)load("glScissorIndexedv");
	glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC)load("glDepthRangeArrayv");
	glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC)load("glDepthRangeIndexed");
	glGetFloati_v = (PFNGLGETFLOATI_VPROC)load("glGetFloati_v");
	glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC)load("glGetDoublei_v");
}
	void load_GL_VERSION_4_2(GLADloadproc load) {
	if (!GL_VERSION_4_2) return;
	glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)load("glDrawArraysInstancedBaseInstance");
	glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)load("glDrawElementsInstancedBaseInstance");
	glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)load("glDrawElementsInstancedBaseVertexBaseInstance");
	glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC)load("glGetInternalformativ");
	glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)load("glGetActiveAtomicCounterBufferiv");
	glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC)load("glBindImageTexture");
	glMemoryBarrier = (PFNGLMEMORYBARRIERPROC)load("glMemoryBarrier");
	glTexStorage1D = (PFNGLTEXSTORAGE1DPROC)load("glTexStorage1D");
	glTexStorage2D = (PFNGLTEXSTORAGE2DPROC)load("glTexStorage2D");
	glTexStorage3D = (PFNGLTEXSTORAGE3DPROC)load("glTexStorage3D");
	glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)load("glDrawTransformFeedbackInstanced");
	glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)load("glDrawTransformFeedbackStreamInstanced");
}
	void load_GL_VERSION_4_3(GLADloadproc load) {
	if (!GL_VERSION_4_3) return;
	glClearBufferData = (PFNGLCLEARBUFFERDATAPROC)load("glClearBufferData");
	glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC)load("glClearBufferSubData");
	glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC)load("glDispatchCompute");
	glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC)load("glDispatchComputeIndirect");
	glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC)load("glCopyImageSubData");
	glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC)load("glFramebufferParameteri");
	glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC)load("glGetFramebufferParameteriv");
	glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC)load("glGetInternalformati64v");
	glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC)load("glInvalidateTexSubImage");
	glInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC)load("glInvalidateTexImage");
	glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC)load("glInvalidateBufferSubData");
	glInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC)load("glInvalidateBufferData");
	glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC)load("glInvalidateFramebuffer");
	glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC)load("glInvalidateSubFramebuffer");
	glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC)load("glMultiDrawArraysIndirect");
	glMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC)load("glMultiDrawElementsIndirect");
	glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC)load("glGetProgramInterfaceiv");
	glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC)load("glGetProgramResourceIndex");
	glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC)load("glGetProgramResourceName");
	glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC)load("glGetProgramResourceiv");
	glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC)load("glGetProgramResourceLocation");
	glGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)load("glGetProgramResourceLocationIndex");
	glShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC)load("glShaderStorageBlockBinding");
	glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC)load("glTexBufferRange");
	glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC)load("glTexStorage2DMultisample");
	glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC)load("glTexStorage3DMultisample");
	glTextureView = (PFNGLTEXTUREVIEWPROC)load("glTextureView");
	glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC)load("glBindVertexBuffer");
	glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC)load("glVertexAttribFormat");
	glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC)load("glVertexAttribIFormat");
	glVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC)load("glVertexAttribLFormat");
	glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC)load("glVertexAttribBinding");
	glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC)load("glVertexBindingDivisor");
	glDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLPROC)load("glDebugMessageControl");
	glDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTPROC)load("glDebugMessageInsert");
	glDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKPROC)load("glDebugMessageCallback");
	glGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGPROC)load("glGetDebugMessageLog");
	glPushDebugGroup = (PFNGLPUSHDEBUGGROUPPROC)load("glPushDebugGroup");
	glPopDebugGroup = (PFNGLPOPDEBUGGROUPPROC)load("glPopDebugGroup");
	glObjectLabel = (PFNGLOBJECTLABELPROC)load("glObjectLabel");
	glGetObjectLabel = (PFNGLGETOBJECTLABELPROC)load("glGetObjectLabel");
	glObjectPtrLabel = (PFNGLOBJECTPTRLABELPROC)load("glObjectPtrLabel");
	glGetObjectPtrLabel = (PFNGLGETOBJECTPTRLABELPROC)load("glGetObjectPtrLabel");
	glGetPointerv = (PFNGLGETPOINTERVPROC)load("glGetPointerv");
}
	void load_GL_VERSION_4_4(GLADloadproc load) {
	if (!GL_VERSION_4_4) return;
	glBufferStorage = (PFNGLBUFFERSTORAGEPROC)load("glBufferStorage");
	glClearTexImage = (PFNGLCLEARTEXIMAGEPROC)load("glClearTexImage");
	glClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC)load("glClearTexSubImage");
	glBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC)load("glBindBuffersBase");
	glBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC)load("glBindBuffersRange");
	glBindTextures = (PFNGLBINDTEXTURESPROC)load("glBindTextures");
	glBindSamplers = (PFNGLBINDSAMPLERSPROC)load("glBindSamplers");
	glBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC)load("glBindImageTextures");
	glBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC)load("glBindVertexBuffers");
}
	void load_GL_VERSION_4_5(GLADloadproc load) {
	if (!GL_VERSION_4_5) return;
	glClipControl = (PFNGLCLIPCONTROLPROC)load("glClipControl");
	glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC)load("glCreateTransformFeedbacks");
	glTransformFeedbackBufferBase = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC)load("glTransformFeedbackBufferBase");
	glTransformFeedbackBufferRange = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC)load("glTransformFeedbackBufferRange");
	glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC)load("glGetTransformFeedbackiv");
	glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC)load("glGetTransformFeedbacki_v");
	glGetTransformFeedbacki64_v = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC)load("glGetTransformFeedbacki64_v");
	glCreateBuffers = (PFNGLCREATEBUFFERSPROC)load("glCreateBuffers");
	glNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC)load("glNamedBufferStorage");
	glNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC)load("glNamedBufferData");
	glNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC)load("glNamedBufferSubData");
	glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC)load("glCopyNamedBufferSubData");
	glClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC)load("glClearNamedBufferData");
	glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC)load("glClearNamedBufferSubData");
	glMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC)load("glMapNamedBuffer");
	glMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC)load("glMapNamedBufferRange");
	glUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC)load("glUnmapNamedBuffer");
	glFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC)load("glFlushMappedNamedBufferRange");
	glGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC)load("glGetNamedBufferParameteriv");
	glGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC)load("glGetNamedBufferParameteri64v");
	glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC)load("glGetNamedBufferPointerv");
	glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC)load("glGetNamedBufferSubData");
	glCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC)load("glCreateFramebuffers");
	glNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC)load("glNamedFramebufferRenderbuffer");
	glNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC)load("glNamedFramebufferParameteri");
	glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC)load("glNamedFramebufferTexture");
	glNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC)load("glNamedFramebufferTextureLayer");
	glNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC)load("glNamedFramebufferDrawBuffer");
	glNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC)load("glNamedFramebufferDrawBuffers");
	glNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC)load("glNamedFramebufferReadBuffer");
	glInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC)load("glInvalidateNamedFramebufferData");
	glInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC)load("glInvalidateNamedFramebufferSubData");
	glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC)load("glClearNamedFramebufferiv");
	glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC)load("glClearNamedFramebufferuiv");
	glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC)load("glClearNamedFramebufferfv");
	glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC)load("glClearNamedFramebufferfi");
	glBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC)load("glBlitNamedFramebuffer");
	glCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC)load("glCheckNamedFramebufferStatus");
	glGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC)load("glGetNamedFramebufferParameteriv");
	glGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC)load("glGetNamedFramebufferAttachmentParameteriv");
	glCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC)load("glCreateRenderbuffers");
	glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC)load("glNamedRenderbufferStorage");
	glNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC)load("glNamedRenderbufferStorageMultisample");
	glGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC)load("glGetNamedRenderbufferParameteriv");
	glCreateTextures = (PFNGLCREATETEXTURESPROC)load("glCreateTextures");
	glTextureBuffer = (PFNGLTEXTUREBUFFERPROC)load("glTextureBuffer");
	glTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC)load("glTextureBufferRange");
	glTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC)load("glTextureStorage1D");
	glTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC)load("glTextureStorage2D");
	glTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC)load("glTextureStorage3D");
	glTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC)load("glTextureStorage2DMultisample");
	glTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC)load("glTextureStorage3DMultisample");
	glTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC)load("glTextureSubImage1D");
	glTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC)load("glTextureSubImage2D");
	glTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC)load("glTextureSubImage3D");
	glCompressedTextureSubImage1D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC)load("glCompressedTextureSubImage1D");
	glCompressedTextureSubImage2D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC)load("glCompressedTextureSubImage2D");
	glCompressedTextureSubImage3D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC)load("glCompressedTextureSubImage3D");
	glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC)load("glCopyTextureSubImage1D");
	glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC)load("glCopyTextureSubImage2D");
	glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC)load("glCopyTextureSubImage3D");
	glTextureParameterf = (PFNGLTEXTUREPARAMETERFPROC)load("glTextureParameterf");
	glTextureParameterfv = (PFNGLTEXTUREPARAMETERFVPROC)load("glTextureParameterfv");
	glTextureParameteri = (PFNGLTEXTUREPARAMETERIPROC)load("glTextureParameteri");
	glTextureParameterIiv = (PFNGLTEXTUREPARAMETERIIVPROC)load("glTextureParameterIiv");
	glTextureParameterIuiv = (PFNGLTEXTUREPARAMETERIUIVPROC)load("glTextureParameterIuiv");
	glTextureParameteriv = (PFNGLTEXTUREPARAMETERIVPROC)load("glTextureParameteriv");
	glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC)load("glGenerateTextureMipmap");
	glBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC)load("glBindTextureUnit");
	glGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC)load("glGetTextureImage");
	glGetCompressedTextureImage = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC)load("glGetCompressedTextureImage");
	glGetTextureLevelParameterfv = (PFNGLGETTEXTURELEVELPARAMETERFVPROC)load("glGetTextureLevelParameterfv");
	glGetTextureLevelParameteriv = (PFNGLGETTEXTURELEVELPARAMETERIVPROC)load("glGetTextureLevelParameteriv");
	glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC)load("glGetTextureParameterfv");
	glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC)load("glGetTextureParameterIiv");
	glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC)load("glGetTextureParameterIuiv");
	glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC)load("glGetTextureParameteriv");
	glCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC)load("glCreateVertexArrays");
	glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC)load("glDisableVertexArrayAttrib");
	glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC)load("glEnableVertexArrayAttrib");
	glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC)load("glVertexArrayElementBuffer");
	glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC)load("glVertexArrayVertexBuffer");
	glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC)load("glVertexArrayVertexBuffers");
	glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC)load("glVertexArrayAttribBinding");
	glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC)load("glVertexArrayAttribFormat");
	glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC)load("glVertexArrayAttribIFormat");
	glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC)load("glVertexArrayAttribLFormat");
	glVertexArrayBindingDivisor = (PFNGLVERTEXARRAYBINDINGDIVISORPROC)load("glVertexArrayBindingDivisor");
	glGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC)load("glGetVertexArrayiv");
	glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC)load("glGetVertexArrayIndexediv");
	glGetVertexArrayIndexed64iv = (PFNGLGETVERTEXARRAYINDEXED64IVPROC)load("glGetVertexArrayIndexed64iv");
	glCreateSamplers = (PFNGLCREATESAMPLERSPROC)load("glCreateSamplers");
	glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC)load("glCreateProgramPipelines");
	glCreateQueries = (PFNGLCREATEQUERIESPROC)load("glCreateQueries");
	glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC)load("glGetQueryBufferObjecti64v");
	glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC)load("glGetQueryBufferObjectiv");
	glGetQueryBufferObjectui64v = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC)load("glGetQueryBufferObjectui64v");
	glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC)load("glGetQueryBufferObjectuiv");
	glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC)load("glMemoryBarrierByRegion");
	glGetTextureSubImage = (PFNGLGETTEXTURESUBIMAGEPROC)load("glGetTextureSubImage");
	glGetCompressedTextureSubImage = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC)load("glGetCompressedTextureSubImage");
	glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC)load("glGetGraphicsResetStatus");
	glGetnCompressedTexImage = (PFNGLGETNCOMPRESSEDTEXIMAGEPROC)load("glGetnCompressedTexImage");
	glGetnTexImage = (PFNGLGETNTEXIMAGEPROC)load("glGetnTexImage");
	glGetnUniformdv = (PFNGLGETNUNIFORMDVPROC)load("glGetnUniformdv");
	glGetnUniformfv = (PFNGLGETNUNIFORMFVPROC)load("glGetnUniformfv");
	glGetnUniformiv = (PFNGLGETNUNIFORMIVPROC)load("glGetnUniformiv");
	glGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC)load("glGetnUniformuiv");
	glReadnPixels = (PFNGLREADNPIXELSPROC)load("glReadnPixels");
	glGetnMapdv = (PFNGLGETNMAPDVPROC)load("glGetnMapdv");
	glGetnMapfv = (PFNGLGETNMAPFVPROC)load("glGetnMapfv");
	glGetnMapiv = (PFNGLGETNMAPIVPROC)load("glGetnMapiv");
	glGetnPixelMapfv = (PFNGLGETNPIXELMAPFVPROC)load("glGetnPixelMapfv");
	glGetnPixelMapuiv = (PFNGLGETNPIXELMAPUIVPROC)load("glGetnPixelMapuiv");
	glGetnPixelMapusv = (PFNGLGETNPIXELMAPUSVPROC)load("glGetnPixelMapusv");
	glGetnPolygonStipple = (PFNGLGETNPOLYGONSTIPPLEPROC)load("glGetnPolygonStipple");
	glGetnColorTable = (PFNGLGETNCOLORTABLEPROC)load("glGetnColorTable");
	glGetnConvolutionFilter = (PFNGLGETNCONVOLUTIONFILTERPROC)load("glGetnConvolutionFilter");
	glGetnSeparableFilter = (PFNGLGETNSEPARABLEFILTERPROC)load("glGetnSeparableFilter");
	glGetnHistogram = (PFNGLGETNHISTOGRAMPROC)load("glGetnHistogram");
	glGetnMinmax = (PFNGLGETNMINMAXPROC)load("glGetnMinmax");
	glTextureBarrier = (PFNGLTEXTUREBARRIERPROC)load("glTextureBarrier");
}
	void load_GL_VERSION_4_6(GLADloadproc load) {
	if (!GL_VERSION_4_6) return;
	glSpecializeShader = (PFNGLSPECIALIZESHADERPROC)load("glSpecializeShader");
	glMultiDrawArraysIndirectCount = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC)load("glMultiDrawArraysIndirectCount");
	glMultiDrawElementsIndirectCount = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC)load("glMultiDrawElementsIndirectCount");
	glPolygonOffsetClamp = (PFNGLPOLYGONOFFSETCLAMPPROC)load("glPolygonOffsetClamp");
}
	int find_extensionsGL(void) {
		if (!get_exts()) return 0;
		(void)&has_ext;
		free_exts();
		return 1;
	}

	void find_coreGL(void) {
		int i, major, minor;
		const char* version;
		const char* prefixes[] = {
			"OpenGL ES-CM ",
			"OpenGL ES-CL ",
			"OpenGL ES ",
			nullptr
		};

		version = (const char*)glGetString(GL_VERSION);
		if (!version) return;
		for (i = 0; prefixes[i]; i++) {
			const size_t length = strlen(prefixes[i]);
			if (strncmp(version, prefixes[i], length) == 0) {
				version += length;
				break;
			}
		}
		sscanf_s(version, "%d.%d", &major, &minor);
		GLVersion.major = major; GLVersion.minor = minor;
		max_loaded_major = major; max_loaded_minor = minor;
		GL_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
		GL_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
		GL_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
		GL_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
		GL_VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;
		GL_VERSION_1_5 = (major == 1 && minor >= 5) || major > 1;
		GL_VERSION_2_0 = (major == 2 && minor >= 0) || major > 2;
		GL_VERSION_2_1 = (major == 2 && minor >= 1) || major > 2;
		GL_VERSION_3_0 = (major == 3 && minor >= 0) || major > 3;
		GL_VERSION_3_1 = (major == 3 && minor >= 1) || major > 3;
		GL_VERSION_3_2 = (major == 3 && minor >= 2) || major > 3;
		GL_VERSION_3_3 = (major == 3 && minor >= 3) || major > 3;
		GL_VERSION_4_0 = (major == 4 && minor >= 0) || major > 4;
		GL_VERSION_4_1 = (major == 4 && minor >= 1) || major > 4;
		GL_VERSION_4_2 = (major == 4 && minor >= 2) || major > 4;
		GL_VERSION_4_3 = (major == 4 && minor >= 3) || major > 4;
		GL_VERSION_4_4 = (major == 4 && minor >= 4) || major > 4;
		GL_VERSION_4_5 = (major == 4 && minor >= 5) || major > 4;
		GL_VERSION_4_6 = (major == 4 && minor >= 6) || major > 4;
		if (GLVersion.major > 4 || (GLVersion.major >= 4 && GLVersion.minor >= 6)) {
			max_loaded_major = 4;
			max_loaded_minor = 6;
		}
	}
	export int gladLoadGLLoader(GLADloadproc load) {
		GLVersion.major = 0; GLVersion.minor = 0;
		glGetString = (PFNGLGETSTRINGPROC)load("glGetString");
		if (glGetString == nullptr) return 0;
		if (glGetString(GL_VERSION) == nullptr) return 0;

		find_coreGL();

		load_GL_VERSION_1_0(load);
		load_GL_VERSION_1_1(load);
		load_GL_VERSION_1_2(load);
		load_GL_VERSION_1_3(load);
		load_GL_VERSION_1_4(load);
		load_GL_VERSION_1_5(load);
		load_GL_VERSION_2_0(load);
		load_GL_VERSION_2_1(load);
		load_GL_VERSION_3_0(load);
		load_GL_VERSION_3_1(load);
		load_GL_VERSION_3_2(load);
		load_GL_VERSION_3_3(load);
		load_GL_VERSION_4_0(load);
		load_GL_VERSION_4_1(load);
		load_GL_VERSION_4_2(load);
		load_GL_VERSION_4_3(load);
		load_GL_VERSION_4_4(load);
		load_GL_VERSION_4_5(load);
		load_GL_VERSION_4_6(load);

		if (!find_extensionsGL()) return 0;
		return GLVersion.major != 0 || GLVersion.minor != 0;
	}
	int gladLoadGL(void) {
		int status = 0;
		if (open_gl()) {
			status = gladLoadGLLoader(&get_proc);
			close_gl();
		}
		return status;
	}

}


