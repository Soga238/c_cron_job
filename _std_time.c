/****************************************************************************
 * Copyright (c) [2021] [Soga] [core.zhang@outlook.com]                     *
 * [] is licensed under Mulan PSL v2.                                       *
 * You can use this software according to the terms and conditions of       *
 * the Mulan PSL v2.                                                        *
 * You may obtain a copy of Mulan PSL v2 at:                                *
 *          http://license.coscl.org.cn/MulanPSL2                           *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF     *
 * ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO        *
 * NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.       *
 * See the Mulan PSL v2 for more details.                                   *
 *                                                                          *
 ***************************************************************************/

/* Includes --------------------------------------------------------*/
#include <time.h>
#include "./cron_job_cfg.h"

/* Global variables ------------------------------------------------*/
/* Private typedef -------------------------------------------------*/
/* Private define --------------------------------------------------*/
/* Private macro ---------------------------------------------------*/
/* Private variables -----------------------------------------------*/
/* Private function prototypes -------------------------------------*/
/* Private functions -----------------------------------------------*/
#ifdef CUSTOM_TIME_IMPLEMENTATION
static unsigned long _mktime(unsigned int year0,    // 1970 -
                             unsigned char mon0,    // 1 - 12
                             unsigned char day,     // 1 - 31
                             unsigned char hour,    // 0 - 23
                             unsigned char min,     // 0 - 59
                             unsigned char sec)     // 0 - 59
{
    unsigned int mon = mon0, year = year0;
    unsigned long time;

    /* 1..12 -> 11,12,1..10 */
    if (0 >= (int) (mon -= 2)) {
        mon += 12;    /* Puts Feb last since it has leap day */
        year -= 1;
    }

    time = (year / 4 - year / 100 + year / 400 + 367 * mon / 12 + day);
    time = (((time + year * 365 - 719499) * 24 + hour) * 60 + min) * 60 + sec;
    return time;
}

time_t _time(time_t *time)
{
    return 0;
}
#endif

/*************************** End of file ****************************/
