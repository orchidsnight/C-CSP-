#include<stdio.h>

int main(void) {
	int n, a;
	scanf("%d %d", &n, &a);
	int c = a * a;
	double w = n;

	double m = 0;
	float x, y;
	while (n--) {
		scanf("%f %f", &x, &y);
		float r = x * x + y * y;
		if (r <= c) {
			m++;
		}
	}

	float q ;
	q = m/w;
	q = 4*q;
	printf("%6f", q);

	return 0;
}
