//
// Created by 武国斌 on 2017/10/18.
//

#include "BubbleSort.h"

void bubbleSort(int enable) {

    if (enable == 0)
        return;

    printf("BubbleSort\n");

    int a[100],i,j,t,n;

    printf("how many numbers to sort:");
    scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        printf("input %d:",i);
        scanf("%d",&a[i]);
    }

    for (i = 1; i <= n-1; i++) {
        for (j = 1; j <= n-1; j++) {
            if (a[j] < a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    printf("Sort result:");
    for (i = 1; i <= n; i++) {
        printf("%d ",a[i]);
    }

    getchar();
    getchar();

}
