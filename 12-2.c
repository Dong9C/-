#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int str_chr(char* s, char c);

int main() {
	int a[100] = { 0 };
	char s;
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(a, 100);
	printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &s);
	printf("%c�� ����: %d", s, str_chr(&a, s));

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