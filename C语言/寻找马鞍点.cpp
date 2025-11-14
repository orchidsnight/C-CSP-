#include<stdio.h>

int main(void) {
	int m, n, i;

	scanf("%d%d", &m, &n);

	int a[m][n];

	for (int l = 0; l < m; l++) {
		for (int h = 0; h < n; h++) {
			scanf("%d", &a[l][h]);
		}
	}

	int count = 0,c=0;

	for (int j = 0; j < m - 1; j++) {
		int min = a[j][0];
		int r = 0,c = 0;
		for (i = 0; i < n - 1; i++) {
			if (a[j][i] < min) {
				min = a[j][i];
				c = i;
			}
		}
		for (int q = 0; q < m ; q++) {
			if (a[q][c] > min) {
				r++;
			}
		}
		if (r == 0) {
			printf("%d %d %d ", j, c,min);
			count++;
		}
	}

	if (count == 0) {
		printf("no");
	}
	return 0;
}
