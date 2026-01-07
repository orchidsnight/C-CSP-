#include<stdio.h>

typedef struct {
	char f;
} ge;

int main(void) {
	int m, n, c;
	scanf("%d%d%d", &n, &m, &c);
	ge s[n][m];
	int map[n][m];
	for (int i = 0; i < n; i++) {
		getchar();
		for (int j = 0; j < m; j++) {
			scanf("%c", &s[i][j].f);
			map[i][j] = 0;
		}
	}

	c = c - 1;
	int x = 0, y = c;
	int step = 0;
	while (1) {
		if (map[x][y] != 1) {
			map[x][y] = 1;
			if (s[x][y].f == 'N') {
				x = x - 1;
			} else if (s[x][y].f == 'S') {
				x = x + 1;
			} else if (s[x][y].f == 'W') {
				y = y - 1;
			} else if (s[x][y].f == 'E') {
				y = y + 1;
			}
			if(x < 0 || x >= n || y < 0 || y >= m){
				printf("out %d",step + 1);
				break;
			}
		}else{
			printf("loop %d",step);
			break;
		}
		step++;
	}
	
	return 0;
}
