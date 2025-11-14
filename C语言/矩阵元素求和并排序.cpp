#include<stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);

	int a[n][n];

	for (int l = 0; l < n; l++) {
		for (int h = 0; h < n; h++) {
			scanf("%d", &a[l][h]);
		}
	}

	int totalh[n] = {0};

	for (int j = 0; j < n; j++) {
		for (int h = 0; h < n; h++) {
			totalh[j] += a[j][h];
		}
	}

	int totall[n] = {0};

	for (int j = 0; j < n; j++) {
		for (int l = 0; l < n; l++) {
			totall[j] += a[l][j];
		}
	}

	int zhu = 0, fu = 0;

	for (int i = 0; i < n ; i++) {
		zhu += a[i][i];
	}
	for (int i = 0; i < n ; i++) {
		fu += a[i][n - 1 - i];
	}
	int q = n + n + 2;
	int total[q];
	int index = 0;

	for (int i = 0; i < n; i++) {
		total[index++] = totalh[i];
	}
	for (int i = 0; i < n; i++) {
		total[index++] = totall[i];
	}
	total[index++] = zhu;
	total[index++] = fu;

	for (int i = 0; i < q - 1; i++) {
		for (int j = 0; j < q - 1 - i; j++) {
			if (total[j] < total[j + 1]) {
				int temp = total[j];
				total[j] = total[j + 1];
				total[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < q; i++) {
		printf("%d ", total[i]);
	}
	return 0;
}
