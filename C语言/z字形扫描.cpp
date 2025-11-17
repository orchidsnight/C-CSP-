#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	int step = 1;
	int x = 0, y = 0;
	int c = 1;
	int zhi = 1;
	printf("%d ", a[0][0]);
	while (1) {
		if (c == 1) {
			if (y == n - 2) {
				y ++;
				printf("%d ", a[x][y]);
			} else {
				y ++;
				printf("%d ", a[x][y]);
				c = 2;
			}
			step++;
		} else {
			if (x == n - 2) {
				x ++;
				printf("%d ", a[x][y]);
			} else {
				x ++;
				printf("%d ", a[x][y]);
				c = 1;
			}
			step++;
		}
		if(step == n*n){
			break;
		}
		while (1) {
			if (zhi % 2 == 1) {
				y--;
				x++;
				printf("%d ", a[x][y]);
				step++;
			} else {
				y++;
				x--;
				printf("%d ", a[x][y]);
				step++;
			}
			if (x == 0 || y == 0 || x == n - 1 || y == n - 1) {
				zhi++;
				break;
			}
		}
	}
	return 0;
}
