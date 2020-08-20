#include <stdio.h>
int main() {
	int s, d;
	scanf_s("%d %d", &s, &d);
	if (s < d) {
		for (int i = 1; i <= 25; i++) {
			for (int j = s; j <= d; j++) {
				printf("%2d x %2d = %3d   ", j, i, j * i);
			}
			printf("\n");
		}
		printf("\n");
	}
	else {
		for (int i = 1; i <= 12; i++) {
			for (int j = s; j >= d; j--) {
				printf("%2d x %2d = %3d   ", j, i, j * i);
			}
			printf("\n");
		}
		printf("\n");
	}
}