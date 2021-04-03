#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	int i = 0;
	int num = 0, sum = 0;
	while (i <= 100) {
		i++;
		num++;
		if (num % 2 == 1) {
			continue;
		}
		printf("%d\n", num);
		
	}
	*/
	/*
	int max = 50000;
	int j = 0;
	int n = 1;
	while (1) {
		j = j + n;
		n++;
		if (j >= max) {
			--n;
			j = j - n;
			break;

		}
		
		
		
	}
	printf("%d %d", j, n);
	*/
	/*
	int i;
	for (i = 0; i <= 50; i++) {
		if (i % 2 == 0 || i % 3 == 0) {
			continue;
		}
		printf("%d ", i);
	}
	*/
	/*
	for (int i = 2; i <= 9; i++) {
		if(i %2==0){
			for (int j = 1; j <= i; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
				
			}
			printf("================\n");
			continue;
		}
	}
	*/
	/*
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j ++) {
			if (((i * 10) + j) + ((j * 10) + i) == 99) {
				printf("A = %d Z = %d\n\n", i, j);
			}
		}
	}
	*/
	int n;
	printf("1~5 사이의 값을 입력하세요. : ");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("1 입니다");
		break;
	case 2:
		printf("2 입니다");
		break;
	case 3:
		printf("3 입니다");
		break;
	case 4:
		printf("4 입니다");
		break;
	case 5:
		printf("5 입니다");
		break;
	
	default:
		printf("그 외의 숫자입니다.");
		break;
	}

	return 0;
}