#define __STDC_WANT_LIB_EXT1__ 1
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <pthread.h>
#include "cron_job.h"

pthread_cond_t      cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t     cond_mutex = PTHREAD_MUTEX_INITIALIZER;

void cb(int32_t nId)
{
    time_t cur = time(NULL);
    struct tm *tm = localtime(&cur);
    printf("task %d run in %02d:%02d:%02d\n",
            nId, tm->tm_hour, tm->tm_min, tm->tm_sec);
}

void *thread( void *arg )
{
    struct timeval now;
    struct timespec outtime;
    int timeout_ms = 100, nsec;

    while (1) {
        pthread_mutex_lock(&cond_mutex);

        gettimeofday(&now, NULL);
        nsec = now.tv_usec * 1000 + (timeout_ms % 1000) * 1000000;
        outtime.tv_nsec = nsec % 1000000000;
        outtime.tv_sec = now.tv_sec + nsec / 1000000000 + timeout_ms / 1000;

        pthread_cond_timedwait(&cond, &cond_mutex, &outtime);

        cron_job_run_as_notifier(cb);

        pthread_mutex_unlock(&cond_mutex);
    }

    return arg;
}

int main(void)
{
    int *thread_ret = NULL, ret;
    pthread_t th;

    struct tm tm;
    time_t cur;

    cron_test();

    // cron_job_add("*/3 * * * * *\t", NULL, NULL);
    // cron_job_add("*/8 * * * * *\t", NULL, NULL);
    // cron_job_add("1 6 * * * *\t", NULL, NULL);

    // ret = pthread_create( &th, NULL, thread, NULL);
    // if( ret != 0 ) {
    //     printf( "Create thread error!\n");
    //     return -1;
    // }

    // while (1) {}

    return 0;
}