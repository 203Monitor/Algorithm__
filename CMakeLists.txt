cmake_minimum_required(VERSION 3.7)
project(Algorithm)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c Sort/BucketSort.c Sort/BucketSort.h Sort/BubbleSort.c Sort/BubbleSort.h Sort/StudentScore.c Sort/StudentScore.h Sort/QuickSort.c Sort/QuickSort.h )
add_executable(Algorithm ${SOURCE_FILES})