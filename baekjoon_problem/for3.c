#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main8() {

   int n, j = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        j += i;
    }
    printf("%d", j);


    return 0;
}