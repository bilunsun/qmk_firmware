#include QMK_KEYBOARD_H


enum layers {
    _BASE,
    _NUM,
    _FUN,
    _PROG,
    _MOUSE,
    _NAV
};


// Tap-dance
#define HOME_R LALT_T(KC_R)
#define HOME_S LCTL_T(KC_S)
#define HOME_T LSFT_T(KC_T)

#define HOME_N LSFT_T(KC_N)
#define HOME_E LCTL_T(KC_E)
#define HOME_I LALT_T(KC_I)

// =============== Custom Tap-Hold Thumb Keys ===============
// Left
#define ESCNUM LT(_NUM, KC_ESC)
#define SPCNAV LT(_NAV, KC_SPC)
#define MOUSE MO(_MOUSE)
#define FUN MO(_FUN)

// Right
#define PROGENT LT(_PROG, KC_ENT)
#define BSPCSFT LSFT_T(KC_BSPC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        _______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,               KC_J,    KC_L,    KC_U,     KC_Y,    KC_END,  _______,
        KC_TAB,  KC_A,    HOME_R,  HOME_S,  HOME_T,  KC_G,               KC_M,    HOME_N,  HOME_E,   HOME_I,  KC_O  ,  KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,               KC_K,    KC_H,    KC_COMM,  KC_DOT,  KC_SLSH, KC_LSFT,
                          KC_LGUI, KC_LALT,                                                KC_LALT,  KC_LGUI,
                                            ESCNUM,  SPCNAV,             PROGENT, BSPCSFT,
                                            _______, MOUSE,              FUN,     _______,
                                            _______, _______,            _______, _______
    ),

    [_NUM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,            _______, KC_7,    KC_8,    KC_9,    KC_0,    QK_BOOT,
        _______, _______, _______, _______, _______, _______,            _______, KC_4,    KC_5,    KC_6,    _______, _______,
        _______, _______, _______, _______, _______, _______,            _______, KC_1,    KC_2,    KC_3,    _______, _______,
                          _______, _______,                                                _______, _______,
                                            _______, _______,            _______, _______,
                                            _______, _______,            _______, _______,
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

    [_PROG] = LAYOUT(
        _______, KC_GRV,  KC_EQL,  KC_MINS, KC_QUOT, _______,            _______, _______, _______, _______, _______, QK_BOOT,
        _______, KC_BSLS, KC_LPRN, KC_RPRN, KC_SCLN, _______,            _______, _______, _______, _______, _______, _______,
        _______, _______, KC_LBRC, KC_RBRC, _______, _______,            _______, _______, _______, _______, _______, _______,
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
