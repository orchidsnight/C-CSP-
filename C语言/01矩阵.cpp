#include<stdio.h>

int main(void) {
	int row, col, st, sts, count, max, ed;
	scanf("%d%d", &row, &col);
	int arr[row][col + 1];

	for (int l = 0; l < row; l++) {
		for (int h = 0; h < col; h++) {
			scanf("%d", &arr[l][h]);
		}
	}
	for (int i = 0; i < row; i++) {
		arr[i][col] = 0;
	}

	for (int i = 0; i < row; i++) {
		st, count = 0, sts = -1, ed = -1, max = 0;
		for (int j = 0; j < col + 1; j++) {
			if (arr[i][j] == 1) {
				count++;
			}
			if (arr[i][j] == 0) {
				if (max < count) {
					max = count;
					ed = j - 1;
					st = sts;
				}
				count = 0;
			}
			if (count == 1) {
				sts = j;
			}
			if (ed == j - 1) {
				st = sts;
			}
		}

		if (max == 0) {
			printf("%d %d\n", -1, -1);
		} else {
			printf("%d %d\n", st, ed);
		}
	}

	return 0;
}
