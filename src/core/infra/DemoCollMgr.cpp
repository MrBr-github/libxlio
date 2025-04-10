/*
 * SPDX-FileCopyrightText: NVIDIA CORPORATION & AFFILIATES
 * Copyright (c) 2001-2024 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: GPL-2.0-only or BSD-3-Clause
 *
 * This software is available to you under a choice of one of two
 * licenses.  You may choose to be licensed under the terms of the GNU
 * General Public License (GPL) Version 2, available from the file
 * COPYING in the main directory of this source tree, or the
 * BSD license below:
 *
 *     Redistribution and use in source and binary forms, with or
 *     without modification, are permitted provided that the following
 *     conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "DemoCollMgr.h"

Demo_Coll_Mgr1::Demo_Coll_Mgr1()
    : cache_collection_mgr<key_class<demo_subject_1_key_t>, demo_subject_1_value_t>(
          "lock: Demo_Coll_Mgr1")
{
    printf("created collection mgr: char --> int\n");
}

Demo_Subject1 *Demo_Coll_Mgr1::create_new_entry(key_class<demo_subject_1_key_t> key,
                                                const observer *obs)
{
    NOT_IN_USE(obs);
    return new Demo_Subject1(key.get_actual_key());
}

Demo_Coll_Mgr1::~Demo_Coll_Mgr1()
{
}

Demo_Coll_Mgr2::Demo_Coll_Mgr2()
    : cache_collection_mgr<key_class<demo_subject_2_key_t>, demo_subject_2_value_t>(
          "lock: Demo_Coll_Mgr2")
{
    printf("created collection mgr: int --> uint \n");
}

Demo_Subject2 *Demo_Coll_Mgr2::create_new_entry(key_class<demo_subject_2_key_t> key,
                                                const observer *obs)
{
    NOT_IN_USE(obs);
    return new Demo_Subject2(key.get_actual_key());
}

Demo_Coll_Mgr2::~Demo_Coll_Mgr2()
{
}
