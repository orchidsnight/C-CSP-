#include <stdio.h>
int main(void) {
	int row, col, st, ed, max, count, start ;
	scanf("%d%d", &row, &col);
	int arr[row][col + 1];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &arr[i][j]);
		}
		arr[i][col] = 0;
	}

	for (int i = 0; i < row; i++) {
		st = -1, ed = -1, max = 0, count = 0, start = -1;
		for (int j = 0; j < col + 1; j++) {
			if (arr[i][j] == 1) {
				if (count == 0) start = j;
				count++;
			} else {
				if (count > max) {
					max = count;
					st = start;
					ed = j - 1;
				}
				count = 0;
				start = -1;
			}
		}
		if (max == 0) {
			printf("-1 -1\n");
		} else {
			printf("%d %d\n", st, ed);
		}
	}


	return 0;
}
