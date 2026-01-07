#include<stdio.h>

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	int total = 0, count = 0;
	for (int i = 0; i < n; i++) {
		total += a[i];
		if (total >= k) {
			total = 0;
			count ++;
		}
	}
	if (total != 0) {
		count ++;
	}

	printf("%d", count);
	return 0;
}
