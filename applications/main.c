/*
 * Copyright (c) 2019 Winner Microelectronics Co., Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2019-02-13     tyx          first implementation
 */

#include <rtthread.h>
#include <rtdevice.h>
#include "lua.h"
#include "lauxlib.h"

int main(void)
{
    luat_main(NULL, NULL, NULL);
    while (1) {
        rt_thread_mdelay(2000000);
    }
    return 0;
}


