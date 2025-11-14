#include<stdio.h>
#define duru scanf
void to(unsigned long n);

int main() {
	unsigned long number;
	while (duru("%lu", &number) == 1) {
		to(number);
		putchar('\n');
	}

	return 0;
}

void to(unsigned long n) {
	int r;

	r = n % 2;
	if (n >= 2) {
		to(n / 2);
	}
	putchar(r == 0 ? '0' : '1');

	return;
}
