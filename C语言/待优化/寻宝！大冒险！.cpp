#include<stdio.h>
#include<string.h>

int q[2500][2];
	
int main(void) {
	int n, s, L;
	scanf("%d%d%d", &n, &L, &s);
	char a[L + 1][L + 1];
	memset(a, 0, sizeof(a));
	for (int i = 0; i < n; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		x = L - x;
		a[x][y] = '1';
	}

	int cou = 0;
	for (int i = 0; i <= s; i++) {
		for (int j = 0; j <= s; j++) {
			int x;
			scanf("%d", &x);
			if (x == 1) {
				q[cou][0] = s - i;
				q[cou][1] = j;
				cou++;
			}
		}
	}

	int count = 0;
	for (int i = s; i <= L; i++) {
		for (int j = 0; j < L - s; j++) {
			int jb = 0;
			if (a[i][j] == '1') {
				for (int t = 0; t < cou; t++) {
					if (a[(i - q[t][0])][(j + q[t][1])] != '1') {
						jb = 1;
						break;
					}
				}
			}else{
				continue;
			}
			if (jb == 1) continue;
			int xc = 0;
			for(int k=i;k>=(i-s);k--){
				for(int h=j;h<=(j+s);h++){
					if(a[k][h] == '1'){
						xc++;
					}
				}
			}
			if(xc == cou){
				count ++;
			}
		}
	}

	printf("%d",count);
	return 0;
}
