/*
 * Copyright 2020 Christopher Courtney <drashna@live.com> (@drashna)
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Publicw License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

 #include "gurken.h"

 // clang-format off
 #ifdef RGB_MATRIX_ENABLE

 /**
  * \brief LEDs index.
  *
  * ╭────────────────────────╮                 ╭────────────────────────╮
  *     6  5  4  3  2  1  0                       45  44  37  36  29
  * ├────────────────────────┤                 ├────────────────────────┤
  *    13 12 11 10  9  8  7                     50  46  43  38  35  30
  * ├────────────────────────┤                 ├────────────────────────┤
  *    20 19 18 17 16 15 14                     51  47  42  39  34  31
  * ├────────────────────────┤                 ├────────────────────────┤
  *    26 25 24 23 22 21                        52  48  41  40  33  32
  * ├────────────────────────┤                 ├────────────────────────┤
  *             33 32 31                        52  48  41  40  33  32
  * ╰────────────────────────╯                 ╰────────────────────────╯
  *                        27 28 30      53  54  XX
  *                              29      XX
  *                     ╰────────────╯ ╰────────────╯
  *
  * Note: the LED config simulates 58 LEDs instead of the actual 56 to prevent
  * confusion when testing LEDs during assembly when handedness is not set
  * correctly.  Those fake LEDs are bound to the physical bottom-left corner.
  */
 led_config_t g_led_config = { {
     /* Key Matrix to LED index. */
     // Left split.
     {      6,      5,      4,     3,      2,       1,      0 }, // Num row
     {      13,    12,     11,     10,     9,       8,      7 }, // Top row
     {      20,    19,     18,     17,     16,     15,     14 }, // Middle row
     {      26,    25,     24,     23,     22,     21         }, // Bottom row
     {      33,    32,     31,     27,     28,     29,     30 }, // Thumb cluster
     // Right split.
     {     34,     35,     36,     37,     38,     39,     40 }, // Num row
     {     41,     42,     43,     44,     45,     46,     47 }, // Top row
     {     48,     49,     50,     51,     52,     53,     54 }, // Middle row
     {             55,     56,     57,     58,     59,     60 }, // Bottom row
     {     61,     62,     63,     64,     65,     66,     67 }, // Thumb cluster
 }, {
     /* LED index to physical position. */
     // Left split.
     {98,  0},
     {84,  2},
     {70,  0},
     {56,  1},
     {42,  1},
     {28,  2},
     {14,  2},

     {98,  9},
     {84,  11},
     {70,  9},
     {56,  10},
     {42,  10},
     {28,  11},
     {14,  11},

     {98,  18},
     {84,  20},
     {70,  18},
     {56,  19},
     {42,  19},
     {28,  20},
     {14,  20},

     {84,  29},
     {70,  27},
     {56,  28},
     {42,  28},
     {28,  29},
     {14,  29},

     {84,  47},
     {98,  56},
     {108,  62},
     {112,  56},
     {70,  38},
     {56,  38},
     {42,  38},

     // right side
     {140,  2},
     {154,  2},
     {168,  1},
     {182,  1},
     {196,  0},
     {210,  2},
     {224,  1},

     {140,  11},
     {154,  11},
     {168,  10},
     {182,  10},
     {196,  9},
     {210,  11},
     {224,  9},

     {140,  18},
     {154,  20},
     {168,  18},
     {182,  19},
     {196,  19},
     {210,  20},
     {224,  20},

     {154,  29},
     {168,  27},
     {182,  28},
     {196,  28},
     {210,  29},
     {224,  29},

     {126,  38},
     {130,  38},
     {140,  38},
     {154,  56},
     {168,  62},
     {182,  56},
     {196,  4}
 }, {
     /* LED index to flag. */
     // Left split.
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
     
     
     // Right split.
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,    
 } };
 #endif
 // clang-format on
 