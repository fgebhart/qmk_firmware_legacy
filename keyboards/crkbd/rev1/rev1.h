/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "crkbd.h"
#include "quantum.h"

// clang-format off
#define LAYOUT_split_3x6_3( \
  K00, K01, K02, K03, K04, K05,           K06, K07, K08, K09, K10, K11, \
  K12, K13, K14, K15, K16, K17,           K18, K19, K20, K21, K22, K23, \
  K24, K25, K26, K27, K28, K29,           K30, K31, K32, K33, K34, K35, \
                      K36, K37, K38, K39, K40, K41 \
  ) \
  { \
    { K00, K01, K02, K03, K04, K05 }, \
    { K12, K13, K14, K15, K16, K17 }, \
    { K24, K25, K26, K27, K28, K29 }, \
    { KC_NO, KC_NO, KC_NO, K36, K37, K38 }, \
    { K11, K10, K09, K08, K07, K06 }, \
    { K23, K22, K21, K20, K19, K18 }, \
    { K35, K34, K33, K32, K31, K30 }, \
    { KC_NO, KC_NO, KC_NO, K41, K40, K39 } \
  }

#define LAYOUT_split_3x5_3( \
  K00, K01, K02, K03, K04,           K06, K07, K08, K09, K10, \
  K12, K13, K14, K15, K16,           K18, K19, K20, K21, K22, \
  K24, K25, K26, K27, K28,           K30, K31, K32, K33, K34, \
                 K36, K37, K38, K39, K40, K41 \
  ) \
  { \
    { KC_NO, K00, K01, K02, K03, K04 }, \
    { KC_NO, K12, K13, K14, K15, K16 }, \
    { KC_NO, K24, K25, K26, K27, K28 }, \
    { KC_NO, KC_NO, KC_NO, K36, K37, K38 }, \
    { KC_NO, K10, K09, K08, K07, K06 }, \
    { KC_NO, K22, K21, K20, K19, K18 }, \
    { KC_NO, K34, K33, K32, K31, K30 }, \
    { KC_NO, KC_NO, KC_NO, K41, K40, K39 } \
  }


#define LAYOUT LAYOUT_split_3x6_3
