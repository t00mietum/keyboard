#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_86_255_255,
  HSV_172_255_255,
  HSV_43_255_255,
  HSV_215_255_255,
  HSV_129_255_255,
  HSV_22_255_255,
  HSV_60_255_255,
  HSV_149_255_255,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    LT(9,KC_ESCAPE),KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,      
    KC_TAB,         KC_Q,           KC_W,           LGUI_T(KC_E),   KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           RGUI_T(KC_I),   KC_O,           KC_P,           KC_BSLASH,      
    KC_CAPSLOCK,    KC_A,           LCTL_T(KC_S),   LSFT_T(KC_D),   LALT_T(KC_F),   KC_G,           KC_HYPR,                                                                        KC_MEH,         KC_H,           RALT_T(KC_J),   RSFT_T(KC_K),   RCTL_T(KC_L),   KC_SCOLON,      KC_ENTER,       
    KC_LSHIFT,      LT(7,KC_Z),     KC_X,           KC_C,           LT(5,KC_V),     KC_B,                                           KC_N,           LT(6,KC_M),     KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,      
    TO(1),          TT(7),          TT(6),          KC_DELETE,      LT(3,KC_TAB),   KC_ESCAPE,                                                                                                      KC_ESCAPE,      LT(4,KC_ENTER), KC_BSPACE,      TT(8),          TT(5),          TT(3),          
    KC_SPACE,       KC_LCTRL,       KC_DELETE,                      KC_BSPACE,      KC_RALT,        KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_X,           KC_L,           LGUI_T(KC_S),   KC_D,           KC_P,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_H,           RGUI_T(KC_O),   KC_QUOTE,       KC_J,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_V,           LCTL_T(KC_N),   LSFT_T(KC_T),   LALT_T(KC_R),   KC_C,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F,           RALT_T(KC_A),   RSFT_T(KC_E),   RCTL_T(KC_I),   KC_K,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_W,           KC_G,           LT(5,KC_M),     KC_COMMA,                                       KC_DOT,         LT(6,KC_U),     KC_MINUS,       KC_B,           KC_Q,           KC_TRANSPARENT, 
    TO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LCBR,                                        KC_RCBR,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,      
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LPRN,                                        KC_RPRN,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,      
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_LBRACKET,                                                                    KC_RBRACKET,    KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_ENTER,       
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,      
    TO(0),          KC_LCTRL,       LT(8,KC_APPLICATION),KC_LGUI,        KC_LALT,        KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_QUOTE,       KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          LGUI_T(KC_MEDIA_STOP),KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_INSERT,      KC_PGUP,        KC_UP,          KC_PGDOWN,      KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          LCTL_T(KC_MEDIA_PREV_TRACK),LSFT_T(KC_MEDIA_PLAY_PAUSE),LALT_T(KC_MEDIA_NEXT_TRACK),KC_NO,          KC_NO,                                                                          KC_NO,          KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_NO,          
    KC_NO,          KC_NO,          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_NO,                                          KC_PSCREEN,     KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_APPLICATION, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TILD,        KC_LCBR,        KC_RCBR,        KC_PLUS,        KC_ASTR,        KC_NO,                                          KC_NO,          KC_EQUAL,       KC_DLR,         KC_AMPR,        KC_PIPE,        KC_NO,          KC_NO,          
    KC_NO,          KC_GRAVE,       KC_LPRN,        KC_RPRN,        KC_MINUS,       KC_SLASH,       KC_NO,                                                                          KC_NO,          KC_BSLASH,      KC_DQUO,        KC_SCOLON,      KC_COLN,        KC_PERC,        KC_NO,          
    KC_NO,          KC_NO,          KC_LBRACKET,    KC_RBRACKET,    KC_UNDS,        KC_EXLM,                                        KC_QUES,        KC_QUOTE,       KC_HASH,        KC_AT,          KC_CIRC,        KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_SLASH,       KC_ASTR,        KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_LGUI,        KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_SLASH,       KC_7,           KC_8,           KC_9,           KC_BSPACE,      KC_NO,          
    KC_NO,          KC_NO,          KC_LCTRL,       KC_LSHIFT,      KC_LALT,        KC_NO,          KC_NO,                                                                          KC_NO,          KC_ASTR,        KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,                                          KC_MINUS,       KC_1,           KC_2,           KC_3,           KC_ENTER,       KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_DOT,         KC_DOT,         KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          KC_F1,          KC_F2,          LGUI_T(KC_F3),  KC_F4,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_F13,         RGUI_T(KC_F14), KC_F15,         KC_F16,         KC_NO,          
    KC_NO,          KC_F5,          LCTL_T(KC_F6),  LSFT_T(KC_F7),  LALT_T(KC_F8),  KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          RALT_T(KC_F17), RSFT_T(KC_F18), RCTL_T(KC_F19), KC_F20,         KC_NO,          
    KC_NO,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_F22,         KC_F23,         KC_F24,         KC_NO,          
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_MS_WH_UP,    KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,          
    KC_NO,          KC_TRANSPARENT, KC_MS_ACCEL2,   KC_MS_ACCEL1,   KC_MS_ACCEL0,   KC_NO,                                          KC_NO,          KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_NO,          KC_NO,          
    KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_MS_BTN4,     KC_NO,          KC_MS_BTN5,     KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_NO,          RGB_TOG,        KC_NO,          RGB_VAD,        RGB_VAI,        KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_SLD,        KC_NO,          RGB_SAD,        RGB_SAI,        KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          HSV_0_255_255,  HSV_86_255_255, HSV_172_255_255,KC_NO,          KC_NO,          
    KC_NO,          TOGGLE_LAYER_COLOR,KC_NO,          RGB_HUD,        RGB_HUI,        KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          HSV_43_255_255, HSV_215_255_255,HSV_129_255_255,KC_NO,          KC_NO,          
    KC_NO,          RGB_MOD,        KC_NO,          RGB_SPD,        RGB_SPI,        MOON_LED_LEVEL,                                 KC_NO,          HSV_22_255_255, HSV_60_255_255, HSV_149_255_255,KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [9] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    WEBUSB_PAIR,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RESET,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,68}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,136}, {161,170,102}, {161,170,102}, {161,170,102}, {43,255,136}, {43,255,136}, {161,170,102}, {161,170,102}, {161,170,102}, {161,170,102}, {21,255,136}, {161,170,102}, {161,170,102}, {161,170,102}, {161,170,102}, {0,255,136}, {161,170,102}, {161,170,102}, {161,170,102}, {215,255,136}, {172,255,136}, {161,170,102}, {161,170,102}, {161,170,102}, {161,170,102}, {0,0,0}, {0,0,0}, {21,255,68}, {0,0,136}, {129,255,255}, {0,255,68}, {208,130,133}, {0,255,68}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,136}, {161,170,102}, {161,170,102}, {161,170,102}, {161,170,102}, {215,255,136}, {161,170,102}, {161,170,102}, {161,170,102}, {161,170,102}, {0,0,68}, {161,170,102}, {161,170,102}, {161,170,102}, {161,170,102}, {0,255,136}, {161,170,102}, {161,170,102}, {161,170,102}, {21,255,136}, {86,255,136}, {161,170,102}, {161,170,102}, {161,170,102}, {161,170,102}, {0,0,0}, {0,0,0}, {21,255,68}, {0,0,136}, {129,255,255}, {0,255,68}, {208,130,133} },

    [1] = { {215,127,136}, {0,115,135}, {0,115,135}, {0,115,135}, {0,0,136}, {0,115,135}, {0,115,135}, {0,115,135}, {43,255,255}, {43,255,136}, {0,115,135}, {0,115,135}, {0,115,135}, {0,115,135}, {21,255,136}, {0,115,135}, {0,115,135}, {0,115,135}, {0,115,135}, {0,255,136}, {0,115,135}, {0,115,135}, {0,115,135}, {215,255,255}, {172,255,136}, {0,115,135}, {0,115,135}, {0,115,135}, {0,115,135}, {0,115,135}, {0,115,135}, {27,126,255}, {0,0,136}, {129,255,255}, {0,255,68}, {215,127,136}, {0,255,68}, {0,115,135}, {0,115,135}, {0,115,135}, {172,255,136}, {0,115,135}, {0,115,135}, {0,115,135}, {0,115,135}, {215,255,136}, {0,115,135}, {0,115,135}, {0,115,135}, {0,115,135}, {0,0,68}, {0,115,135}, {0,115,135}, {0,115,135}, {0,115,135}, {0,255,136}, {0,115,135}, {0,115,135}, {0,115,135}, {22,255,255}, {86,255,136}, {0,115,135}, {0,115,135}, {0,115,135}, {0,115,135}, {0,115,135}, {0,115,135}, {27,126,255}, {0,0,136}, {129,255,255}, {0,255,68}, {215,127,136} },

    [3] = { {215,127,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,136}, {129,255,255}, {0,255,136}, {215,119,255}, {0,255,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {43,255,255}, {0,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {43,255,255}, {129,255,255}, {0,0,0}, {129,255,255}, {172,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,136}, {129,255,255}, {0,255,136}, {215,119,255} },

    [4] = { {215,127,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,255,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,136}, {129,255,255}, {0,255,136}, {215,119,255}, {0,255,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,136}, {129,255,255}, {0,255,136}, {215,119,255} },

    [5] = { {215,127,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,136}, {129,255,255}, {0,255,136}, {215,119,255}, {0,255,68}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {129,255,255}, {129,255,255}, {0,0,255}, {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {129,255,255}, {129,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {129,255,255}, {129,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,136}, {129,255,255}, {0,255,136}, {215,119,255} },

    [6] = { {215,127,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,255}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {249,228,255}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,136}, {129,255,255}, {0,255,136}, {215,119,255}, {0,255,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,255,255}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,136}, {129,255,255}, {0,255,136}, {215,119,255} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,136}, {129,255,255}, {0,255,136}, {215,119,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,136}, {129,255,255}, {0,255,136}, {215,119,255} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {195,61,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {129,255,255}, {149,255,255}, {0,0,255}, {0,0,0}, {86,255,255}, {215,255,255}, {60,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {43,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {195,61,255} },

    [9] = { {0,255,68}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_86_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,255);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
    case HSV_43_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(43,255,255);
      }
      return false;
    case HSV_215_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(215,255,255);
      }
      return false;
    case HSV_129_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(129,255,255);
      }
      return false;
    case HSV_22_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(22,255,255);
      }
      return false;
    case HSV_60_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(60,255,255);
      }
      return false;
    case HSV_149_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(149,255,255);
      }
      return false;
  }
  return true;
}
