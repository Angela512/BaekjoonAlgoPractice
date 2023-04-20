#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int card[20];
	int a, b;
	int i, j;
	for (i = 0; i < 20; i++)
		card[i] = i + 1;

	//ÀÌÁß for¹®
	for (i = 0; i < 10; i++) {
		scanf("%d %d", &a, &b);
		int cnt = (b - a + 1) / 2;
		a--;
		b--;
		for (j = 0; j < cnt; j++) {
			int temp = card[a];
			card[a++] = card[b];
			card[b--] = temp;
		}
	}

	for (i = 0; i < 20; i++)
		printf("%d\n", card[i]);
}