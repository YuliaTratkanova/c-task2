#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#define n 5
#define m 3
int main()
{
	int x[n][m];
	srand(time(NULL));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			x[i][j] = rand() % 100 - 50; printf("%3d  ", x[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int i_max = 0, sum_max = 0, min_max = 32000, j_pos;
	for (int j = 0; j < m; j++) {
		i_max = x[0][j];
		for (int i = 0; i < n; i++) {
			if (i_max < x[i][j]) {
				i_max = x[i][j];
			}
		}
		printf("%3d ", i_max);
		sum_max += i_max;
		if (i_max < min_max) {
			min_max = i_max;
			j_pos = j;
		}
	}
	printf("\nsum of max %d\n", sum_max);

	for (int i = 0; i < n; i++) {
		printf("%3d\n", x[i][j_pos]);
	}
}
