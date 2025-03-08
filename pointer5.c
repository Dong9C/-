#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array_add(int* A, int* B, int* C, int size);

int main() {
    int a[10] = { 0 };
    int b[10] = { 0 };
    int c[10] = { 0 };
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("B[] = ");
    for (int i = 0; i < 10; i++) {
        scanf("%d ", &b[i]);
    }
    
    array_add(&a, &b, &c, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }

	return 0;
}

void array_add(int* A, int* B, int* C, int size) {
	for (int i = 0; i < size; i++) {
		*(C + i) = *(B + i) + *(A + i);

	}

}