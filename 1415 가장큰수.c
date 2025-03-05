#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n[10];
	int even = 0;
	int odd = 0;
	int max = 0;
	int a = 0;
	int b = 0;
	for (int i = 0; i < 10; i++)
		scanf("%d", &n[i]);

	for (int i = 0; i < 10; i++) {
		if (max < n[i])
			max = n[i];

		if (n[i] % 2 == 0)
			if (even < n[i]) {
				even = n[i];
				a++;
			}
	}

	for (int i = 0; i < 10; i++) {
		if(n[i] % 2 == 1)
			if (odd < n[i]) {
				odd = n[i];
				b++;
		}
	}
	if (a > 0 && b > 0)
		printf("%d %d", odd, even);
	else
		printf("%d", max);

	return 0;
}