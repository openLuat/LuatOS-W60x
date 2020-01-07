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
    /* set wifi work mode */
    //rt_wlan_set_mode(RT_WLAN_DEVICE_STA_NAME, RT_WLAN_STATION);
    //rt_wlan_set_mode(RT_WLAN_DEVICE_AP_NAME, RT_WLAN_AP);
    //rt_thread_mdelay(5000);
    luat_main(NULL, NULL, NULL);
    //rt_pin_mode(14, PIN_MODE_OUTPUT);
    //rt_pin_mode(15, PIN_MODE_OUTPUT);
    while (1) {
        /*
        rt_pin_write(14, 0);
        rt_pin_write(15, 0);
        rt_thread_mdelay(2000);
        rt_pin_write(14, 1);
        rt_pin_write(15, 1);
        rt_thread_mdelay(2000);
        */
        rt_thread_mdelay(2000000);
    }
    return 0;
}


