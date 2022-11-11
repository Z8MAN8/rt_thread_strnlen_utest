cmake_minimum_required(VERSION 3.20)
project(qemu_vexpress_a9 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(applications/lvgl)
include_directories(drivers)
include_directories(drivers/audio)

add_executable(qemu_vexpress_a9
        applications/lvgl/demo/lv_demo.c
        applications/lvgl/lv_conf.h
        applications/lvgl/lv_port_disp.c
        applications/lvgl/lv_port_indev.c
        applications/lcd_init.c
        applications/main.c
        applications/mnt.c
        applications/utest_strnlen.c
        drivers/audio/drv_ac97.c
        drivers/audio/drv_ac97.h
        drivers/audio/drv_pl041.c
        drivers/audio/drv_pl041.h
        drivers/audio/drv_sound.c
        drivers/audio/drv_sound.h
        drivers/automac.h
        drivers/board.c
        drivers/board.h
        drivers/drv_clcd.c
        drivers/drv_clcd.h
        drivers/drv_keyboard.c
        drivers/drv_keyboard.h
        drivers/drv_mouse.c
        drivers/drv_mouse.h
        drivers/drv_sdio.c
        drivers/drv_sdio.h
        drivers/drv_smc911x.c
        drivers/drv_smc911x.h
        drivers/drv_timer.c
        drivers/drv_timer.h
        drivers/realview.h
        drivers/secondary_cpu.c
        drivers/serial.c
        drivers/serial.h
        drivers/vexpress_a9.h
        cconfig.h
        rtconfig.h)
