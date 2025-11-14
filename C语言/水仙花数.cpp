#include<stdio.h>
int function(int a, int b);
int main() {
	int a, b, count;
	scanf("%d%d", &a, &b);
	count = function(a, b);
	printf("%d\n", count);
	return 0;
}
int function(int a, int b) {
	int count = 0;

	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	if (a < 100) a = 100;
	if (b < 100) return 0;

	for (int num = a; num <= b; num++) {
		int sum = 0;
		int digitCount = 0;

		int temp = num;
		while (temp > 0) {
			digitCount++;
			temp /= 10;
		}

		temp = num;
		while (temp > 0) {
			int digit = temp % 10;
			int power = 1;
			for (int i = 0; i < digitCount; i++) {
				power *= digit;
			}
			sum += power;
			temp /= 10;
		}

		if (sum == num) {
			count++;
		}
	}
	return count;
}
