#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main10() {

    int n;
    scanf("%d", &n);
    int j = n;
    for (int i = 0; i < n; i++) {
        printf("%d\n", j--);
    }


    return 0;
}