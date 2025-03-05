#include <stdio.h>

int main() {
	int floor;
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for(int h = 1; h < floor - i; h++)
			printf(" ");
		for (int j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}


}