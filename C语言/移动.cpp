#include<stdio.h>
#include<string.h>

int min(int a, int b) {
	return a < b ? a : b;
}
int max(int a, int b) {
	return a > b ? a : b;
}

void heng(int n) {
	int x, y;
	char s[101];
	scanf("%d%d%s", &x, &y, s);
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		switch (s[i]) {
			case 'f':
				y = min(y + 1, n);
				break;
			case 'b':
				y = max(y - 1, 1);
				break;
			case 'l':
				x = max(x - 1, 1);
				break;
			case 'r':
				x = min(x + 1, n);
				break;
		}
	}
	printf("%d %d\n",x,y);
}

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	while(k--){
		heng(n);
	}
	return 0;
}
