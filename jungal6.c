#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main6() {

	int n, m;
	
	scanf("%d %d", &n, &m);
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				printf("%d ", i);
			}
			printf("\n");
		}
	}
	if (m == 2) {

		int max = n;

		for (int i = 0; i < max; i++) {
			for (int j = 0; j < max; j++) {
				if (i % 2 == 0) { //Â¦¼ö
					printf("%d ",j +1 );
				}
				else { //È¦¼ö
					printf("%d ", max - j);
				}
			}
			printf("\n");
		}
	}
	if (m == 3) {
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				printf("%d ", i * j);
			}
			
			printf("\n");
		}
	}



	return 0;
}