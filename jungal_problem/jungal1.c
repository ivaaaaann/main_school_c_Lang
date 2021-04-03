#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() {
	int s, e;
	
	scanf("%d %d", &s, &e);
	while (1) {
		if (s >=10 || e >= 10) {
			printf("INPUT ERROR!\n");
			scanf("%d %d", &s, &e);
			continue;
		}
		if (s <= 1 || e <= 1) {
			printf("INPUT ERROR!\n");
			scanf("%d %d", &s, &e);
			continue;
		}
		
		else {
			if (s <= e) {
				for (int j = 1; j < 10; j++) {
					for (int i = s; i <= e; i++) {
						printf("%d * %d = %2d   ", i, j, i * j);
					}
					printf("\n");
				}
				break;
			}
			if (s > e) {
				for (int j = 1; j < 10; j++) {
					for (int i = s; i >= e; i--) {
						printf("%d * %d = %2d   ", i, j, i * j);
					}
					printf("\n");
				}
				break;
			}
		}
	}




	return 0;
}