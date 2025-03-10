#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int str_chr(char* A, char c);


int main() {
	char a[100] = { 0 };
	char c;
	printf("문자열을 입력하시오: ");
	gets_s(a, 100);
	for (c = 'a'; c <= 'z'; c++) {
		printf("%c : %d\n", c, str_chr(&a, c));
	}
	return 0;
}

int str_chr(char* A, char c) {
	int i = 0;
	int sum = 0;
	while (A[i] != '\0') {
		if (A[i] == c)
			sum++;
		
		i++;
	}
	return sum;
}