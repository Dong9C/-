#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n[42] = { 0 };
	int h;
	int count = 0;
	for (int i = 1; i <= 10; i++) {
		scanf("%d", &h);
		n[h % 42] = i;
	}

	for (int i = 0; i < 42; i++) {
		if (n[i] != 0)
			count += 1;

	}

	printf("%d", count);
	return 0;
}
