#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main7() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d", n, i, n  * i );
        printf("\n");
    }


    return 0;
}