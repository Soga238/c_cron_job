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
#include <stddef.h>
#include "cron_job_cfg.h"

/* Global variables ------------------------------------------------*/
/* Private typedef -------------------------------------------------*/
/* Private define --------------------------------------------------*/
/* Private macro ---------------------------------------------------*/
/* Private variables -----------------------------------------------*/
/* Private function prototypes -------------------------------------*/
/* Private functions -----------------------------------------------*/
#ifdef CUSTOM_TIME_IMPLEMENTATION
time_t cron_time(time_t *time)
{
    return 0;
}
#endif

#ifdef CUSTOM_MKTIME_IMPLEMENTATION
time_t cron_mktime(struct tm* const tm)
{
    return 0;
}
#endif

#ifdef CUSTOM_JOB_MALLOC
void *cron_malloc(size_t tSize)
{
    return 0;
}

void cron_free(void *p)
{

}
#endif

/*************************** End of file ****************************/
