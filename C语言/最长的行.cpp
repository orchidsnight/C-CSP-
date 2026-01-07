#include<stdio.h>
#include<string.h>

int main() {
	char longest_char[200];
	int longest_num = 0;
	char a[200] = {0};
	int num;

	while (1) {
		fgets(a, sizeof(a), stdin);
		a[strcspn(a, "\n")] = '\0';
		if (strcmp(a, "***end***") == 0) {
			break;
		}
		num = strlen(a);
		if (num > longest_num) {
			longest_num = num;
			strcpy(longest_char, a);
		}
	}
	printf("%d\n%s", longest_num, longest_char);
	return 0;
}
