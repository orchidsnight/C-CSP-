#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[1010], c[1010], w[1010];
char a[30][1010];
int ex[30];
int type[30];
int n, len;

inline int islegal(char ch) {
	return isdigit(ch) || islower(ch) || ch == '-';
}

int main() {
	scanf("%s", c + 1);
	len = strlen(c + 1);
	for (int i = 1; i <= len; i++) {
		if (isalpha(c[i])) {
			type[c[i] - 'a'] = 1;
			if (i + 1 <= len && c[i + 1] == ':') {
				type[c[i] - 'a'] = 2;
			}
		}
	}

	scanf("%d ", &n);
	int cnt = 0;
	while (n--) {
		fgets(s, 1010, stdin);
		len = strlen(s);
		int p = 0;

		while (p < len && s[p] != ' ') {
			p++;
		}

		memset(ex, 0, sizeof(ex));

		while (p < len && s[p] != '\n') {
			if (p + 1 < len && s[p] == '-' && isalpha(s[p + 1])) {
				int op = s[p + 1] - 'a';
				if (!type[op]) {
					break;
				}
				if (islegal(s[p + 2])) {
					break;
				}
				p += 2;

				if (type[op] == 1) {
					ex[op] = 1;
				} else {
					int idx = 0;
					while (p < len && !islegal(s[p])) {
						p++;
					}
					if (p >= len || !islegal(s[p])) {
						break;
					}
					ex[op] = 1;
					while (p < len && islegal(s[p])) {
						a[op][idx++] = s[p++];
					}
					a[op][idx] = '\0';
				}
			} else {
				if (s[p] != ' ') {
					break;
				}
				p++;
			}
		}

		printf("Case %d: ", ++cnt);
		for (int i = 0; i < 26; i++) {
			if (ex[i]) {
				printf("-%c ", i + 'a');
				if (type[i] == 2) {
					printf("%s ", a[i]);
				}
			}
		}
		puts("");
	}
	return 0;
}
