#!/bin/bash

export ARCH=arm64
export CROSS_COMPILE=/home/youras65/Compiler/aarch64-linux-android-4.9/bin/aarch64-linux-android-
export ANDROID_MAJOR_VERSION=o

make exynos7870-gtaxladwifi_defconfig
make -j64
