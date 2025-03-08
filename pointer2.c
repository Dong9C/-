#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array_printf(int* A, int size);

int main() {
	int A[10] = { 1,2,3,4,0,0,0,0,0,0 };
	array_printf(A, 10);
	return 0;
}

void array_printf(int* A, int size) {
	printf("A[] = {");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(A+i));

	}
	printf("}\n");
}