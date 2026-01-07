#include<stdio.h>
#include<string.h>
#include<ctype.h>

int xi(char*c, char z);

int main(void) {
	int n;
	scanf("%d", &n);
	getchar();
	char c[21];
	while (n--) {
		gets(c);
		c[strcspn(c, "\n")] = '\0';
		int i = 0;
		int a = 1;
		int z = 0, x = 0, m = 0;
		while (c[i] != '\0') {
			if (xi(c, c[i])) {
				a = 0;
			}
			if (isalpha(c[i])) {
				z ++;
			} else if (isdigit(c[i])) {
				x ++;
			} else {
				m ++;
			}
			i++;
		}
		if (a != 0 && z > 0 && x > 0 && m > 0) {
			printf("2\n");
		} else if ( z == 0 || x == 0 || m == 0) {
			printf("0\n");
		} else {
			printf("1\n");
		}
	}
	return 0;
}

int xi(char c[], char z) {
	int a = 0;
	int count = 0;
	while (c[a] != '\0') {
		if (c[a] == z) {
			count++;
		}
		a++;
	}
	if (count > 2) {
		return 1;
	} else {
		return 0;
	}
}
