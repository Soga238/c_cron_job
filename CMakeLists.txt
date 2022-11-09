cmake_minimum_required(VERSION 3.23)
project(c_cron_job C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(c_cron_job
        cron_job.c
        cron_port.c
        cron_port.h
        cron_job.h
        cron_job_cfg.h
        k_list.h
        main.c)
