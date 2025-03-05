#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	double score[1001];
	int max = 0;
	double h = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &score[i]);
		if (max < score[i])
			max = score[i];
	}

	for (int i = 0; i < n; i++) {
		score[i] = score[i] / max * 100;
		h += score[i];
	}
	printf("%lf", h / n );


}