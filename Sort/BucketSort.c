//
// Created by 武国斌 on 2017/10/18.
//

#include "BucketSort.h"

void bucketSort(int enable) {

    if (enable == 0)
        return;

    printf("BucketSort\n");
    int a[11],i,j,t;

    for(i = 0; i <= 10; i++) {
        a[i] = 0;
    }

    for (int i = 1; i <= 5; i++) {
        printf("input %d :",i);
        scanf("%d",&t);
        a[t]++;
    }

    printf("Sort result:");
    for (int i = 0; i <= 10; i++) {
        for (int j = 1; j <= a[i]; j++) {
            printf("%d ", i);
        }
    }

    getchar();
    getchar();

}

void bucketSort2(int enable) {

    if (enable == 0)
        return;

    printf("BucketSort\n");
    int book[1001],i,j,t,n;

    for(i = 0; i <= 1000; i++) {
        book[i] = 0;
    }

    printf("how many numbers to sort:");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        printf("input %d:",i);
        scanf("%d",&t);
        book[t]++;
    }

    printf("Sort result:");
    for (int i = 1000; i >= 0; i--) {
        for (int j = 1; j <= book[i]; j++) {
            printf("%d ", i);
        }
    }

    getchar();
    getchar();

}
