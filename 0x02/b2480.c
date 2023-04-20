#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c;
	int max = -1;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b) {
		if (b == c) {
			//abc 다 같은 수라면
			printf("%d", 10000 + a * 1000);
		}
		else {
			//ab만 같은 경우
			printf("%d", 1000 + a * 100);
		}
	}
	else if (b == c) {
		//bc가 같은 경우
		printf("%d", 1000 + b * 100);
	}
	else if(a == c) {
		printf("%d", 1000 + a * 100);
	}
	else {
		//다 다른 경우 최대값 찾기
		if (a > b) {
			if (a > c) {
				printf("%d", a * 100);
			}
			else {
				printf("%d", c * 100);
			}
		}
		else if (b > c) {
			printf("%d", b * 100);
		}
		else {
			printf("%d", c * 100);
		}
	}
	
}