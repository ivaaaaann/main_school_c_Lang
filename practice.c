#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, m, i, j, cnt = 0;
	scanf("%d %d", &n, &m);

		for (i = 1; i <= n; i++) {
			if (i % 2 == 1) {
				for (j = cnt + 1; j <= m + cnt; j++) {
					printf("%d ", j);
				}
				printf("\n");
			}
			
			if (i % 2 == 0) {
				for (j = cnt + m; j > cnt; j--) {
					printf("%d ", j);
				}
				printf("\n");
			}
			cnt = cnt + m;
				
		}




	return 0;
}