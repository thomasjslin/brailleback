/*
 * Copyright (C) 2015 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 */

/*
 * NOTE: A similar file is generated by the native brltty build system.
 * This file was hand-written for the drivers that are supported on
 * Android.
 */

#include "brl_types.h"

// ADD_DEVICE_SUPPORT
extern const BrailleDriver brl_driver_vo;
extern const BrailleDriver brl_driver_eu;
extern const BrailleDriver brl_driver_fs;
extern const BrailleDriver brl_driver_hw;
extern const BrailleDriver brl_driver_bm;
extern const BrailleDriver brl_driver_pm;
extern const BrailleDriver brl_driver_hm;
extern const BrailleDriver brl_driver_al;
extern const BrailleDriver brl_driver_sk;
extern const BrailleDriver brl_driver_ht;
static const DriverEntry driverTable[] = {
  {&brl_driver_vo, &brl_driver_vo.definition},
  {&brl_driver_eu, &brl_driver_eu.definition},
  {&brl_driver_fs, &brl_driver_fs.definition},
  {&brl_driver_hw, &brl_driver_hw.definition},
  {&brl_driver_bm, &brl_driver_bm.definition},
  {&brl_driver_pm, &brl_driver_pm.definition},
  {&brl_driver_hm, &brl_driver_hm.definition},
  {&brl_driver_al, &brl_driver_al.definition},
  {&brl_driver_sk, &brl_driver_sk.definition},
  {&brl_driver_ht, &brl_driver_ht.definition},
  {NULL, NULL}
};
