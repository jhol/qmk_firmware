#include "hnah40rgb.h"
#ifdef RGB_MATRIX_ENABLE
#if defined (ansi)
led_config_t g_led_config = { {
  //Key Matrix to LED Index
  {0,         1,         2,           3,          4,          5,          6,          7,          8,          9,          10},
  {22,        21,        20,          19,         18,         17,         16,         15,         14,         13,         12 },
  {23,        24,        25,          26,         27,         28,         29,         30,         31,         NO_LED,     34},
  {43,        42,        41,          NO_LED,     NO_LED,     NO_LED,     38,         NO_LED,     36,         35,         11}
}, {
  //LED Index to Physical Positon
  {  0,  0},  { 20,  0},  { 40, 0 },  { 61, 0 },  { 81, 0},   { 101, 0},  { 122, 0},  { 142, 0},  { 162, 0},  { 183, 0},  { 224, 0}, { 224, 0},
  {224, 21},  {183, 21},  {162,21 },  {142, 21},  {122,21},   { 101,21},  { 81 ,21},  { 61 ,21},  { 40 ,21},  { 20 ,21},  { 0  ,21},
  {  0, 42},  { 20, 42},  { 40,42 },  { 61, 42},  { 81,42},   { 101,42},  { 122,42},  { 142,42},  { 162,42},  { 183,42},  { 224,42},
  {224, 64},  {224, 64},  {181,64 },  {162, 64},  {122,64},   {101,64},    { 61,64},   { 40,64},   { 20,64},   { 0,64},
  { 0,64},    { 0,0},     { 224,10},   { 224,18},  { 224,30},  { 224,47},
}, {
  1,          4,         4,          4,         4,         4,          4,          4,          4,          4,          1,
  1,          4,         4,          4,         4,         4,          4,          4,          4,          4,          1,
  1,          4,         4,          4,         4,         4,          4,          4,          4,          4,          1,
  1,          1,         1,          1,         1,         1,          1,          1,          1,          1,          1,
  1,          1,         1,          1,         1,         1,
} };

#else
led_config_t g_led_config = { {
  //Key Matrix to LED Index
  {0,         1,         2,           3,          4,          5,          6,          7,          8,          9,          10},
  {22,        21,        20,          19,         18,         17,         16,         15,         14,         13,         12 },
  {23,        24,        25,          26,         27,         28,         29,         30,         31,         32,         34},
  {43,        42,        41,          NO_LED,     40,         39,         38,         37,         36,         35,         11}
}, {
  //LED Index to Physical Positon
  {  0,  0},  { 20,  0},  { 40, 0 },  { 61, 0 },  { 81, 0},   { 101, 0},  { 122, 0},  { 142, 0},  { 162, 0},  { 183, 0},  { 224, 0}, { 224, 0},
  {224, 21},  {183, 21},  {162,21 },  {142, 21},  {122,21},   { 101,21},  { 81 ,21},  { 61 ,21},  { 40 ,21},  { 20 ,21},  { 0  ,21},
  {  0, 42},  { 20, 42},  { 40,42 },  { 61, 42},  { 81,42},   { 101,42},  { 122,42},  { 142,42},  { 162,42},  { 183,42},  { 224,42},
  {224, 64},  {224, 64},  {181,64 },  {162, 64},  {122,64},   {101,64},    { 61,64},   { 40,64},   { 20,64},   { 0,64},
  { 0,64},    { 0,0},     { 224,10},   { 224,18},  { 224,30},  { 224,47},
}, {
  1,          4,         4,          4,         4,         4,          4,          4,          4,          4,          4,
  1,          1,         4,          4,         4,         4,          4,          4,          4,          4,          4,
  1,          1,         4,          4,         4,         4,          4,          4,          4,          4,          4,
  1,          1,         1,          1,         1,         1,          1,          1,          1,          1,          1,
  1,          1,         1,          1,         1,         1,
} };
#endif
#endif