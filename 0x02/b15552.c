#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[9];
	int arr2[7];
	int sum = 0;
	int rest = 0;
	int n1 = 0, n2 = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	rest = sum - 100;
	printf("rest : %d\n", rest);
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (arr[i] + arr[j] == rest) {
				n1 = arr[i];
				n2 = arr[j];
				break;
			}
		}
	}

	int j = 0;
	for (int i = 0; i < 9; i++) {
		if (arr[i] != n1 && arr[i] != n2)
			arr2[j++] = arr[i];
	}

	for (int i = 0; i < 7; i++) {
		for (int j = i + 1; j < 7; j++) {
			if (arr2[i] > arr2[j]) {
				int temp = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < 7; i++)
		printf("%d\n", arr2[i]);
}