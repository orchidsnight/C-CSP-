#include<stdio.h>

void fun(char *s,char *t){
	int i = 0,j =  0;
	while(s[i] != '\0'){
	    if(i % 2 == 0){
			t[j] = s[i];
			j++;
		}
		i++;
	}
	t[j] = '\0';
}

int main(){
	char s[100];
	char t[100];
	scanf("%s",s);
	fun(s,t);
	printf("%s",t);
	return 0;
}
