#pragma once


// Begin Mouse
#define MOVE_Y(vert) ((vert)&0xFFFF)
#define MOVE_Y_DECODE(encoded) (int16_t)((encoded)&0x0000FFFF)
#define MOVE_X(hor) (((hor)&0xFFFF) << 16)
#define MOVE_X_DECODE(encoded) (int16_t)(((encoded)&0xFFFF0000) >> 16)

#define MOVE(hor, vert) (MOVE_X(hor) + MOVE_Y(vert))

// #define MOVE_UP MOVE_Y(-ZMK_MOUSE_DEFAULT_MOVE_VAL)
#define MOVE_UP 1
// #define MOVE_DOWN MOVE_Y(ZMK_MOUSE_DEFAULT_MOVE_VAL)
#define MOVE_DOWN 2
// #define MOVE_LEFT MOVE_X(-ZMK_MOUSE_DEFAULT_MOVE_VAL)
#define MOVE_LEFT 3
// #define MOVE_RIGHT MOVE_X(ZMK_MOUSE_DEFAULT_MOVE_VAL)
#define MOVE_RIGHT 4

// #define SCRL_UP MOVE_Y(ZMK_MOUSE_DEFAULT_SCRL_VAL)
#define SCRL_UP 5
// #define SCRL_DOWN MOVE_Y(-ZMK_MOUSE_DEFAULT_SCRL_VAL)
#define SCRL_DOWN 6
// #define SCRL_LEFT MOVE_X(-ZMK_MOUSE_DEFAULT_SCRL_VAL)
#define SCRL_LEFT 7
// #define SCRL_RIGHT MOVE_X(ZMK_MOUSE_DEFAULT_SCRL_VAL)
#define SCRL_RIGHT 8
// End Mouse
