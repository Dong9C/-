#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int array_sum(int* A, int size);


int main() {
	int a[10] = { 0 };
	printf("A[] =");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	printf("월급의 합 =");
	printf("%d", array_sum(&a, 10));
	return 0;
}

int array_sum(int* A, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(A + i);

	}
	return sum; 
}