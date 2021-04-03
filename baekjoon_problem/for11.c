#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main13() {

	int n, x;
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		if (x > a) {
			printf("%d ", a);
		}
	}


	return 0;
}