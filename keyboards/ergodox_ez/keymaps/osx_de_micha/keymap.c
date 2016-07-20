#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "keymap_german_osx.h"

#define BASE 0
#define SYMB 1
#define NAVI 2

#define M_CTRL_CMDV 0
#define M_CTRL_CMDC 1
#define M_MEH_SH_ACUT 2
#define M_LGUI_SHFT 3
#define M_CTL_SFT_HASH 4
#define M_DE_OSX_CIRC_CTRLCMD 5
#define M_DE_OSX_PLUS_CTRLALT 6
#define SM_SMILE 7
#define SM_SMIRK 8
#define SM_CRY 9
#define SM_SAD 10
#define SM_HEART 11
#define SM_LAUGH 12
#define SM_KISS 13
#define SM_FROWN 14
#define M_TOGGLE_5 15

//Layout keymap.c generated with ErgodoxLayoutGenerator V1.0BETA1
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE]=KEYMAP(
    //left half
    KC_ESC,       KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,
    KC_TAB,       DE_OSX_Q, DE_OSX_W, DE_OSX_E, DE_OSX_R, DE_OSX_T, KC_VOLU /* vol+ */,
    MO(SYMB),     DE_OSX_A, DE_OSX_S, DE_OSX_D, DE_OSX_F, DE_OSX_G,
    KC_LSFT,      DE_OSX_Y, DE_OSX_X, DE_OSX_C, DE_OSX_V, DE_OSX_B, KC_VOLD /* vol- */,
    DE_OSX_LESS,  KC_SPC,   KC_LCTL,  KC_LALT,  KC_LGUI,
                                                KC_MUTE,  KC_MPRV /* prev */,
                                                          KC_NO  /* KC_SYSTEM_SLEEP reserved */,
                                      MO(NAVI), KC_LSFT,  KC_ENT,
    //right half
    KC_F7,   KC_F8,    KC_F9,    KC_F10,      KC_F11,     KC_F12,      DE_OSX_SS,
    KC_PSCR, DE_OSX_Z, DE_OSX_U, DE_OSX_I,    DE_OSX_O,   DE_OSX_P,    DE_OSX_UE,
             DE_OSX_H, DE_OSX_J, DE_OSX_K,    DE_OSX_L,   DE_OSX_OE,   DE_OSX_AE,
    KC_PAUS, DE_OSX_N, DE_OSX_M, DE_OSX_COMM, DE_OSX_DOT, DE_OSX_MINS, KC_RSFT,
                       KC_SPC,   KC_RALT,     KC_RGUI,    KC_F13,      KC_F14,
    KC_MNXT, KC_MPLY,
    MEH_T(KC_NO) /* ctrl+shift+alt */,
    C_S_T(KC_NO) /* ctrl+shift */, KC_RCTL, MO(SYMB)),
[SYMB]=KEYMAP(
    //left half
    KC_TRNS, KC_1,        KC_2,        KC_3,        KC_4,        KC_5,        KC_NO,
    KC_TRNS, DE_OSX_RING, DE_OSX_UNDS, DE_OSX_LBRC, DE_OSX_RBRC, DE_OSX_CIRC, KC_TRNS,
    KC_TRNS, DE_OSX_BSLS, DE_OSX_SLSH, DE_OSX_LCBR, DE_OSX_RCBR, DE_OSX_ASTR,
    KC_TRNS, DE_OSX_HASH, DE_OSX_DLR,  DE_OSX_PIPE, DE_OSX_TILD, DE_OSX_GRV,  KC_TRNS,
    KC_TRNS, KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                                                    KC_TRNS, KC_TRNS,
                                                             KC_TRNS,
                                           KC_TRNS, KC_TRNS, KC_TRNS,
    //right half
    KC_TRNS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS,
    KC_TRNS, DE_OSX_EXLM, DE_OSX_LESS, DE_OSX_MORE, DE_OSX_EQL,  DE_OSX_AMPR, DE_OSX_ACUT,
             DE_OSX_QST,  DE_OSX_LPRN, DE_OSX_RPRN, DE_OSX_MINS, DE_OSX_COLN, DE_OSX_AT,
    KC_TRNS, DE_OSX_PLUS, DE_OSX_PERC, DE_OSX_DQOT, DE_OSX_QUOT, DE_OSX_SCLN, DE_OSX_EURO,
                          KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS,
    KC_TRNS, KC_TRNS,     KC_TRNS),
[NAVI]=KEYMAP(
    //left half
    KC_TRNS,     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,
    KC_TRNS,     KC_PGUP, KC_BSPC, KC_UP,   KC_DELT, KC_PGDN, KC_TRNS,
    KC_TRNS,     KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,
    KC_TRNS,     KC_ESC,  KC_TAB,  KC_INS,  KC_ENT,  KC_NO,   KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS,
                                                              KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,
    //right half
    KC_F7,   KC_F8,    KC_ESC,   KC_PSLS,     KC_PAST,    KC_PMNS,    KC_TRNS,
    KC_TRNS, KC_PGUP,  KC_7,     KC_8,        KC_9,       KC_PPLS,    KC_TRNS,
             KC_PGDN,  KC_4,     KC_5,        KC_6,       KC_COMM,    KC_TRNS, /* TODO -> hier könnte noch eine Ebene für Maussteuerung umgeschalten werden */
    KC_TRNS, KC_NO,    KC_1,     KC_2,        KC_3,       KC_ENT,     KC_TRNS,
                       KC_0,     KC_DOT,      KC_COMM,    DE_OSX_EQL, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  static uint16_t start;
  switch(id) {
    case M_TOGGLE_5:
      //Macro: M_TOGGLE_5//-----------------------
      if (record->event.pressed){
        layer_state ^= (1<<5);
        layer_state &= (1<<5);
      }

      break;
    case M_CTRL_CMDC:
      //Macro: M_CTRL_CMDC//-----------------------
      if (record->event.pressed) {
        start = timer_read();
        return MACRO(D(LCTRL),END);
      } else {
        if (timer_elapsed(start) >150) {
          return MACRO(U(LCTRL),END);
        } else {
          return MACRO(U(LCTRL),D(LGUI),T(C),U(LGUI),END);
        }
      }

      break;
    case M_DE_OSX_PLUS_CTRLALT:
      //Macro: M_DE_OSX_PLUS_CTRLALT//-----------------------
      if (record->event.pressed) {
        start = timer_read();
        return MACRO(D(LCTRL),D(LALT),END);
      } else {
        if (timer_elapsed(start) >150) {
          return MACRO(U(LCTRL),U(LALT),END);
        } else {
          return MACRO(U(LCTRL),U(LALT),T(RBRC),END);
        }
      }

      break;
    case SM_KISS:
      //Macro: SM_KISS//-----------------------
      if (record->event.pressed) {
        return MACRO(D(LSFT),T(DOT),U(LSFT),T(SLSH),D(LSFT),T(RBRC),U(LSFT),END);
      }

      break;
    case SM_FROWN:
      //Macro: SM_FROWN//-----------------------
      if (record->event.pressed) {
        return MACRO(D(LSFT),T(DOT),U(LSFT),T(SLSH),D(LALT),T(8),U(LALT),END);
      }

      break;
    case SM_CRY:
      //Macro: SM_CRY//-----------------------
      if (record->event.pressed) {
        return MACRO(D(LSFT),T(COMM),U(LSFT),T(SLSH),D(LSFT),T(8),U(LSFT),END);
      }

      break;
    case SM_SMILE:
      //Macro: SM_SMILE//-----------------------
      if (record->event.pressed) {
        return MACRO(D(LSFT),T(DOT),U(LSFT),T(SLSH),D(LSFT),T(9),U(LSFT),END);
      }

      break;
    case SM_SMIRK:
      //Macro: SM_SMIRK//-----------------------
      if (record->event.pressed) {
        return MACRO(D(LSFT),T(COMM),U(LSFT),T(SLSH),D(LSFT),T(9),U(LSFT),END);
      }

      break;
    case M_LGUI_SHFT:
      //Macro: M_LGUI_SHFT//-----------------------
      if (record->event.pressed){
        return MACRO(D(LGUI),D(LSFT),END);
      }else{
        return MACRO(U(LGUI),U(LSFT),END);
      }

      break;
    case SM_HEART:
      //Macro: SM_HEART//-----------------------
      if (record->event.pressed) {
        return MACRO(T(GRV),T(3),END);
      }

      break;
    case SM_LAUGH:
      //Macro: SM_LAUGH//-----------------------
      if (record->event.pressed) {
            return MACRO(D(LSFT),T(DOT),U(LSFT),T(SLSH),D(LSFT),T(D),U(LSFT),END);
          }

      break;
    case M_CTL_SFT_HASH:
      //Macro: M_CTL_SFT_HASH//-----------------------
      if (record->event.pressed) {
        start = timer_read();
        return MACRO(D(LCTRL),D(LSFT),END);
      } else {
        if (timer_elapsed(start) >150) {
          return MACRO(U(LCTRL),U(LSFT),END);
        } else {
          return MACRO(U(LCTRL),U(LSFT),T(BSLS),END);
        }
      }

      break;
    case SM_SAD:
      //Macro: SM_SAD//-----------------------
      if (record->event.pressed) {
        return MACRO(D(LSFT),T(DOT),U(LSFT),T(SLSH),D(LSFT),T(8),U(LSFT),END);
      }

      break;
    case M_DE_OSX_CIRC_CTRLCMD:
      //Macro: M_DE_OSX_CIRC_CTRLCMD//-----------------------
      if (record->event.pressed) {
        start = timer_read();
        return MACRO(D(LCTRL),D(LGUI),END);
      } else {
        if (timer_elapsed(start) >150) {
          return MACRO(U(LCTRL),U(LGUI),END);
        } else {
          return MACRO(U(LCTRL),U(LGUI),T(NUBS),END);
        }
      }

      break;
    case M_CTRL_CMDV:
      //Macro: M_CTRL_CMDV//-----------------------
      if (record->event.pressed) {
        start = timer_read();
        return MACRO(D(LCTRL),END);
      } else {
        if (timer_elapsed(start) >150) {
          return MACRO(U(LCTRL),END);
        } else {
          return MACRO(U(LCTRL),D(LGUI),T(V),U(LGUI),END);
        }
      }

      break;
    case M_MEH_SH_ACUT:
      //Macro: M_MEH_SH_ACUT//-----------------------
      if (record->event.pressed) {
        start = timer_read();
        return MACRO(D(LCTRL),D(LSFT),D(LALT),END);
      } else {
        if (timer_elapsed(start) >150) {
          return MACRO(U(LCTRL),U(LSFT),U(LALT),END);
        } else {
          return MACRO(U(LCTRL),U(LALT),T(EQL),U(LSFT),END);
        }
      }

      break;
    }

  return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
  uint8_t layer = biton32(layer_state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case SYMB:
      //ergodox_right_led_1_on();
      break;
    case NAVI:
      //ergodox_right_led_2_on();
      break;
    default:
    // none
      break;
  }
};

