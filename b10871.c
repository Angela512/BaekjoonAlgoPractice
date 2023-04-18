#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, x, a;

	scanf("%d", &n);
	scanf("%d", &x);

	while (n--) {
		scanf("%d", &a);
		if (a < x) printf("%d ", a);
	}

	return 0;
}