#include<stdio.h>
#include<ctype.h>

int main() {
	char ch;
	while (1) {
		printf("문자를 입력하시오: ");
		ch = getchar();
		if (ch == '.')
			break;
		else
			putchar(toupper(ch));
		printf("\n");
		getchar();
	}
}
