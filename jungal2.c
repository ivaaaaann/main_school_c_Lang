#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main2() {
	int s, e;
	scanf("%d %d", &s, &e);
	while (1) {
		if (s <= e) {
			for (int i = s; i <= e; i++) {
				for (int j = 1; j < 10; j++) {

					printf("%d * %d = %2d   ", i, j, i * j);
					if (j % 3 == 0) {
						printf("\n");
					}
				}
				printf("\n");
				
			}
			break;
		}
		if (e < s) {
			for (int i = s; i >= e; i--) {
				for (int j = 1; j < 10; j++) {
					printf("%d * %d = %2d   ", i, j, i * j);
					if (j % 3 == 0) {
						printf("\n");
					}
				}
				printf("\n");
				
			}
			break;
		}
	}




	return 0;
}