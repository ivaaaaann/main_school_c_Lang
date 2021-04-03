#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main11() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("case #%d: %d + %d = %d", i + 1, a, b, a + b);
        printf("\n");
    }
    return 0;
}