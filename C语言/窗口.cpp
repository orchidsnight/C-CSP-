#include<stdio.h>

struct window {
	int x1, y1, x2, y2;
	int id;
};

void huan(struct window arr[], int n, int j);

int main(void) {
	int m, n;
	scanf("%d %d", &n, &m);
	struct window windows[10];
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d%d", &windows[i].x1, &windows[i].y1, &windows[i].x2, &windows[i].y2);
		windows[i].id = i + 1;
	}

	int x, y;
	int count;
	for (int i = 0; i < m; i++) {
		count = 0;
		scanf("%d%d", &x, &y);
		for (int j = n - 1; j >= 0; j--) {
			if (x >= windows[j].x1 && x <= windows[j].x2 && y >= windows[j].y1 && y <= windows[j].y2) {
				printf("%d\n", windows[j].id);
				huan(windows, n, j);
				break;
			}
			count ++;
		}
		if (count == n) {
			printf("IGNORED\n");
		}
	}

	return 0;
}

void huan(struct window arr[], int n, int j) {
	if (j == n - 1) {
		return;
	}
	struct window temp = arr[j];
	for (int i = j; i < n - 1; i++) {
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = temp;
}
