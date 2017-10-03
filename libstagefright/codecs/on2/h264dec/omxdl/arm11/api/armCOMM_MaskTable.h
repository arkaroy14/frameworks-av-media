/*
 * Copyright (C) 2007-2008 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
/**
 * 
 * File Name:  armCOMM_MaskTable.h
 * OpenMAX DL: v1.0.2
 * Revision:   9641
 * Date:       Thursday, February 7, 2008
 * 
 * 
 * 
 *
 * Mask Table to mask the end of array
 */
 


#ifndef _ARMCOMM_MASKTABLE_H_
#define _ARMCOMM_MASKTABLE_H_

#define MaskTableSize 72
  
/* Mask table */

extern const OMX_U16 armCOMM_qMaskTable16[MaskTableSize];
extern const OMX_U8 armCOMM_qMaskTable8[MaskTableSize];

#endif
