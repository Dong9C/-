#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int get_response(char* prompt);
void change(char* prompt);


int main() {
	char a[100] = { 0 };
	printf("������ �Ͻðڽ��ϱ�: ");
	gets_s(a, 100);
	change(&a);
	if (get_response(&a) == 1)
		printf("�������� �亯");
	else if (get_response(&a) == 0)
		printf("�������� �亯");
	else
		printf("�߸��� �亯");


	return 0;
}

int get_response(char* prompt) {
	char str1[] = "yes";
	char str2[] = "ok";
	char str3[] = "no";
	if (strcmp(prompt, str1) == 0)
		return 1;
	else if (strcmp(prompt, str2) == 0)
		return 1;

	else if (strcmp(prompt, str3) == 1)
		return 0;
	
	else
		return 2;

}

void change(char* prompt) {
	int i = 0;
	
	while (prompt[i] != '\0') {
		if (isupper(prompt[i]))
			prompt[i] = tolower(prompt[i]);
		i++;
	}

}