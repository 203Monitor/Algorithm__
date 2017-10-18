cmake_minimum_required(VERSION 3.7)
project(Algorithm)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c BucketSort.c BucketSort.h BubbleSort.c BubbleSort.h StudentScore.c StudentScore.h QuickSort.c QuickSort.h QuickSort.h)
add_executable(Algorithm ${SOURCE_FILES})