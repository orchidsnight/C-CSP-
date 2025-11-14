#include<stdio.h>
int main() {
	int i, count = 0;
	scanf("%d", &i);
	int a[i];
	for (int j = 0; j < i ; j++) {
		scanf("%d", &a[j]);
	}
	for (int j = 0; j < i - 1; j++) {
		if (a[j] != a[j + 1]) {
			count++;
		}
	}
	printf("%d", count + 1);
	return 0;
}
