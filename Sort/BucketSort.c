//
// Created by 武国斌 on 2017/10/18.
//

#include "BucketSort.h"

void bucketSort() {

    printf("桶排序\n");
    int a[11],i,j,t;

    for(i = 0; i <= 10; i++) {
        a[i] = 0;
    }

    for (int i = 1; i <= 5; i++) {
        printf("输入第%d个数:",i);
        scanf("%d",&t);
        a[t]++;
    }

    printf("排序结果:");
    for (int i = 0; i <= 10; i++) {
        for (int j = 1; j <= a[i]; j++) {
            printf("%d ", i);
        }
    }

    getchar();
    getchar();

}

void bucketSort2() {

    printf("桶排序\n");
    int book[1001],i,j,t,n;

    for(i = 0; i <= 1000; i++) {
        book[i] = 0;
    }

    printf("需要排序几个数:");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        printf("输入第%d个数:",i);
        scanf("%d",&t);
        book[t]++;
    }

    printf("排序结果:");
    for (int i = 1000; i >= 0; i--) {
        for (int j = 1; j <= book[i]; j++) {
            printf("%d ", i);
        }
    }

    getchar();
    getchar();

}