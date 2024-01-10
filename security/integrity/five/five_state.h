/*
 * FIVE State machine
 *
 * Copyright (C) 2017 Samsung Electronics, Inc.
 * Egor Uleyskiy, <e.uleyskiy@samsung.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __LINUX_FIVE_STATE_MACHINE_H
#define __LINUX_FIVE_STATE_MACHINE_H

#include "five.h"

bool five_state_proceed(struct integrity_iint_cache *iint,
			struct task_integrity *integrity,
			enum five_hooks fn,
			enum task_integrity_value *new_tint,
			const char **msg);

#endif // __LINUX_FIVE_STATE_MACHINE_H
