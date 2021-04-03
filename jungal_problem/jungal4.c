#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main4() {

	int n, m;
	int j;
	
	int cnt = 0;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			for (j = cnt+1; j <= m+cnt; j++) {
				printf("%d ", j);				
				}
			
		}
		if (i % 2 == 0) {
			for (j = cnt + m; j > cnt; j--) {
				printf("%d ", j);
			}
		}
		cnt = cnt + m;
		printf("\n");
	}





	return 0;
}