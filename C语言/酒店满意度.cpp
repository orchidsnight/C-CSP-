#include<stdio.h>
#include<string.h>

typedef struct {
	char name[10];
	int a;
	int b;
	int c;
	int d;
	int sum;
	char level[2];
} hotel;

int main() {
	int n;
	scanf("%d", &n);
	hotel s[n];
	for (int i = 0; i < n; i++) {
		scanf("%s %d%d%d%d", s[i].name, &s[i].a, &s[i].b, &s[i].c, &s[i].d);
		s[i].sum = s[i].a + s[i].b + s[i].c + s[i].d;
		if (s[i].sum > 23) {
			strcpy(s[i].level, "A");
		} else if (s[i].sum > 16) {
			strcpy(s[i].level, "B");
		} else {
			strcpy(s[i].level, "C");
		}
	}
	for (int i = 0 ; i < n - 1; i++) {
		for (int j = i + 1; j < n ; j ++) {
			if (s[i].sum < s[j].sum) {
				hotel temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	for (int i = 0; i < n - 1; ) {
		int count = 0;
		int j = i + 1;
		while (s[i].sum == s[j].sum && j < n) {
			j++;
			count ++;
		}
		for (int c = i; c < j - 1; c++) {
			for (int d = c + 1; d < j; d++) {
				if (strcmp((const char*)s[c].name , (const char*)s[d].name) > 0) {
					hotel temp = s[c];
					s[c] = s[d];
					s[d] = temp;
				}
			}
		}
		if(count){
			i += count;
		}else{
			i++;
		}		
	}
	for (int i = 0; i < n; i++) {
		printf("%s %d %s\n", s[i].name, s[i].sum, s[i].level);
	}

	return 0;
}
