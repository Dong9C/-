#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void change_chr(char* s);
int check(char* s);


int main() {
	char s[100] = { 0 };
	printf("문자열을 입력하시오: ");
	gets_s(s, 100);
	change_chr(&s);
	if (strlen(s) % 2 == 0) {
		if (check(&s) == strlen(s) / 2)
			printf("회문입니다.");
		else
			printf("회문이 아닙니다.");
	}
	else {
		if (check(&s) == strlen(s) / 2 + 1)
			printf("회문입니다.");
		else
			printf("회문이 아닙니다.");
	}
	
}

void change_chr(char* s) {
	int i = 0;
	while (s[i] != '\0') {
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
		i++;
	}
}

int check(char* s) {
	int sum = 0;
	for(int i = 0; i < strlen(s); i++) {
		if (s[i] == s[strlen(s) - i- 1])
			sum++;
		
		i++;
	}
	return sum;
	
}

