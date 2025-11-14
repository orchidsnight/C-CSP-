#include<stdio.h>

int main() {
	long n, q = 0, w = 0, z = 0;
	
	scanf("%ld", &n);
	long a[n];
	long b[n] = {-32768};
	long c[n] = {-32768};
	
	for (int i = 0; i < n; i++) {
		scanf("%ld", &a[i]);
		if (a[i] % 2) {
			c[q] = a[i];
			q++;
		} else {
			b[w] = a[i];
			w++;
		}
	}
	
	for (int i = 0; i < q - 1; i++) {
		for (int j = 0; j < q - 1 - i; j++) {
			if (c[j] < c[j + 1]) {
				long temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < w - 1; i++) {
		for (int j = 0; j < w - 1 - i; j++) {
			if (b[j] < b[j + 1]) {
				long temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
	
	long end[n];
	
	for (int i = 0; i < w ; i++) {
		end[i] = b[i];
	}
	for (int i = w; i < n; i++) {
		end[i] = c[z];
		z++;
	}
	
	for (int i = 0; i < n; i++) {
		printf("%ld ", end[i]);
	}
	return 0;
}
