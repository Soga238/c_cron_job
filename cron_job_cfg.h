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
#ifndef CRON_JOB_CFG_H
#define CRON_JOB_CFG_H
#ifdef __cplusplus
extern "C" {
#endif

/* Includes --------------------------------------------------------*/
/* Global define ---------------------------------------------------*/
#define CRON_SUPPORT_SECOND

// #define CUSTOM_TIME_IMPLEMENTATION
#define TIME_R(__PTR)       _time(__PTR)

// #define CUSTOM_JOB_PRINTF
// #define PRINTF              shell_print

// #define CUSTOM_JOB_MALLOC
// #define JOB_MALLOC(__SIZE)  iot_os_malloc(__SIZE)
// #define JOB_FREE(__PTR)     iot_os_free(__PTR)

/* Global macro ----------------------------------------------------*/
/* Global typedef --------------------------------------------------*/
/* Global variables ------------------------------------------------*/
/* Global function prototypes --------------------------------------*/
// extern time_t _time(time_t *time);

#ifdef __cplusplus
}
#endif
#endif

/*************************** End of file ****************************/
