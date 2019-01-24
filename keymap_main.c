/* 
 * WIP keymap
 * Modified from hasu's keymap: https://github.com/tmk/tmk_keyboard/blob/master/keyboard/hhkb/keymap_hasu.c
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Normal Qwerty - Default
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| Enter  |
     * |-----------------------------------------------------------|
     * |Shift |  Z|  X|  C|  V|  B|  N|  M|  ,|  .| /| Shift | Fn0 |
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |         Space           |Alt  |Gui|
     *       `-------------------------------------------'
     */
    [0] = \
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT,ENT, \
           LSFT, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, RSFT,FN0, \
                LGUI,LALT,          SPC,                RALT, RGUI),

    /* Layer 1: Placeholder
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |  +|  -|End|PgD|Dow| T7   |   |
     * `-----------------------------------------------------------'
     *       |T2 |T3  |         T4             |T5   | T6|
     *       `-------------------------------------------'
     */ 
    [1] = \
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           CAPS,NO,  NO,  NO,  NO,  NO,  NO,  NO,  PSCR,SLCK,PAUS, UP,  NO,  BSPC, \
           LCTL,VOLD,VOLU,MUTE,NO,  NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,ENT, \
           LSFT,NO,  NO,  NO,  NO,  NO,  PPLS,PMNS,END, PGDN,DOWN,FN7,TRNS, \
                FN2, FN3,          FN4,               FN5,FN6),

    /* Layer 2: Vi mode[Slash]
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |Hom|PgD|Up |PgU|End|Hom|PgD|PgUlEnd|   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |Lef|Dow|Rig|   |Lef|Dow|Up |Rig|   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |Hom|PgD|PgUlEnd|   |Shift |   |
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |          Space        |Alt  |Gui|
     *       `-------------------------------------------'
     */
    [2] = \
    KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TAB, HOME,PGDN,UP,  PGUP,END, HOME,PGDN,PGUP,END, NO,  NO,  NO,  BSPC, \
           LCTL,NO,  LEFT,DOWN,RGHT,NO,  LEFT,DOWN,UP,  RGHT,NO,  NO,  ENT, \
           LSFT,NO,  NO,  NO,  NO,  NO,  HOME,PGDN,PGUP,END, NO, RSFT,FN0, \
                LGUI,LALT,          SPC,                RALT,RGUI),

    /* Layer 3: Mouse mode(UHJK)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Alt-T|   |   |   |   |   |Mb1|McU|Mb2|   |   |Wbk|Wfr|Alt-T|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   |   |MwU|McL|McD|McR|   |   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |MwD|   |   |   |   |   |Shift |   |
     * `-----------------------------------------------------------'
     *      |Gui |Alt  |                       |     |   |
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    [3] = \
    KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           FN8, NO,  NO,  NO,  NO,  NO, BTN1,MS_U, BTN2, NO, NO,FN9, FN10,FN8, \
           LCTL, NO, NO, NO, NO, WH_U, MS_L, MS_D, MS_R, NO, NO, NO,  ENT, \
           LSFT,NO,  NO,  NO,  NO,  WH_D, NO, NO, NO, NO, NO, RSFT,FN0, \
                LGUI,LALT,          NO,               RALT,RGUI),

    /* Layer 4: Keypad
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Alt-T|   |   |   | 7 | 8 | 9 | + | * |   | UP|   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   | 4 | 5 | 6 | - | / |Lef|Dow|Rig|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   | 0 | 1 | 2 | 3 |   |   |   |   |Shift |   |
     * `-----------------------------------------------------------'
     *      |Gui |Alt  |       Return          | Alt |Gui|
     *      `--------------------------------------------'
     */
    [4] = \
    KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           FN8, NO,  NO, NO,  7,  8, 9, PPLS, PAST, NO, UP, NO, NO, BSPC, \
           LCTL, NO, NO, NO, 4, 5, 6, PMNS,PSLS,LEFT,DOWN,RGHT, ENT, \
           LSFT,NO,  NO,  0, 1, 2, 3, NO, NO, NO ,NO,  RSFT,FN0, \
                LGUI,LALT,          ENT,               RALT,RGUI),

    /* Layer 5: Dvorak
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Alt-T|  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  ;|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|Shift |   |
     * `-----------------------------------------------------------'
     *      |Gui |Alt  |       Return          | Alt |Gui|
     *      `--------------------------------------------'
     */
    [5] = \
    KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TAB, QUOT,   COMM,   DOT,   P,   Y,   F,   G,   C,   R,   L,  SLSH,EQL,BSPC, \
           LCTL,A,   O,   E,   U,   I,   D,   H,   T,   N,   S, MINS, ENT, \
           LSFT, SCLN,   Q,   J,   K,   X,   B,   M,   W, V, Z, RSFT, FN0, \
                LGUI,LALT,          SPC,                RALT, RGUI),

    /* Layer 6: Dvorak copy [PLACEHOLDER]
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Alt-T|  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  ;|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|Shift |   |
     * `-----------------------------------------------------------'
     *      |Gui |Alt  |       Return          | Alt |Gui|
     *      `--------------------------------------------'
     */
    [6] = \
    KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TAB, QUOT,   COMM,   DOT,   P,   Y,   F,   G,   C,   R,   L,  SLSH,EQL,BSPC, \
           LCTL,A,   O,   E,   U,   I,   D,   H,   T,   N,   S, MINS, ENT, \
           LSFT, SCLN,   Q,   J,   K,   X,   B,   M,   W, V, Z, RSFT, FN0, \
                LGUI,LALT,          SPC,                RALT, RGUI),

    /* Layer 7: Mess Around
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Alt-T|   |   |   | 7 | 8 | 9 | + | * |   | UP|   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   | 4 | 5 | 6 | - | / |Lef|Dow|Rig|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   | 0 | 1 | 2 | 3 |   |   |   |   |Shift |   |
     * `-----------------------------------------------------------'
     *      |Gui |Alt  |       Return          | Alt |Gui|
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    [7] = \
    KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TAB, FN12,   COMM,   DOT,   P,   Y,   F,   G,   C,   R,   L,  SLSH,EQL,BSPC, \
           LCTL,A,   O,   E,   U,   I,   D,   H,   T,   N,   S, MINS, ENT, \
           LSFT, SCLN,   Q,   J,   K,   X,   B,   M,   W, V, Z, RSFT, FN0, \
                LGUI,LALT,          FN11,                RALT, RGUI),
    /* Layer 8: HHKB mode[HHKB Fn] Modified to switch between layers
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |T1      |   |   |   |   |   |  +|  -|End|PgD|Dow| T7   |   |
     * `-----------------------------------------------------------'
     *       |T2 |T3  |         T4             |T5   | T6|
     *       `-------------------------------------------'
     */ 
    [8] = \
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           CAPS,NO,  NO,  NO,  NO,  NO,  NO,  NO,  PSCR,SLCK,PAUS, UP,  NO,  BSPC, \
           LCTL,VOLD,VOLU,MUTE,NO,  NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,ENT, \
           FN1,NO,  NO,  NO,  NO,  NO,  PPLS,PMNS,END, PGDN,DOWN,FN7,TRNS, \
                FN2, FN3,          FN4,               FN5,FN6),

};



/* id for user defined functions */
enum function_id {
    LSHIFT_LPAREN,
};

enum macro_id {
    FORTNITE,
    HELLO,
    VOLUP,
    ALT_TAB,
};


/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(8),                  // HHKB Layer
    [1] = ACTION_LAYER_TOGGLE(1),                     // PLACEHOLDER
    [2] = ACTION_LAYER_TOGGLE(2),                     // Vi Layer
    [3] = ACTION_LAYER_TOGGLE(3),                     // Mouse Layer
    [4] = ACTION_LAYER_TOGGLE(4),                     // Keypad Layer
    [5] = ACTION_LAYER_TOGGLE(5),                     // Dvorak Layer
    [6] = ACTION_LAYER_TOGGLE(6),                     // PLACEHOLDER Layer
    [7] = ACTION_LAYER_TOGGLE(7),                     // Messaround Layer
    [8] = ACTION_MACRO(ALT_TAB),                      // Application switching
    [9] = ACTION_MODS_KEY(MOD_LALT, KC_LEFT),
   [10] = ACTION_MODS_KEY(MOD_LALT, KC_RIGHT),
   [11] = ACTION_MACRO(FORTNITE),                     // Fortnite !Land
   [12] = ACTION_MACRO(HELLO),                        // Macro: say hello

//  [x] = ACTION_LMOD_TAP_KEY(KC_LCTL, KC_BSPC),  LControl with tap Backspace
//  [x] = ACTION_LMOD_TAP_KEY(KC_LCTL, KC_ESC),         // LControl with tap Esc
//  [x] = ACTION_FUNCTION_TAP(LSHIFT_LPAREN),           // Function: LShift with tap '('
//  [x] = ACTION_MACRO(VOLUP),                          // Macro: media key
};


/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
         case FORTNITE:
             return (record->event.pressed ?
                     MACRO( D(LSHIFT), D(1), U(1), U(LSHIFT), T(L), T(A), T(N), T(D), T(ENTER), END) :
                     MACRO_NONE);
        case HELLO:
            return (record->event.pressed ?
                    MACRO( I(0), T(H), T(E), T(L), T(L), W(255), T(O), END ) :
                    MACRO_NONE );
        case VOLUP:
            return (record->event.pressed ?
                    MACRO( D(VOLU), U(VOLU), END ) :
                    MACRO_NONE );
        case ALT_TAB:
            return (record->event.pressed ?
                    MACRO( D(LALT), D(TAB), END ) :
                    MACRO( U(TAB), END ));
    }
    return MACRO_NONE;
}



/*
 * user defined action function
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (record->event.pressed) dprint("P"); else dprint("R");
    dprintf("%d", record->tap.count);
    if (record->tap.interrupted) dprint("i");
    dprint("\n");

    switch (id) {
        case LSHIFT_LPAREN:
            // Shift parentheses example: LShft + tap '('
            // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
            // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        dprint("tap interrupted\n");
                        register_mods(MOD_BIT(KC_LSHIFT));
                    }
                } else {
                    register_mods(MOD_BIT(KC_LSHIFT));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    add_weak_mods(MOD_BIT(KC_LSHIFT));
                    send_keyboard_report();
                    register_code(KC_9);
                    unregister_code(KC_9);
                    del_weak_mods(MOD_BIT(KC_LSHIFT));
                    send_keyboard_report();
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_LSHIFT));
                }
            }
            break;
    }
}
