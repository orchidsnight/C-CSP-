#include<stdio.h>

int a[20][20];

int main(void) {
	int m, n, t, k;
	scanf("%d%d%d%d", &n, &m, &t, &k);
	int kbool[t] = {0};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	int f[4][2];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == k) {
				f[0][0] = i - 1, f[1][1] = j - 1, f[2][0] = i + 1, f[3][1] = j + 1;
				f[0][1] = j, f[1][0] = i, f[2][1] = j, f[3][0] = i;
				for (int q = 0; q < 4; q++) {
					if (f[q][0] >= 0 && f[q][0] < n && f[q][1] >= 0 && f[q][1] < m) {
						kbool[a[f[q][0]][f[q][1]]-1] ++;
					}
				}
			}
		}
	}
	
	int count = 0;
	for(int i=0;i<t;i++){
		if(i+1 != k){
			if(kbool[i] > 0){
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}
