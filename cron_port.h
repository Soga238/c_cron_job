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
#ifndef CRON_PORT_H
#define CRON_PORT_H

/* Includes --------------------------------------------------------*/
#include <time.h>
#ifdef __cplusplus
extern "C" {
#endif

/* Global define ---------------------------------------------------*/
/* Global macro ----------------------------------------------------*/
/* Global typedef --------------------------------------------------*/
/* Global variables ------------------------------------------------*/
/* Global function prototypes --------------------------------------*/
extern time_t cron_time(time_t *time);

extern time_t cron_mktime(struct tm* const tm);

extern void *cron_malloc(size_t tSize);

extern void cron_free(void *p);

#ifdef __cplusplus
}
#endif

#endif
/*************************** End of file ****************************/
