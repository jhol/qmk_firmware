#include QMK_KEYBOARD_H
#include "rs.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     GRV , 1  , 2  , 3  , 4  , 5  ,                6  , 7  , 8  , 9  , 0  ,MINS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     TAB , Q  , W  , E  , R  , T  ,                Y  , U  , I  , O  , P  ,EQL ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     ESCC, A  , S  , D  , F  , G  ,                H  , J  , K  , L  ,SCLN,QUOT,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     LSFT, Z  , X  , C  , V  , B  ,SPC,      BSPC, N  , M  ,COMM,DOT ,SLSH,ENTS,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                       LALT,LGUI,SPC ,         BSPC,CODE,FN
  //                  `----+----+----'        `+---+----+----'
  ),
  [_CODE] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     GRV ,EXLM, AT ,HASH, DLR,PERC,               CIRC,LPLT,ASTR,RPGT,NEQL,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         , 1  , 2  , 3  , 4  , 5  ,               MINS,LBRC, UP ,RBRC,    ,BSLS,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         , 6  , 7  , 8  , 9  , 0  ,    ,         ,AMPR,LEFT,DOWN,RGHT,    ,PIPE,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    , DOT,             ,    ,
  //                  `----+----+----'        `----+----+----'
  ),
  [_FN] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         , F1 , F2 , F3 , F4 , F5 ,                F6 , F7 , F8 , F9 , F10, F11,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     BLTG,BLUP,    ,    ,    ,BRMU,                   ,    ,PGUP,    ,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         ,BLDN,    ,    ,RST ,BRMD,    ,     VOLU,    ,CTRA,PGDN,CTRE,    ,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,     ,         VOLD,MUTE,
  //                  `----+----+----'        `----+----+----'
  ),
};

