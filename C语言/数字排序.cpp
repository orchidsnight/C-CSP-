#include<stdio.h>

typedef struct {
	int n;
	int sum;
} num;

int s(int n) {
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);
	num c[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &c[i].n);
		c[i].sum = s(c[i].n);
	}


	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n; j++) {
			if (c[i].sum < c[j].sum) {
				num temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}

	
	
	for (int i = 0; i < n - 1;) {
		int x = i;
		while (c[i].sum == c[x + 1].sum) {
			x ++;			
		}
		for (int q = i; q < x ; q++) {
				for (int j = q; j < x + 1; j++) {
					if (c[q].n > c[j].n) {
						num temp = c[q];
						c[q] = c[j];
						c[j] = temp;
					}
				}
			}
		i = x + 1;
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", c[i].n, c[i].sum);
	}
	return 0;
}
