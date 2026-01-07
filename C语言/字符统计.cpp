#include<stdio.h>
#include<string.h>
#include<ctype.h>

int cha(char a, char *b, int c);

int main() {
	char c;
	int n,m;
	char s[101];
	
	scanf("%c",&c);
	scanf("%d", &n);
	getchar();
	fgets(s, 101, stdin);
	
	int i = 0;
	m = strlen(s);
	while(s[i]!='\n'&&i<=m){
		i++;
	}
	s[i] = '\0';
	
	m = cha(c, s, n);

	printf("%d", m);

	return 0;
}

int cha(char a, char *b, int c) {
	int count = 0;
	int leth = strlen(b);
	for (int i = 0; i < leth; i++) {
		if (c == 0) {
			if (tolower(b[i]) == tolower(a))
			count++;
		}else{
			if(b[i] == a)
			count++;
		}
	}
	return count;
}
