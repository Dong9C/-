#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n[10] = { 0 };
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
		n[i] = n[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", n[i]);
		for (int h = 0; h < 10; h++)
			if (n[i] != n[h]) {
				sum += 1;
				break;
			}

	}
	printf("%d\n", sum);
}