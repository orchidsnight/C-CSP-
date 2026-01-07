#include<stdio.h>

int def[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

typedef struct {
	int x;
	int y;
	int step;
} Node;

int bfs(int m, int n, int sx, int sy, int ex, int ey) {
	int a[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	int visited[m][n];
	for (int i = 0 ; i < m; i++) {
		for (int j = 0; j < n ; j++) {
			visited[i][j] = 0;
		}
	}

	Node queue [m * n];
	int fro = 0, rear = 0;

	queue[rear++] = (Node) {
		sx, sy, 0
	};

	visited[sx][sy] = 1;

	int count = 1000;

	while (fro < rear) {
		Node curr = queue[fro++];

		for (int i = 0; i < 4; i++) {
			int nx = curr.x + def[i][0];
			int ny = curr.y + def[i][1];

			if (nx == ex && ny == ey) {
				if (count > curr.step + 1) {
					count = curr.step + 1;
				}
			}
			if (
			    nx >= 0 && nx < m &&
			    ny >= 0 && ny < n &&
			    a[nx][ny] == 0 && visited[nx][ny] == 0
			) {
				queue[rear++] = (Node) {
					nx, ny, curr.step + 1
				};
				visited[nx][ny] = 1;
			}
		}
	}

	return count;
}

int main(void) {
	int m, n, sy, sx, ey, ex;
	scanf("%d%d%d%d%d%d", &m, &n, &sx, &sy, &ex, &ey);
	int count = bfs(m, n, sx, sy, ex, ey);
	printf("%d", count);
	return 0;
}
