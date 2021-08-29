#include QMK_KEYBOARD_H
#ifdef AUDIO_ENABLE
#include "muse.h"
#endif
#include "eeprom.h"
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
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

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

enum planck_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_0_255_255,
  HSV_86_255_255,
  HSV_172_255_255,
  HSV_43_255_255,
  HSV_215_255_255,
  HSV_129_255_255,
  HSV_22_255_255,
  HSV_63_255_255,
  HSV_149_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
};


enum planck_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _ADJUST,
  _LAYER4,
  _LAYER5,
  _LAYER6,
  _LAYER7,
  _LAYER8,
  _LAYER9,
  _LAYER10,
  _LAYER11,
  _LAYER12,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_planck_grid(
    KC_Q,           KC_W,           KC_E,           KC_R,           LT(12,KC_T),    ST_MACRO_0,     ST_MACRO_1,     KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           
    KC_A,           KC_S,           KC_D,           KC_F,           LT(7,KC_G),     ST_MACRO_2,     ST_MACRO_3,     LT(8,KC_H),     KC_J,           KC_K,           KC_L,           KC_SCOLON,      
    LT(10,KC_Z),    LGUI_T(KC_X),   KC_C,           KC_V,           LALT_T(KC_B),   ST_MACRO_4,     ST_MACRO_5,     RALT_T(KC_N),   KC_M,           KC_COMMA,       RGUI_T(KC_DOT), LT(11,KC_SLASH),
    TO(2),          TT(9),          KC_LCTRL,       KC_LSHIFT,      MO(5),          RCTL_T(KC_ENTER),KC_NO,          LT(6,KC_SPACE), KC_RSHIFT,      KC_RCTRL,       TT(5),          TT(7)
  ),

  [_LOWER] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),

  [_RAISE] = LAYOUT_planck_grid(
    KC_K,           KC_F,           KC_R,           KC_D,           LT(12,KC_G),    ST_MACRO_6,     ST_MACRO_7,     KC_Y,           KC_I,           KC_O,           KC_U,           KC_W,           
    KC_V,           KC_N,           KC_T,           KC_S,           LT(7,KC_C),     ST_MACRO_8,     ST_MACRO_9,     LT(8,KC_B),     KC_A,           KC_E,           KC_H,           KC_MINUS,       
    LT(10,KC_J),    LGUI_T(KC_P),   KC_L,           KC_M,           LALT_T(KC_X),   ST_MACRO_10,    ST_MACRO_11,    RALT_T(KC_QUOTE),KC_DOT,         KC_TRANSPARENT, RGUI_T(KC_Z),   LT(11,KC_Q),    
    TO(4),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_ADJUST] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_LAYER4] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE,      KC_BSPACE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_G,           LT(7,KC_TAB),   LT(8,KC_QUOTE), KC_H,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_Z,           KC_X,           KC_TRANSPARENT, KC_TRANSPARENT, KC_B,           LT(5,KC_MINUS), LT(6,KC_EQUAL), KC_N,           KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_SLASH,       
    TO(0),          KC_LCTRL,       KC_LSHIFT,      KC_LALT,        KC_SPACE,       KC_ENTER,       KC_NO,          KC_SPACE,       KC_RALT,        KC_RSHIFT,      KC_RGUI,        KC_RCTRL
  ),

  [_LAYER5] = LAYOUT_planck_grid(
    KC_ESCAPE,      KC_NO,          KC_MEDIA_STOP,  KC_PSCREEN,     MO(12),         KC_NO,          KC_NO,          KC_BSPACE,      KC_PGUP,        KC_UP,          KC_PGDOWN,      KC_INSERT,      
    KC_CAPSLOCK,    KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         
    KC_NO,          LGUI_T(KC_AUDIO_MUTE),KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT, RALT_T(KC_DELETE),KC_DOT,         KC_TRANSPARENT, KC_RGUI,        KC_APPLICATION, 
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO
  ),

  [_LAYER6] = LAYOUT_planck_grid(
    KC_ESCAPE,      KC_LCBR,        KC_RCBR,        KC_SLASH,       KC_BSLASH,      KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE,      KC_DLR,         KC_AMPR,        KC_PIPE,        KC_UNDS,        
    KC_TILD,        KC_LPRN,        KC_RPRN,        KC_PERC,        KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_PLUS,        KC_ASTR,        KC_COLN,        KC_SCOLON,      KC_MINUS,       
    KC_GRAVE,       KC_LBRACKET,    KC_RBRACKET,    KC_QUES,        KC_EXLM,        KC_TRANSPARENT, KC_TRANSPARENT, KC_QUOTE,       KC_DOT,         KC_TRANSPARENT, KC_AT,          KC_CIRC,        
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,       KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_HASH,        KC_TRANSPARENT, KC_NO,          KC_NO
  ),

  [_LAYER7] = LAYOUT_planck_grid(
    KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          MO(12),         KC_NO,          KC_NO,          KC_BSPACE,      KC_7,           KC_8,           KC_9,           KC_SLASH,       
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_PLUS,        KC_4,           KC_5,           KC_6,           KC_MINUS,       
    KC_NO,          KC_LGUI,        KC_NO,          KC_NO,          KC_LALT,        KC_TRANSPARENT, KC_EQUAL,       KC_ASTR,        KC_1,           KC_2,           KC_3,           KC_ENTER,       
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,       KC_TRANSPARENT, KC_NO,          KC_ENTER,       KC_0,           KC_DOT,         KC_DOT,         KC_TRANSPARENT
  ),

  [_LAYER8] = LAYOUT_planck_grid(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_NO,          KC_NO,          KC_NO,          KC_BSPACE,      KC_F13,         KC_F14,         KC_F15,         KC_F16,         
    KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_F17,         KC_F18,         KC_F19,         KC_F20,         
    KC_F9,          LGUI_T(KC_F10), KC_F11,         KC_F12,         KC_LALT,        KC_NO,          KC_TRANSPARENT, KC_RALT,        KC_F21,         KC_F22,         RGUI_T(KC_F23), KC_F24,         
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,       KC_TRANSPARENT, KC_NO,          KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO
  ),

  [_LAYER9] = LAYOUT_planck_grid(
    KC_ESCAPE,      KC_NO,          KC_MS_WH_UP,    KC_NO,          MO(12),         KC_NO,          KC_NO,          KC_BSPACE,      KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_NO,          
    KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          
    KC_NO,          KC_LGUI,        KC_MS_ACCEL2,   KC_MS_ACCEL1,   KC_LALT,        KC_NO,          KC_NO,          KC_RALT,        KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_NO,          
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,       KC_TRANSPARENT, KC_NO,          KC_MS_BTN1,     KC_MS_BTN4,     KC_NO,          KC_MS_BTN5,     KC_NO
  ),

  [_LAYER10] = LAYOUT_planck_grid(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          HSV_0_255_255,  HSV_86_255_255, HSV_172_255_255,KC_NO,          RGB_TOG,        RGB_VAD,        RGB_VAI,        
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          HSV_43_255_255, HSV_215_255_255,HSV_129_255_255,KC_NO,          TOGGLE_LAYER_COLOR,RGB_SAD,        RGB_SAI,        
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          HSV_22_255_255, HSV_63_255_255, HSV_149_255_255,KC_NO,          RGB_SLD,        RGB_HUD,        RGB_HUI,        
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          LED_LEVEL,      KC_NO,          KC_NO,          KC_NO,          RGB_MOD,        RGB_SPD,        RGB_SPI
  ),

  [_LAYER11] = LAYOUT_planck_grid(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    RESET,          KC_NO,          KC_NO,          KC_NO,          WEBUSB_PAIR,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),

  [_LAYER12] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          TO(2),          TO(4),          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(5),          TO(7),          TO(9),          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {172,255,102}, {172,255,102}, {172,255,102}, {172,255,102}, {0,0,136}, {21,255,136}, {21,255,136}, {172,255,102}, {172,255,102}, {172,255,102}, {172,255,102}, {172,255,102}, {172,255,102}, {172,255,102}, {172,255,102}, {172,255,102}, {215,255,136}, {21,255,136}, {21,255,136}, {25,255,170}, {172,255,102}, {172,255,102}, {172,255,102}, {172,255,102}, {0,0,136}, {129,255,136}, {172,255,102}, {172,255,102}, {129,255,136}, {21,255,136}, {21,255,136}, {129,255,136}, {172,255,102}, {172,255,102}, {129,255,136}, {0,0,136}, {0,0,102}, {43,255,68}, {129,255,136}, {129,255,136}, {172,255,136}, {0,0,0}, {86,255,136}, {129,255,136}, {129,255,136}, {172,255,136}, {215,255,68} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,255,102}, {0,255,102}, {0,255,102}, {0,255,102}, {0,0,136}, {21,255,136}, {21,255,136}, {0,255,102}, {0,255,102}, {0,255,102}, {0,255,102}, {0,255,102}, {0,255,102}, {0,255,102}, {0,255,102}, {0,255,102}, {215,255,136}, {21,255,136}, {21,255,136}, {25,255,170}, {0,255,102}, {0,255,102}, {0,255,102}, {0,255,102}, {0,0,136}, {129,255,136}, {0,255,102}, {0,255,102}, {129,255,136}, {21,255,136}, {21,255,136}, {129,255,136}, {0,255,102}, {0,255,102}, {129,255,136}, {0,0,136}, {0,0,102}, {43,255,68}, {129,255,136}, {129,255,136}, {172,255,136}, {0,0,0}, {86,255,136}, {129,255,136}, {129,255,136}, {172,255,136}, {215,255,136} },

    [4] = { {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,0,136}, {215,119,255}, {0,255,255}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {215,255,136}, {21,255,136}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {172,255,136}, {86,255,136}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,255,153}, {0,0,102}, {129,255,136}, {129,255,136}, {129,255,136}, {129,255,68}, {0,0,0}, {129,255,68}, {129,255,136}, {129,255,136}, {129,255,136}, {129,255,136} },

    [5] = { {215,102,255}, {0,0,0}, {129,255,255}, {129,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {129,255,136}, {129,255,255}, {0,0,0}, {0,0,0}, {129,255,136}, {129,255,136}, {0,0,0}, {129,255,136}, {129,255,255}, {129,255,136}, {129,255,136}, {0,0,255}, {0,0,0} },

    [6] = { {215,102,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {129,255,136}, {129,255,136}, {129,255,255}, {129,255,136}, {0,0,0}, {86,255,255}, {129,255,255}, {0,0,0}, {0,0,0} },

    [7] = { {215,102,255}, {0,0,9}, {0,0,9}, {0,0,9}, {0,0,255}, {0,0,9}, {0,0,9}, {0,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {86,255,255}, {0,0,9}, {0,0,9}, {0,0,9}, {0,0,9}, {0,0,9}, {0,0,9}, {0,0,9}, {86,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {86,255,255}, {0,0,9}, {129,255,255}, {0,0,9}, {0,0,9}, {129,255,255}, {0,0,9}, {86,255,255}, {86,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {129,255,255}, {0,0,9}, {0,0,9}, {129,255,136}, {129,255,136}, {129,255,136}, {129,255,136}, {129,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,255} },

    [8] = { {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {0,36,7}, {0,36,7}, {0,36,7}, {0,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {0,36,7}, {0,36,7}, {0,36,7}, {0,36,7}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {129,255,255}, {22,255,255}, {22,255,255}, {129,255,255}, {0,36,7}, {0,36,7}, {129,255,255}, {22,255,255}, {22,255,255}, {129,255,255}, {22,255,255}, {0,36,7}, {0,36,7}, {129,255,255}, {129,255,255}, {129,255,136}, {129,255,136}, {129,255,136}, {129,255,255}, {129,255,255}, {0,36,7}, {0,36,7} },

    [9] = { {215,102,255}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,183,238}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {129,255,255}, {43,255,255}, {43,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {129,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,255}, {129,255,136}, {129,255,136}, {129,255,136}, {129,255,136}, {43,255,255}, {43,255,255}, {0,0,0}, {43,255,255}, {0,0,0} },

    [10] = { {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,255,255}, {86,255,255}, {172,255,255}, {0,0,7}, {0,0,255}, {14,255,255}, {14,255,255}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {43,255,255}, {215,255,255}, {129,255,255}, {0,0,7}, {0,0,255}, {14,255,255}, {14,255,255}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {22,255,255}, {63,255,255}, {149,255,255}, {0,0,7}, {0,0,255}, {14,255,255}, {14,255,255}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,136}, {0,0,7}, {0,0,7}, {0,0,255}, {14,255,255}, {14,255,255} },

    [11] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [12] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {0,183,238}, {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {215,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
    case 2:
      set_layer_color(2);
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
    case 10:
      set_layer_color(10);
      break;
    case 11:
      set_layer_color(11);
      break;
    case 12:
      set_layer_color(12);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_X)));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_Z)));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_C)));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_V)));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_TAB)));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_X)));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_Z)));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_C)));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_Y)));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_V)));

    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_TAB)));

    }
    break;
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
    case HSV_63_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(63,255,255);
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

#ifdef AUDIO_ENABLE
bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
    if (muse_mode) {
        if (IS_LAYER_ON(_RAISE)) {
            if (clockwise) {
                muse_offset++;
            } else {
                muse_offset--;
            }
        } else {
            if (clockwise) {
                muse_tempo+=1;
            } else {
                muse_tempo-=1;
            }
        }
    } else {
        if (clockwise) {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_DOWN);
            unregister_code(KC_MS_WH_DOWN);
        #else
            register_code(KC_PGDN);
            unregister_code(KC_PGDN);
        #endif
        } else {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_UP);
            unregister_code(KC_MS_WH_UP);
        #else
            register_code(KC_PGUP);
            unregister_code(KC_PGUP);
        #endif
        }
    }
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
    switch (keycode) {
    case RAISE:
    case LOWER:
        return false;
    default:
        return true;
    }
}
#endif

uint32_t layer_state_set_user(uint32_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

