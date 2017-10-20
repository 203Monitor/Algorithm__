//
// Created by 武国斌 on 2017/10/18.
//

#include "QuickSort.h"

int a[101],n;

void quickSort(int left, int right) {
    int i,j,t,temp;
    if (left > right) {
        return;
    }

    temp = a[left];
    i = left;
    j = right;
    while (i != j) {
        while (a[j] >= temp && i < j) {
            j--;
        }

        while (a[j] <= temp && i < j) {
            i++;
        }

        if (i < j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }

        a[left] = a[i];
        a[i] = temp;

        quickSort(left, i-1);
        quickSort(i+1, right);
    }
}

void quickSortRun(int enable) {

    if (enable == 0)
        return;

    printf("QuickSort\n");

    int i,j,t;

    printf("how many numbers to sort:");
    scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        printf("input %d:",i);
        scanf("%d",&a[i]);
    }

    quickSort(1, n);

    printf("Sort result:");
    for (i = 1; i <= n; i++) {
        printf("%d ",a[i]);
    }

    getchar();
    getchar();

}
