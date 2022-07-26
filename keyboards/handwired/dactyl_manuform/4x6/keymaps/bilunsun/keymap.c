#include QMK_KEYBOARD_H

#define _BASE 0
#define _FUN 1
#define _NUM 2
#define _SYM 3
#define _MOUSE 4
#define _NAV 5
#define _SYM_1 6

// Tap-dance
#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LCTL_T(KC_S)
#define HOME_T LSFT_T(KC_T)

#define HOME_N LSFT_T(KC_N)
#define HOME_E LCTL_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O LGUI_T(KC_O)

// =============== Custom Tap-Hold Thumb Keys ===============
// Left
#define ESCNUM LT(_NUM, KC_ESC)
#define SPCNAV LT(_NAV, KC_SPC)
#define TABMOS LT(_MOUSE, KC_TAB)

// Right
#define ENTFUN LT(_FUN, KC_ENT)
#define BSPSYM1 LT(_SYM_1, KC_BSPC)
#define SYM MO(_SYM)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        _______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,               KC_J,    KC_L,    KC_U,     KC_Y,    KC_END,  _______,
        _______, HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_G,               KC_M,    HOME_N,  HOME_E,   HOME_I,  HOME_O,  _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,               KC_K,    KC_H,    KC_COMM,  KC_DOT,  KC_SLSH, _______,
                          _______, _______,                                                _______,  _______,
                                            ESCNUM,  SPCNAV,             ENTFUN,  BSPSYM1,
                                            _______, TABMOS,             SYM,     _______,
                                            _______, _______,            _______, _______
    ),

    [_FUN] = LAYOUT(
        _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   _______,            _______, _______, _______, _______, _______, QK_BOOT,
        _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   _______,            _______, _______, _______, _______, _______, _______,
        _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   _______,            _______, _______, _______, _______, _______, _______,
                          _______, _______,                                                _______, _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______
    ),

    [_NUM] = LAYOUT(
        QK_BOOT, _______, _______, _______, _______, _______,            _______, KC_7,    KC_8,    KC_9,    _______, _______,
        _______, _______, _______, _______, _______, _______,            _______, KC_4,    KC_5,    KC_6,    _______, _______,
        _______, _______, _______, _______, _______, _______,            _______, KC_1,    KC_2,    KC_3,    _______, _______,
                          _______, _______,                                                KC_0,    _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______
    ),

    [_SYM] = LAYOUT(
        _______, _______, KC_AMPR, KC_ASTR, _______, _______,            _______, _______, _______, _______, _______, QK_BOOT,
        _______, _______, KC_DLR,  KC_PERC, KC_CIRC, _______,            _______, _______, _______, _______, _______, _______,
        _______, _______, KC_EXLM, KC_AT,   KC_HASH, _______,            _______, _______, _______, _______, _______, _______,
                          _______, _______,                                                _______, _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______
    ),

    [_MOUSE] = LAYOUT(
        QK_BOOT, _______, _______, _______, _______, _______,            _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,            _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
        _______, _______, _______, _______, _______, _______,            _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
                          _______, _______,                                                _______, _______,
                                            _______, _______,            KC_BTN1, KC_BTN2,
                                            _______, _______,            KC_WH_D, _______,
                                            _______, _______,            _______, _______
    ),

    [_NAV] = LAYOUT(
        QK_BOOT, _______, _______, _______, _______, _______,            _______, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO, _______,
        _______, _______, _______, _______, _______, _______,            KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______,
        _______, _______, _______, _______, _______, _______,            _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______,
                          _______, _______,                                                _______, _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______
    ),

    [_SYM_1] = LAYOUT(
        _______, KC_SCLN, _______, KC_MINS, _______, _______,            _______, _______, _______, _______, _______, QK_BOOT,
        _______, KC_LBRC, KC_RBRC, KC_UNDS, KC_COLN, _______,            _______, _______, _______, _______, _______, _______,
        _______, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, _______,            _______, _______, _______, _______, _______, _______,
                          _______, _______,                                                _______, _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______
    ),
};

void persistent_default_layer_set(uint16_t default_layer) {
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
}

/* Blank
[_BLANK] = LAYOUT(
        _______, _______, _______, _______, _______, _______,            _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,            _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,            _______, _______, _______, _______, _______, _______,
                          _______, _______,                                                _______, _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______
    ),
*/
