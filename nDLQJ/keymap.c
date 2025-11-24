#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  DRAG_SCROLL,
  TOGGLE_SCROLL,
  NAVIGATOR_INC_CPI,
  NAVIGATOR_DEC_CPI,
  NAVIGATOR_TURBO,
  NAVIGATOR_AIM
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(6),          
    KC_TRANSPARENT, KC_J,           KC_D,           KC_U,           KC_A,           KC_X,                                           KC_P,           KC_H,           KC_L,           KC_M,           KC_W,           KC_TRANSPARENT, 
    DE_SS,          MT(MOD_LGUI, KC_C),MT(MOD_LALT, KC_T),MT(MOD_LCTL, KC_I),MT(MOD_LSFT, KC_E),KC_O,                                           KC_B,           MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_R),MT(MOD_LALT, KC_S),MT(MOD_RGUI, KC_G),KC_Q,           
    LM(5,MOD_LALT), KC_F,           KC_V,           DE_UE,          DE_AE,          DE_OE,                                          DE_Y,           DE_Z,           KC_COMMA,       KC_DOT,         KC_K,           MO(4),          
                                                    KC_SPACE,       MO(1),                                          MO(2),          KC_ENTER
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    CW_TOGG,        KC_NO,          DE_LCBR,        DE_LBRC,        DE_LPRN,        KC_MS_BTN4,                                     KC_MS_BTN5,     DE_RPRN,        DE_RBRC,        DE_RCBR,        KC_NO,          KC_F12,         
    KC_ESCAPE,      KC_HOME,        KC_LEFT_SHIFT,  KC_LEFT,        KC_UP,          KC_BSPC,                                        KC_DELETE,      KC_DOWN,        KC_RIGHT,       KC_LEFT_CTRL,   KC_END,         KC_TAB,         
    LCTL(KC_F),     LCTL(KC_A),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_S),                                     LCTL(DE_Y),     LCTL(DE_Z),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_NO,          KC_TRANSPARENT,                                 KC_RIGHT_GUI,   KC_LEFT_ALT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_TILD,        ST_MACRO_0,     DE_PLUS,        DE_MINS,        DE_LBRC,                                        DE_RBRC,        DE_ASTR,        DE_SLSH,        DE_BSLS,        DE_RING,        KC_TRANSPARENT, 
    DE_LCBR,        DE_UNDS,        DE_QUOT,        DE_DQOT,        DE_EQL,         DE_LPRN,                                        DE_RPRN,        DE_QST,         DE_EXLM,        DE_SCLN,        DE_COLN,        DE_RCBR,        
    KC_TRANSPARENT, DE_AT,          ST_MACRO_1,     DE_PIPE,        DE_AMPR,        DE_LESS,                                        DE_MORE,        DE_HASH,        DE_PERC,        DE_DLR,         DE_EURO,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, MO(3),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_F17,                                         KC_F18,         KC_F19,         KC_F20,         KC_F21,         KC_F22,         KC_F23,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F24,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_LEFT,     KC_MS_UP,       KC_PAGE_UP,                                     KC_PGDN,        KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LSFT(KC_AUDIO_VOL_DOWN),LSFT(KC_AUDIO_VOL_UP),LSFT(KC_MEDIA_PREV_TRACK),LSFT(KC_MEDIA_PLAY_PAUSE),LSFT(KC_MEDIA_NEXT_TRACK),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(KC_AUDIO_VOL_DOWN),LCTL(KC_AUDIO_VOL_UP),LCTL(KC_MEDIA_PREV_TRACK),LCTL(KC_MEDIA_PLAY_PAUSE),LCTL(KC_MEDIA_NEXT_TRACK),KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 LALT(LCTL(LSFT(KC_F13))),KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    LSFT(KC_TAB),   KC_TAB,                                         KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TAB,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(0),          
    KC_T,           KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,                                           DE_Z,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPC,        
    KC_G,           KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_UP,          KC_RIGHT_SHIFT, 
    KC_B,           KC_LEFT_CTRL,   DE_Y,           KC_X,           KC_C,           KC_V,                                           KC_N,           KC_M,           KC_COMMA,       KC_LEFT,        KC_DOWN,        KC_RIGHT,       
                                                    KC_SPACE,       KC_LEFT_ALT,                                    KC_RIGHT_ALT,   KC_ENTER
  ),
  [7] = LAYOUT_voyager(
    NAVIGATOR_DEC_CPI,NAVIGATOR_INC_CPI,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        TOGGLE_SCROLL,  KC_MS_BTN3,     QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,     TOGGLE_SCROLL,                                  DRAG_SCROLL,    KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN1,     DRAG_SCROLL,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
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
    [6] = { {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,255}, {0,0,255}, {0,255,255}, {0,255,124}, {0,255,124}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,255}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,255}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124}, {0,255,124} },

    [7] = { {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {233,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {233,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {233,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {233,218,204}, {0,245,245}, {233,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {233,218,204}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
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

extern bool set_scrolling;
extern bool navigator_turbo;
extern bool navigator_aim;
void pointing_device_init_user(void) {
  set_auto_mouse_enable(true);
}

bool is_mouse_record_user(uint16_t keycode, keyrecord_t* record) {
  // Treat all keys as mouse keys when in the automouse layer so that any key set resets the timeout without leaving the layer.
  if (!layer_state_is(AUTO_MOUSE_TARGET_LAYER)){
    // When depressing a mouse key with a LT key at the same time, the mouse key tracker is not decremented.
    // This is a workaround to fix that
    if (IS_MOUSE_KEYCODE(keycode) && !record->event.pressed) {
      return true;
    }
    return false;
  }
  else {
    return false;
  }
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
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_EQUAL))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;

    case DRAG_SCROLL:
      if (record->event.pressed) {
        set_scrolling = true;
      } else {
        set_scrolling = false;
      }
      return false;
    case TOGGLE_SCROLL:
      if (record->event.pressed) {
        set_scrolling = !set_scrolling;
      }
      return false;
    break;
  case NAVIGATOR_TURBO:
    if (record->event.pressed) {
      navigator_turbo = true;
    } else {
      navigator_turbo = false;
    }
    return false;
  case NAVIGATOR_AIM:
    if (record->event.pressed) {
      navigator_aim = true;
    } else {
      navigator_aim = false;
    }
    return false;
  case NAVIGATOR_INC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(1);
    }
    return false;
  case NAVIGATOR_DEC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(0);
    }
    return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
