#include <stdio.h>
#include <stdlib.h>

int dir[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, -2}, {-1, 2}};

typedef struct {
	int x;
	int y;
	int step;
} Node;

int bfs(int n, int start_x, int start_y, int step) {
	int count = 0;
	Node queue[n * n];
	int front = 0, rear = 0;

	int visited[n + 2][n + 2];
	for (int i = 0 ; i < n + 2; i++) {
		for (int j = 0; j < n + 2; j++) {
			visited[i][j] = 0;
		}
	}

	queue[rear++] = (Node) {
		start_x, start_y, 0
	};
	visited[start_x][start_y] = 1;

	while (front < rear) {
		Node curr = queue[front++];

		if (curr.step >= step) {
			continue;
		}

		for (int i = 0; i < 8; i++) {
			int next_x = curr.x + dir[i][0];
			int next_y = curr.y + dir[i][1];
			if (
			    next_x > 0 && next_y > 0 &&
			    next_x <= n && next_y <= n &&
			    visited[next_x][next_y] == 0
			) {
				visited[next_x][next_y] = curr.step+1;
				queue[rear++] = (Node) {
					next_x, next_y, curr.step + 1
				};
			}
		}
	}
	
	for(int j = 1;j<n+1;j++){
		for(int i=1;i<=n;i++){
			if(visited[j][i] != 0&&visited[j][i] <= step){
				count ++;
			}
		}
	}

	return count;
}

int main() {
	int n, step;
	int x, y;
	scanf("%d %d", &n, &step);
	scanf("%d %d", &x, &y);

	int count = bfs(n, x, y, step);

	printf("%d", count);

	return 0;
}
