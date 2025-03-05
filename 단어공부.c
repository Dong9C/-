#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n[] = { 0 };
	scanf("%s", &n);
	for (int i = 0; i < strlen(n); i++)
		if (n[i] > 97)
			n[i] = -32;

}