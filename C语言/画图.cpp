#include<stdio.h>

int main() {
	int xy[101][101] = {0};
	int n;
	scanf("%d", &n);
	int x1, y1, x2, y2;
	int count = 0;

	while (n--) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int i = x1; i < x2; i++) {
			for (int j = y1; j < y2; j++) {
				if (xy[i][j] == 0) {
					xy[i][j] = 1;
					count ++;
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}
