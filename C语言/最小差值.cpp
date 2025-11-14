#include<stdio.h>
int main() {
	int i, c = 0, min = 1000000;
	scanf("%d", &i);
	int a[i];
	for (int j = 0; j < i ; j++) {
		scanf("%d", &a[j]);
	}
	for (int s = 0; s < i - 1; s++) {
		for (int d = s + 1; d < i; d++) {
			c = a[s] - a[d];
			if (c < 0) {
				c = -c;
			}
			if (c < min) {
				min = c;
			}
		}
	}
	printf("%d", min);
	return 0;
}
