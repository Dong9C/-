#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	char c[100] = { 0 };
	int i = 0;
	int n = 0;
	gets_s(c, 100);
	while (c[i] != '\0') {
		strtok(c, " ");
		n = strtok(NULL, " ");
		i++;
	}
	printf("%d", n);

}