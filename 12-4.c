#include<stdio.h>
#include<ctype.h>

int main() {
	char ch;
	while (1) {
		printf("���ڸ� �Է��Ͻÿ�: ");
		ch = getchar();
		if (ch == '.')
			break;
		else
			putchar(toupper(ch));
		printf("\n");
		getchar();
	}
}
