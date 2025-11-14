#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  DE_LSPO,
};



#define DUAL_FUNC_0 LT(5, KC_B)
#define DUAL_FUNC_1 LT(7, KC_F16)
#define DUAL_FUNC_2 LT(8, KC_F8)
#define DUAL_FUNC_3 LT(13, KC_F5)
#define DUAL_FUNC_4 LT(5, KC_J)
#define DUAL_FUNC_5 LT(10, KC_G)
#define DUAL_FUNC_6 LT(9, KC_F15)
#define DUAL_FUNC_7 LT(3, KC_F17)
#define DUAL_FUNC_8 LT(2, KC_A)
#define DUAL_FUNC_9 LT(6, KC_F23)
#define DUAL_FUNC_10 LT(5, KC_W)
#define DUAL_FUNC_11 LT(1, KC_F8)
#define DUAL_FUNC_12 LT(7, KC_F17)
#define DUAL_FUNC_13 LT(11, KC_8)
#define DUAL_FUNC_14 LT(14, KC_8)
#define DUAL_FUNC_15 LT(1, KC_A)
#define DUAL_FUNC_16 LT(11, KC_F21)
#define DUAL_FUNC_17 LT(12, KC_H)
#define DUAL_FUNC_18 LT(3, KC_J)
#define DUAL_FUNC_19 LT(2, KC_F21)
#define DUAL_FUNC_20 LT(10, KC_F19)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_MEH,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_HYPR,                                        TG(5),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_F11,         
    KC_TAB,         KC_J,           KC_D,           KC_U,           KC_A,           KC_X,           TG(4),                                          TG(4),          KC_P,           KC_H,           KC_L,           KC_M,           KC_W,           KC_F12,         
    KC_ESCAPE,      KC_C,           KC_T,           KC_I,           KC_E,           KC_O,           TT(3),                                                                          TT(3),          KC_B,           KC_N,           KC_R,           KC_S,           KC_G,           MT(MOD_RSFT, DE_PLUS),
    DE_LSPO,        DUAL_FUNC_0,    KC_V,           KC_Q,           KC_K,           KC_F,                                           DE_Y,           DE_Z,           DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,    KC_UP,          
    KC_LEFT_CTRL,   KC_LEFT_GUI,    DUAL_FUNC_1,    DUAL_FUNC_2,    KC_LEFT_ALT,    TT(2),                                                                                                          TT(2),          KC_RIGHT_CTRL,  DE_MINS,        KC_LEFT,        KC_RIGHT,       KC_DOWN,        
    KC_BSPC,        KC_DELETE,      TT(1),                          TT(1),          KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_F7,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          TT(5),          DE_PERC,        KC_HOME,        KC_END,         KC_CALCULATOR,  KC_KP_PLUS,     KC_KP_MINUS,    
    KC_F8,          DE_HASH,        DE_DLR,         DUAL_FUNC_6,    DUAL_FUNC_7,    LCTL(KC_X),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PAGE_UP,     KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, KC_KP_SLASH,    
    KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DE_EURO,        DUAL_FUNC_8,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PGDN,        KC_4,           KC_5,           KC_6,           KC_KP_DOT,      KC_KP_COMMA,    
    KC_F10,         DE_SS,          KC_TRANSPARENT, DE_AT,          KC_TRANSPARENT, LCTL(KC_F),                                     KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_EQUAL,       KC_TRANSPARENT, 
    KC_F11,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                                                                                          TO(0),          KC_KP_0,        KC_KP_ENTER,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_NO,                                          TT(5),          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_NO,          DE_RING,        DE_UNDS,        DE_LBRC,        DE_RBRC,        DE_CIRC,        TT(3),                                          KC_TRANSPARENT, DE_EXLM,        DE_LESS,        DE_MORE,        DE_EQL,         DE_AMPR,        KC_F12,         
    KC_NO,          DE_BSLS,        DE_SLSH,        DE_LCBR,        DE_RCBR,        DE_ASTR,        TO(4),                                                                          KC_TRANSPARENT, DE_QST,         DE_LPRN,        DE_RPRN,        KC_KP_MINUS,    DE_COLN,        KC_NO,          
    KC_NO,          DE_HASH,        DE_DLR,         DE_PIPE,        DE_TILD,        DE_GRV,                                         KC_KP_PLUS,     DE_PERC,        DE_DQOT,        DE_QUOT,        DE_SCLN,        KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    AU_TOGG,        KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,TO(0),                                          TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    MU_TOGG,        KC_NO,          KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_NO,          KC_TRANSPARENT,                                 TO(0),          KC_NO,          KC_MS_BTN1,     KC_UP,          KC_MS_BTN2,     KC_NO,          KC_NO,          
    MU_NEXT,        KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          KC_MS_BTN3,     KC_MS_WH_LEFT,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_NO,                                          KC_NO,          DM_REC1,        DM_PLY1,        DM_RSTP,        KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_MS_WH_DOWN,  KC_NO,          KC_MEDIA_PREV_TRACK,                                                                                                KC_MEDIA_NEXT_TRACK,DM_REC2,        DM_PLY2,        DM_RSTP,        KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [4] = LAYOUT_moonlander(
    KC_ESCAPE,      DUAL_FUNC_9,    DUAL_FUNC_10,   DUAL_FUNC_11,   DUAL_FUNC_12,   DUAL_FUNC_13,   DUAL_FUNC_14,                                   KC_NO,          DUAL_FUNC_16,   DUAL_FUNC_17,   DUAL_FUNC_18,   DUAL_FUNC_19,   DUAL_FUNC_20,   KC_BSPC,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Z,           KC_U,           KC_I,           KC_O,           KC_P,           DE_UE,          
    KC_NO,          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           DUAL_FUNC_15,                                                                   KC_NO,          KC_H,           KC_J,           KC_K,           KC_L,           DE_OE,          DE_AE,          
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         DE_COLN,        KC_NO,          
    KC_LEFT_CTRL,   KC_LEFT_GUI,    AS_TOGG,        KC_LEFT_SHIFT,  KC_LEFT_ALT,    TO(0),                                                                                                          DM_REC2,        KC_C,           KC_RIGHT_SHIFT, KC_DELETE,      KC_R,           KC_NO,          
    KC_SPACE,       DM_PLY1,        DM_PLY2,                        DM_REC1,        KC_ENTER,       DM_RSTP
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_SAD,        RGB_SAI,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_TOG,        TOGGLE_LAYER_COLOR,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        RGB_HUD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, RGB_SLD,        RGB_MODE_FORWARD,RGB_SPD,        RGB_SPI,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_AUDIO_OFF,   QK_AUDIO_ON,    QK_BOOT,                                        QK_MUSIC_OFF,   QK_MUSIC_ON,    MU_NEXT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};





extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {131,255,255}, {41,255,255}, {0,245,245}, {41,255,255}, {74,255,255}, {131,255,255}, {41,255,255}, {0,245,245}, {41,255,255}, {188,255,255}, {131,255,255}, {41,255,255}, {0,245,245}, {41,255,255}, {188,255,255}, {131,255,255}, {41,255,255}, {0,245,245}, {41,255,255}, {74,255,255}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {188,255,255}, {188,255,255}, {41,255,255}, {41,255,255}, {188,255,255}, {188,255,255}, {131,255,255}, {131,255,255}, {41,255,255}, {74,255,255}, {74,255,255}, {131,255,255}, {74,255,255}, {0,245,245}, {41,255,255}, {74,255,255}, {131,255,255}, {41,255,255}, {0,245,245}, {41,255,255}, {74,255,255}, {131,255,255}, {41,255,255}, {0,245,245}, {41,255,255}, {188,255,255}, {131,255,255}, {41,255,255}, {0,245,245}, {41,255,255}, {0,245,245}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {41,255,255}, {41,255,255}, {188,255,255}, {188,255,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {188,255,255}, {0,245,245}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {0,245,245}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {71,219,207}, {71,219,207}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {71,219,207}, {0,245,245}, {131,255,255}, {131,255,255}, {131,255,255}, {71,219,207}, {0,245,245}, {131,255,255}, {131,255,255}, {131,255,255}, {41,255,255}, {0,245,245}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {41,255,255}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {131,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {131,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {131,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {131,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {0,245,245}, {152,255,255}, {0,245,245}, {153,200,144}, {0,0,0}, {41,255,255}, {0,245,245}, {0,245,245}, {153,200,144}, {153,200,144}, {0,245,245}, {152,255,255}, {0,245,245}, {153,200,144}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {0,245,245}, {74,255,255}, {74,255,255}, {0,0,0}, {0,245,245}, {0,245,245}, {188,255,255}, {188,255,255}, {0,0,0}, {152,255,255}, {0,245,245}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245} },

    [4] = { {0,245,245}, {0,245,245}, {0,0,0}, {0,245,245}, {0,245,245}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {74,255,255}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {195,255,255}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,245,245}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,245,245}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {188,255,255}, {0,245,245}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {41,255,255}, {41,255,255}, {74,255,255}, {0,0,0}, {131,255,255}, {41,255,255}, {41,255,255}, {74,255,255}, {0,0,0}, {131,255,255}, {41,255,255}, {41,255,255}, {74,255,255}, {0,0,0}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,53}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,205,250}, {0,0,0}, {0,0,0}, {0,0,0}, {167,255,115}, {139,255,66}, {28,252,119}, {0,0,0}, {0,0,0}, {167,197,248}, {139,195,255}, {28,194,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {87,188,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {87,255,128}, {195,255,255}, {0,0,0}, {0,0,0}, {41,255,148}, {0,194,255}, {28,194,255}, {0,0,0}, {0,0,0}, {41,255,255}, {0,255,66}, {28,252,119}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
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
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case DE_LSPO:
      perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_8);
      return false;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_SLSH);
        } else {
          unregister_code16(DE_SLSH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_QST);
        } else {
          unregister_code16(DE_QST);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_LPRN);
        } else {
          unregister_code16(DE_LPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_LBRC);
        } else {
          unregister_code16(DE_LBRC);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_RPRN);
        } else {
          unregister_code16(DE_RPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_RBRC);
        } else {
          unregister_code16(DE_RBRC);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_LESS);
        } else {
          unregister_code16(DE_LESS);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_MORE);
        } else {
          unregister_code16(DE_MORE);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_COLN);
        } else {
          unregister_code16(DE_COLN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_SCLN);
        } else {
          unregister_code16(DE_SCLN);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_UE);
        } else {
          unregister_code16(DE_UE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(DE_UE));
        } else {
          unregister_code16(LSFT(DE_UE));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_AE);
        } else {
          unregister_code16(DE_AE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(DE_AE));
        } else {
          unregister_code16(LSFT(DE_AE));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_OE);
        } else {
          unregister_code16(DE_OE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(DE_OE));
        } else {
          unregister_code16(LSFT(DE_OE));
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F1);
        } else {
          unregister_code16(KC_F1);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F2);
        } else {
          unregister_code16(KC_F2);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F6);
        } else {
          unregister_code16(KC_F6);
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F11);
        } else {
          unregister_code16(KC_F11);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F6);
        } else {
          unregister_code16(KC_F6);
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F7);
        } else {
          unregister_code16(KC_F7);
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

