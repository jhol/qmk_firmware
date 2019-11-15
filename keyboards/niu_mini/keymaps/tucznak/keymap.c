#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _LOWER,
    _RAISE,
    _NUM,
    _FN
};

enum keycodes {
    QWERTY = SAFE_RANGE,
    DYNAMIC_MACRO_RANGE,
};

#include "dynamic_macro.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Base layer (0)
     * ,-----------------------------------------------------------------------------------.
     * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |Esc/Fn|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  | Del  |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |Enter |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Ctrl |  GUI |  Alt |  \|  |Lower |Sp/Num|Space |Raise |AltGr | Left | Down |Right |
     * `-----------------------------------------------------------------------------------'
     */
    [_BASE] = LAYOUT_ortho_4x12(
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,       KC_T,             KC_Y,   KC_U,       KC_I,    KC_O,    KC_P,    KC_BSPC,
        LT(_FN, KC_ESC),  KC_A,    KC_S,    KC_D,    KC_F,       KC_G,             KC_H,   KC_J,       KC_K,    KC_L,    KC_SCLN, KC_DEL,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,       KC_B,             KC_N,   KC_M,       KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
        KC_LCTL,          KC_LGUI, KC_LALT, KC_NUBS, MO(_LOWER), LT(_NUM, KC_SPC), KC_SPC, MO(_RAISE), KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Lower layer (1)
     * Function keys, navigation
     * ,-----------------------------------------------------------------------------------.
     * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      | Ins  |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |CapsLk|      |PrtSc |ScrLk |Pause |      |      |      |      | PgUp |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      | Menu | Home | PgDn | End  |
     * `-----------------------------------------------------------------------------------'
     */
    [_LOWER] = LAYOUT_ortho_4x12(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS,
        _______, KC_CAPS, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______, _______, KC_PGUP, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_APP,  KC_HOME, KC_PGDN, KC_END
    ),

     /* Raise layer (2)
     * National characters, special characters
     * ,-----------------------------------------------------------------------------------.
     * |  +1  |  ě2  |  š3  |  č4  |  ř5  |  ž6  |  ý7  |  á8  |  í9  |  é0  |  ´   |  ˇ   |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |  ;°  |      |      |      |      |      |  (   |  )   |  §   |  !   |  ú   |  /   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |      |      |      |      |      |  %   |  =   |  ¨   |  '   |  -   |  _   |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_RAISE] = LAYOUT_ortho_4x12(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,          KC_8,    KC_9,    KC_0,          KC_EQL,  LSFT(KC_EQL),
        KC_GRV,  _______, _______, _______, _______, _______, LSFT(KC_RBRC), KC_RBRC, KC_QUOT, LSFT(KC_QUOT), KC_LBRC, LSFT(KC_LBRC),
        _______, _______, _______, _______, _______, _______, LSFT(KC_MINS), KC_MINS, KC_BSLS, LSFT(KC_BSLS), KC_SLSH, LSFT(KC_SLSH),
        _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______,       _______, _______
    ),

    /* Numbers layer - numpad (3)
     * ,-----------------------------------------------------------------------------------.
     * |      |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  0   |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |  4   |  5   |  6   |  /   |      |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |NumLk |      |      |      |      |      |  1   |  2   |  3   |  *   |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |  .   |  0   |  +   |  -   |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_NUM] = LAYOUT_ortho_4x12(
        _______, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_0, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_KP_4, KC_KP_5, KC_KP_6, KC_PSLS, _______,
        _______, KC_NLCK, _______, _______, _______, _______, _______, KC_KP_1, KC_KP_2, KC_KP_3, KC_PAST, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_DOT,  KC_KP_0, KC_PPLS, KC_PMNS, _______
    ),

    /* Function layer (4)
     * Backlighting, keyboard controls, etc.
     * m_ - music, r_ - RGB + backlight, f_ - macro
     * ,-----------------------------------------------------------------------------------.
     * |      | r_BL |      |Sleep |      |      |      |f_Rec1|f_Pla1|f_Stop|      |m_Vol+|
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |r_VLK |r_Mod+|r_Hue+|r_Sat+|r_Bri+|      |f_Rec2|f_Pla2|      |      |m_Vol-|
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |r_TOG |r_Mod-|r_Hue-|r_Sat-|r_Bri-|      |      |      |      |m_Stop|m_Mute|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Reset|      |      |      |      |C+A+D |C+A+I |      |      |m_Prev|m_Paus|m_Next|
     * `-----------------------------------------------------------------------------------'
     */
    [_FN] = LAYOUT_ortho_4x12(
        _______, BL_STEP, _______,  KC_SLEP, _______, _______,     _______,     DYN_REC_START1, DYN_MACRO_PLAY1, DYN_REC_STOP, _______, KC_VOLU,
        _______, VLK_TOG, RGB_MOD,  RGB_HUI, RGB_SAI, RGB_VAI,     _______,     DYN_REC_START2, DYN_MACRO_PLAY2, _______,      _______, KC_VOLD,
        _______, RGB_TOG, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD,     _______,     _______,        _______,         _______,      KC_MSTP, KC_MUTE,
        RESET,   _______, _______,  _______, _______, LCA(KC_DEL), LCA(KC_INS), _______,        _______,         KC_MPRV,      KC_MPLY, KC_MNXT
    )
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_dynamic_macro(keycode, record)) {
        return false;
    }
    return true;
}

void led_set_user(uint8_t usb_led) {

}
