#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main14() {
    
    int a[1000000];
    int b= 9999999, c = -9999999 ;
    int min= 9999999, max=-9999999;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > c) {
            if (max < a[i]) {
                max = a[i];
            }
           }
        if (c < a[i]) {
            c = a[i];
        }
        if (a[i] < b) {
            if (min > a[i]) {
                min = a[i];
            }
        }
        if (a[i] > b) {
            b = a[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}