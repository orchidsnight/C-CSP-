#include<stdio.h>
#include<string.h>
#define L_max 65536
#define N_max 200

void gai(int arr[][N_max], int cpy[][N_max], int a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cpy[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (cpy[i][j] >= a) {
				cpy[i][j] = 1;
			} else {
				cpy[i][j] = 0;
			}
		}
	}
}

void xun(int st[][N_max], int n, int c) {
	int csp[5][9] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 1, 0, 0, 1, 0, 1},
		{1, 0, 0, 1, 1, 1, 1, 1, 0},
		{1, 0, 0, 0, 0, 1, 1, 0, 0},
		{1, 1, 1, 1, 1, 1, 1, 0, 0}
	};
	int m;
	for (int i = 0; i <= n - 5; i++) {
		for (int j = 0; j <= n - 9; j++) {
			m = 1;
			for (int x = 0; x < 5; x++) {
				for (int y = 0; y < 9; y++) {
					if (st[i + x][j + y] != csp[x][y]) {
						m = 0;
						break;
					}
				}
				if (!m) break;
			}
			if (m) {
				printf("%d\n", c);
				return;
			}
		}
	}
}



int main(void) {
	int n, l;
	scanf("%d %d", &n, &l);
	int arr[n][N_max];
	int st[n][N_max];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}


	int i = 1;
	while (i < l) {
		gai(arr, st, i, n);
		xun(st, n, i);
		i++;
	}

	return 0;
}
