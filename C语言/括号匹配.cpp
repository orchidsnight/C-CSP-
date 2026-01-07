#include<stdio.h>

int main() {
	char a[2];
	int i = 0, j = 0;
	int m = 0, n = 0;
	int q = 0, p = 0;

	while (1) {
		fgets(a, 2, stdin);
		if (a[0] == '\0' || a[0] == '\n') break;
		if (a[0] == '[') {
			i++;
		} else if (a[0] == ']') {
			j++;
			if (j > i) {
				printf("no");
				return 0;
			}
		} else if (a[0] == '{') {
			m++;
		} else if (a[0] == '}') {
			n++;
			if (n > m) {
				printf("no");
				return 0;
			}
		} else if (a[0] == '(') {
			q++;
		} else if (a[0] == ')') {
			p++;
			if (p > q) {
				printf("no");
				return 0;
			}
		}
	}
	if (i == j && m == n && q == p) {
		printf("yes");
	} else {
		printf("no");
	}
	return 0;
}
