#include<stdio.h>

int main() {
	int k;
	int x, y, z;
	double p;
	scanf("%d", &k);
	while (k--) {
		scanf("%d %d %d", &x, &y, &z);
		p = (z - x) * 1.0 / y;
		int u = (int)(p * 100+0.001) % 10 + 1;
		int v = (int)(p * 10) + 1;
		printf("%d %d\n", v, u);
	}
	return 0;
}
