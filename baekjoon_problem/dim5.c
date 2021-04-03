#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main18() {
	int cnt = 0;
	double avg = 0;
	double total = 0;
	double Maximum_value = 0;
	int n;
	scanf("%d", &n);
	double new_score[1005];
	int score[1005] = {0, };
	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
	}
	Maximum_value = score[0];
	for (int i = 1; i < n; i++) {
		
		if (Maximum_value < score[i]) {
			Maximum_value = score[i];
		}
	}


	for (int i = 0; i < n; i++) {
		new_score[i] = ((score[i] / Maximum_value) * 100);
	}

	for (int i = 0; i < n; i++) {
		total = total + new_score[i];
	}

	


	avg = total / n;
	if (avg == (int)avg)
		printf("%.1lf", avg);
	else
		printf("%g", avg);



	return 0;
}