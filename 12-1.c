#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void delete(char* A);

int main() {
	char a[100] = { 0 };
	gets_s(a, 100);
	delete(&a);

	return 0;
}

void delete(char* A) {
	int i = 0;
	while (A[i] != '\0') {
		if (A[i] != ' ') {
			printf("%c", A[i]);
			
		}
		i++;
	}
}