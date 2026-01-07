#include<stdio.h>
#include<string.h>

int main(void) {
	int n;
	char c[100];

	fgets(c, 100, stdin);
	scanf("%d", &n);
	getchar();

	char zhu[n][5];
	int a = 0;
	while (a < n) {
		fgets(zhu[a], 5, stdin);
		getchar();
		a++;
	}

	char zz[n + 1];
	for (int i = 0; i < n; i++) {
		zz[i] = zhu[i][1];
	}
	zz[n] = '\0';
	char qq[n + 1];
	for (int i = 0; i < n; i++) {
		qq[i] = zhu[i][2];
	}
	qq[n] = '\0';

	int m, h;
	int cc = 0;
	scanf("%d", &h);
	while (h--) {		
		scanf(" %d", &m);
		for (int i = 0; i < (m - cc); i++) {
			int j = 1;
			while(c[j] != '#' ){
				char b[2];
				b[0] = c[j];
				b[1] = '\0';
				int ss;
				ss = (int)strcspn(zz,b);
				if(ss == (int)strlen(zz)){
					j++;
					continue;
				}
				c[j] = qq[ss];
				j++;
			}
		}
		printf("%s", c);
		cc = m;
	}

	return 0;
}
