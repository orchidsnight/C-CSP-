#include<stdio.h>
#include<string.h>
#include<ctype.h>

void lower(char *str) {
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = tolower(str[i]);
	}
}

int main(void) {
	char s[101];
	int m, n;
	char a[101];
	char copy[101];

	fgets(s, 101, stdin);
	s[strcspn(s, "\n")] = '\0';
	scanf("%d %d", &m, &n);
	n = n + 1;

	if (m == 0) {
		lower(s);
		while (n--) {
			fgets(a, 101, stdin);
			a[strcspn(a, "\n")] = '\0';
			strcpy(copy,a);
			lower(a);
			if (strstr(a, s) != NULL) {
				printf("%s\n", copy);
			}
		}
	}
	if (m == 1) {
		while (n--) {
			fgets(a, 101, stdin);
			a[strcspn(a, "\n")] = '\0';
			if (strstr(a, s) != NULL) {
				printf("%s\n", a);
			}
		}
	}
	return 0;
}
