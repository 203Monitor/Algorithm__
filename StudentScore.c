//
// Created by 武国斌 on 2017/10/18.
//

#include "StudentScore.h"

struct student {
    char name[21];
    char score;
};

void studentScore() {
    struct student a[100],t;
    int i,j,n;

    scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        scanf("%s %d",a[i].name,&a[i].score);
    }

    for (i = 1; i <= n-1; i++) {
        for (j = 1; j <= n-i; j++) {
            if (a[j].score < a[j+1].score) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    for (i = 1; i <= n; i++) {
        printf("%s\n",a[i].name);
    }

    getchar();
    getchar();

}