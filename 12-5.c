#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void str_upper(char* s);

int main() {
	char a[100] = { 0 };
	int i = 0;
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(a, 100);
	str_upper(&a);
	printf("��ȯ�� ���ڿ�:");
	while (a[i] != '\0') {
		printf("%c", a[i]);
		i++;
	}



	return 0;
}

void str_upper(char* s) {
	int i = 0;
	while (s[i] != '\0') {
		if (islower(s[i])) {
			s[i] = toupper(s[i]);
		}
		i++;
	}
}