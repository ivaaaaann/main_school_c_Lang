#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char small_letter(char n);
char capital_letter(char n);

int main2_1() {
	char n;
	scanf("%c", &n);
	if (n >= 65 && n <= 90) {
		printf("%c", small_letter(n));
	}
	if (n >= 97 && n <= 122) {
		capital_letter(n);
	}

	return 0;
}


char small_letter(char n) {
	char k = n + 32;

	return k;
}

char capital_letter(char n) {
	char k = n - 32;
	printf("%c", k);

	return k;
}