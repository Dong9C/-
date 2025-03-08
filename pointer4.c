#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array_copy(int* A, int* B, int size);

int main() {
	int A[10] = { 1, 2 , 3 , 0 , 0, 0, 0, 0, 0 ,0 };
	int B[10] = { 0 };
	array_copy(A, B, 10);
	printf("A[] = ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	printf("A[] = ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
	return 0;
}

void array_copy(int* A, int* B, int size) {
	for (int i = 0; i < size; i++) {
		*(B + i) = *(A + i);
	}

}