#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int str_chr(char* s, char c);

int main() {
	int a[100] = { 0 };
	char s;
	printf("문자열을 입력하시오: ");
	gets_s(a, 100);
	printf("개수를 셀 문자를 입력하시오: ");
	scanf("%c", &s);
	printf("%c의 개수: %d", s, str_chr(&a, s));

	return 0;
}
/*
int str_chr(char* s, char c) {
	int i = 0;
	int sum = 0;
	while (s[i] != '\0') {
		if (s[i] == c) {
			sum++;
		}
		i++;
	}
	return sum;
}

*/

int str_chr(char* s, char c) {
	int i = 0;
	int sum = 0;
	while (s[i] != '\0') {
		if (isupper(s[i])) {
			s[i] = tolower(s[i]);

			if (s[i] == c) {
				sum++;
			}
		}
		i++;
	}
	return sum;
}