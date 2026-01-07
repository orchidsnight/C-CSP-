#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int xu[n + 1];
	int bu[n];
	for (int i = 0; i <= n; i++) {
		scanf("%d", &xu[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &bu[i]);
	}

	int min;
	int count;
	int total;
	int a;
	int temp; 

	for (int i = 0; i < n; i++) {
		min = -xu[0];
		count = 2;
		total = -xu[0];
		temp = bu[i];
		bu[i] = 0;
		while (count <= 2 * n + 1) {
			if (count % 2) {
				a = (count - 1) / 2;
				total = total - xu[a];
				count++;
				if (total < min) {
					min = total;
				}
			} else {
				a = (count / 2) - 1;
				total = total + bu[a];
				count ++;
			}
		}
		min = -min;
		printf("%d ", min);
		bu[i] = temp;
	}
	return 0;
}
