#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main15() {
	int arr[9];
	int k = 0;
	int i;
	int l;
	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (k < arr[i]) {
			k = arr[i];
			l = i;
		}
		if (k > arr[i]) {
			continue;
		}
			
	}
	printf("%d\n", k);
	printf("%d", l+1);


	return 0;
}