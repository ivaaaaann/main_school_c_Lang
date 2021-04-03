#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main16() {
	char s[1000000];
	int a, b, c, n;
	int t;
	int cnt = 0;
	scanf("%d %d %d", &a, &b, &c);
	t = a * b * c;
	sprintf(s, "%d", t);
	n = strlen(s);
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j < n; j++) {
			if (48+i == (int)s[j]) {
				cnt++;
			}
		}
		printf("%d\n", cnt);
		cnt = 0;
	}
		

	return 0;
}