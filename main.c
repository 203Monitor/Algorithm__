#include <stdio.h>

#include "Sort/BucketSort.h"
#include "Sort/BubbleSort.h"
#include "Sort/StudentScore.h"
#include "Sort/QuickSort.h"

int main() {

    bucketSort(0);//桶排序
    bubbleSort(0);//冒泡排序
    studentScore(1);//学生成绩结构体排序
    quickSortRun(0);//快速排序

    return 0;
}
