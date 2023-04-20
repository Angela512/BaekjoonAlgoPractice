#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, i = 0;
	int arr[20];
	int sumY = 0, sumM = 0;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < n; i++) {
		sumY += (arr[i] / 30 + 1) * 10;
		sumM += (arr[i] / 60 + 1) * 15;
	}

	if (sumY < sumM)
		printf("Y %d", sumY);
	else if (sumY == sumM)
		printf("Y M %d", sumY);
	else
		printf("M %d", sumM);
	
}