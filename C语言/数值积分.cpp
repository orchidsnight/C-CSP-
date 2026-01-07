#include<stdio.h>

int f(int x, int b, int c) {
	int s = x * x + x * b + c;
	return s;
}

int main(void) {
	int b, c;
	int l, r;
	scanf("%d %d", &b, &c);
	scanf("%d %d", &l, &r);

	int total = 0;
	int d = l % 2;
	int x = l + d;
	while (x <= r) {
		total += f(x, b, c);
		x += 2;
	}
	total = total * 2;

	printf("%d", total);
	return 0;
}
