#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convert(double* grades, double* scores, int size);


int main() {
	double grades[10] = { 0 };
	double scores[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%lf", &grades[i]);
	}
	convert(&grades, &scores, 10);

	for (int i = 0; i < 10; i++) {
		if (scores[i] == 0)
			printf("00.00 ");
		else
			printf("%.2lf ", scores[i]);
	}

	return 0;
}

void convert(double* grades, double* scores, int size) {
	for (int i = 0; i < size; i++) {
		*(scores + i) = *(grades + i) * 1000 / 43 ;
	}

}