#include<stdio.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	int a[m];
	int max = 0, biao;
	float c[m];
	int total;
	int max_total = 0;
	for (int i = 0; i < m; i++) {
		scanf("%d", &a[i]);
		c[i] = a[i] * 1.0 / (i + 1);
		if (c[i] > max) {
			max = c[i];
			biao = i + 1;
			int z = n % biao;
			int y = n / biao;
			total = a[biao - 1] * y + a[z - 1];
			if (total > max_total) {
				max_total = total;
			}
		}
	}


	printf("%d", max_total);
	return 0;
}
