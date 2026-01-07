#include<stdio.h>

struct window {
	int x1;
	int y1;
	int x2;
	int y2;
	int id;
};

void turn(int a[], int id);

int main(void) {
	int n, m;
	scanf("%d%d", &n, &m);
	struct window w[n];
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d%d", &w[i].x1, &w[i].y1, &w[i].x2, &w[i].y2);
		w[i].id = i + 1;
		a[i] = n - i - 1;
	}

	while (m--) {
		int x, y;
		int c = 1;
		scanf("%d%d", &x, &y);
		for (int i = 0; i < n; i++) {
			if (x >= w[a[i]].x1 && x <= w[a[i]].x2 && y >= w[a[i]].y1 && y <= w[a[i]].y2) {
				printf("%d\n", w[a[i]].id);
				turn(a, i);
				c = 0;
				break;
			}

		}
		if (c) {
			printf("IGNORED\n");
		}
	}


	return 0;
}

void turn(int a[], int id) {
	int temp = a[id];
	for (int i = id; i > 0; i--) {
		a[i] = a[i - 1];
	}
	a[0] = temp;
	return ;
}
