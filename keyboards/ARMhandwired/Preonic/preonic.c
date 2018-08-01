#include "preonic.h"

/* Default Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  #   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   '  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |   \  | Win  | Alt  |Lower |    Space    |Raise | Left |  Up  | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */

const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |      G location
 *   |  |      |      B location
 *   |  |      |      | */
    {0, C1_1,  C2_1,  C3_1},	// "ESC"
    {0, C1_2,  C2_2,  C3_2},	// "1"
    {0, C1_3,  C2_3,  C3_3},	// "2"
    {0, C1_4,  C2_4,  C3_4},	// "3"
    {0, C1_5,  C2_5,  C3_5},	// "4"
    {0, C1_6,  C2_6,  C3_6},	// "5"
    {1, C1_1,  C2_1,  C3_1},	// "6"
    {1, C1_2,  C2_2,  C3_2},	// "7"
    {1, C1_3,  C2_3,  C3_3},	// "8"
    {1, C1_4,  C2_4,  C3_4},	// "9"
    {1, C1_5,  C2_5,  C3_5},	// "0"
    {1, C1_6,  C2_6,  C3_6},	// "BKSP"

    {0, C1_7,  C2_7,  C3_7},	// "TAB"
    {0, C1_8,  C2_8,  C3_8},	// "Q"
    {0, C1_9,  C2_9,  C3_9},	// "W"
    {0, C1_10,  C2_10,  C3_10},	// "E"
    {0, C1_11,  C2_11,  C3_12},	// "R"
    {0, C1_12,  C2_12,  C3_12},	// "T"
    {1, C1_7,  C2_7,  C3_7},	// "Y"
    {1, C1_8,  C2_8,  C3_8},	// "U"
    {1, C1_9,  C2_9,  C3_9},	// "I"
    {1, C1_10,  C2_10,  C3_10},	// "O"
    {1, C1_11,  C2_11,  C3_11},	// "P"
    {1, C1_12,  C2_12,  C3_12},	// "#"

    {0, C1_13,  C2_13,  C3_13},	// "CAPS"
    {0, C1_14,  C2_14,  C3_14},	// "A"
    {0, C1_15,  C2_15,  C3_15},	// "S"
    {0, C1_16,  C2_16,  C3_16},	// "D"
    {0, C6_1,  C5_1,  C4_1},	// "F"
    {0, C6_2,  C5_2,  C4_2},	// "G"
    {1, C6_1,  C5_1,  C4_1},	// "H"
    {1, C6_2,  C5_2,  C4_2},	// "J"
    {1, C6_3,  C5_3,  C4_3},	// "K"
    {1, C6_4,  C5_4,  C4_4},	// "L"
    {1, C6_5,  C5_5,  C4_5},	// "'"
    {1, C6_6,  C5_6,  C4_6},	// "ENTER"

    {0, C6_3,  C5_3,  C4_3},	// "SHFT"
    {0, C6_4,  C5_4,  C4_4},	// "Z"
    {0, C6_5,  C5_5,  C4_5},	// "X"
    {0, C6_6,  C5_6,  C4_6},	// "C"
    {0, C6_7,  C5_7,  C4_7},	// "V"
    {0, C6_8,  C5_8,  C4_8},	// "B"
    {1, C6_7,  C5_7,  C4_7},	// "N"
    {1, C6_8,  C5_8,  C4_8},	// "M"
    {1, C6_9,  C5_9,  C4_9},	// ","
    {1, C6_10,  C5_10,  C4_10},	// "."
    {1, C6_11,  C5_11,  C4_11},	// "/"
    {1, C6_12,  C5_12,  C4_12}, // "SHFT"

    {0, C6_9,  C5_9,  C4_9},	// "CTRL"
    {0, C6_10,  C5_10,  C4_10},	// "\"
    {0, C6_11,  C5_11,  C4_11}, // "WIN"
    {0, C6_12,  C5_12,  C4_12}, // "ALT"
    {0, C6_13,  C5_13,  C4_13},	// "LOWER"
    {0, C6_14,  C5_14,  C4_14}, // "SPACE"
    {1, C6_13,  C5_13,  C4_13}, // "SPACE"
    {1, C6_14,  C5_14,  C4_14}, // "HIGHER"
    {1, C6_15,  C5_15,  C4_15},	// "LEFT"
    {1, C6_16,  C5_16,  C4_16}, // "UP"
    {1, C9_1,  C8_1,  C7_1},	// "DOWN"
    {1, C9_2,  C8_2,  C7_2},	// "RIGHT"
}

/* Default Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  #   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   '  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |   \  | Win  | Alt  |Lower |    Space    |Raise | Left |  Up  | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */

const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {
/* {row | col << 4}
 *    |           {x=0..224, y=0..64}
 *    |              |            modifier
 *    |              |              | */
    {{0|(0<<4)},   {20.36*0, 16*0}, 0},	//"ESC"
    {{0|(1<<4)},   {20.36*1, 16*0}, 0},	//"1"
    {{0|(2<<4)},   {20.36*2, 16*0}, 0},	//"2"
    {{0|(3<<4)},   {20.36*3, 16*0}, 0},	//"3"
    {{0|(4<<4)},   {20.36*4, 16*0}, 0},	//"4"
    {{0|(5<<4)},   {20.36*5, 16*0}, 0},	//"5"
    {{0|(6<<4)},   {20.36*6, 16*0}, 0},	//"6"
    {{0|(7<<4)},   {20.36*7, 16*0}, 0},	//"7"
    {{0|(8<<4)},   {20.36*8, 16*0}, 0},	//"8"
    {{0|(9<<4)},   {20.36*9, 16*0}, 0},	//"9"
    {{0|(10<<4)},  {20.36*10,16*0}, 0},	//"0"
    {{0|(11<<4)},  {20.36*11,16*0}, 0},	//"BKSP"

    {{1|(0<<4)},   {20.36*0, 16*1}, 0},	//"TAB"
    {{1|(1<<4)},   {20.36*1, 16*1}, 0},	//"Q"
    {{1|(2<<4)},   {20.36*2, 16*1}, 0},	//"W"
    {{1|(3<<4)},   {20.36*3, 16*1}, 0},	//"E"
    {{1|(4<<4)},   {20.36*4, 16*1}, 0},	//"R"
    {{1|(5<<4)},   {20.36*5, 16*1}, 0},	//"T"
    {{1|(6<<4)},   {20.36*6, 16*1}, 0},	//"Y"
    {{1|(7<<4)},   {20.36*7, 16*1}, 0},	//"U"
    {{1|(8<<4)},   {20.36*8, 16*1}, 0},	//"I"
    {{1|(9<<4)},   {20.36*9, 16*1}, 0},	//"O"
    {{1|(10<<4)},  {20.36*10,16*1}, 0},	//"P"
    {{1|(11<<4)},  {20.36*11,16*1}, 0},	//"#"

    {{2|(0<<4)},   {20.36*0, 16*2}, 0},	//"CAPS"
    {{2|(1<<4)},   {20.36*1, 16*2}, 0},	//"A"
    {{2|(2<<4)},   {20.36*2, 16*2}, 0},	//"S"
    {{2|(3<<4)},   {20.36*3, 16*2}, 0},	//"D"
    {{2|(4<<4)},   {20.36*4, 16*2}, 0},	//"F"
    {{2|(5<<4)},   {20.36*5, 16*2}, 0},	//"G"
    {{2|(6<<4)},   {20.36*6, 16*2}, 0},	//"H"
    {{2|(7<<4)},   {20.36*7, 16*2}, 0},	//"J"
    {{2|(8<<4)},   {20.36*8, 16*2}, 0},	//"K"
    {{2|(9<<4)},   {20.36*9, 16*2}, 0},	//"L"
    {{2|(10<<4)},  {20.36*10,16*2}, 0},	//"'"
    {{2|(11<<4)},  {20.36*11,16*2}, 0},	//"ENTER"

    {{3|(0<<4)},   {20.36*0, 16*3}, 0},	//"SHFT"
    {{3|(1<<4)},   {20.36*1, 16*3}, 0},	//"Z"
    {{3|(2<<4)},   {20.36*2, 16*3}, 0},	//"X"
    {{3|(3<<4)},   {20.36*3, 16*3}, 0},	//"C"
    {{3|(4<<4)},   {20.36*4, 16*3}, 0},	//"V"
    {{3|(5<<4)},   {20.36*5, 16*3}, 0},	//"B"
    {{3|(6<<4)},   {20.36*6, 16*3}, 0},	//"N"
    {{3|(7<<4)},   {20.36*7, 16*3}, 0},	//"M"
    {{3|(8<<4)},   {20.36*8, 16*3}, 0},	//","
    {{3|(9<<4)},   {20.36*9, 16*3}, 0},	//"."
    {{3|(10<<4)},  {20.36*10,16*3}, 0},	//"/"
    {{3|(11<<4)},  {20.36*11,16*3}, 0},	//"SHFT"

    {{4|(0<<4)},   {20.36*0, 16*4}, 0},	//"CTRL"
    {{4|(1<<4)},   {20.36*1, 16*4}, 0},	//"\"
    {{4|(2<<4)},   {20.36*2, 16*4}, 0},	//"WIN"
    {{4|(3<<4)},   {20.36*3, 16*4}, 0},	//"ALT"
    {{4|(4<<4)},   {20.36*4, 16*4}, 0},	//"LOWER"
    {{4|(5<<4)},   {20.36*5, 16*4}, 0},	//"SPACE"
    {{4|(6<<4)},   {20.36*6, 16*4}, 0},	//"SPACE"
    {{4|(7<<4)},   {20.36*7, 16*4}, 0},	//"HIGHER"
    {{4|(8<<4)},   {20.36*8, 16*4}, 0},	//"LEFT"
    {{4|(9<<4)},   {20.36*9, 16*4}, 0},	//"UP"
    {{4|(10<<4)},  {20.36*10,16*4}, 0},	//"DOWN"
    {{4|(11<<4)},  {20.36*11,16*4}, 0},	//"RIGHT"
}
