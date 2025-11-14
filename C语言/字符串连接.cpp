#include<stdio.h>

void fun(char *s,char *t);

int main(){
	char s[100];
	char t[100];
	scanf("%s %s",s,t);
	fun(s,t);
	printf("%s",s);
	return 0;
}

void fun(char *s,char *t){
	int i = 0,n = 0;
	while(s[i] != '\0'){
		//TODO
		i++;
	}
	while(t[n] != '\0'){
		//TODO
		s[i] = t[n];
		i++;
		n++;
	}
}
