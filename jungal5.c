#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main5() {

	int n;
	int i;
	int j;
	int cnt = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		j = i;
		while (j <= n * n) {
			printf("%d ",j);
			j = j + n;
		}
		
	
		printf("\n");
	}


	return 0;
}
