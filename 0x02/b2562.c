#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	int max = -1;
	int cnt;

	for (int i = 1; i <= 9; i++) {
		scanf("%d", &n);
		if (n > max) {
			max = n;
			cnt = i;
		}
	}
	printf("%d\n%d", max, cnt);
}