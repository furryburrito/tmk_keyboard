#include "keymap_common.h"
#include "backlight.h"

/*
 * Mac-specific tweaks:
 * - Swaps LALT/LGUI and RALT/RGUI to place Mac Command key in usual
 *   position adjacent to spacebar.
 *
 * HHKB-specific tweaks:
 * - For Layer 2, moves CAPS to TAB position so LCTL can pass through,
 *   to allow for Ctrl-F<#> key combinations (no RCTL available).
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default */
    KEYMAP_ISO(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
               TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
               LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT, \
               LSFT,GRV, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN0, \
                    LALT,LGUI,          SPC,                          RGUI,RALT),
    /* Layer 1: Space Fn */
    KEYMAP_ISO(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, FN0, \
                    TRNS,TRNS,          FN1,                          TRNS,TRNS),
    /* Layer 2: Functions */
    KEYMAP_ISO(TRNS,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, \
               CAPS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,HOME,INS, END, TRNS,UP,  TRNS,TRNS, \
               TRNS,VOLD,VOLU,MUTE,PGDN,TRNS,LEFT,DOWN,UP  ,RGHT,LEFT,RGHT,     FN2,  \
               TRNS,TRNS,TRNS,DEL, TRNS,TRNS,PGUP,TRNS,TRNS,TRNS,TRNS,DOWN,TRNS,TRNS, \
                    TRNS,TRNS,          TRNS,                         TRNS,TRNS)
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(2),
    [1] = ACTION_LAYER_TAP_KEY(2, KC_SPACE),
    [2] = ACTION_LAYER_TOGGLE(1),
    [3] = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_SWITCH)
};
