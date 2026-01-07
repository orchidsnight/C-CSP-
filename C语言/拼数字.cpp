#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

char s[100];
char num[100];

int zhi(int n){
	if(n == 0){
		return 0;
	}else if(n == 2){
		return 2;
	}	
	int c = n/2;
	while(c >= 1){
		if(n%c == 0){
			return c;		
		}
		c--;
	}
	if(c == 1){
		return n;
	}
}

int main(void){
	scanf("%s",s);
	int i = 0,n = 0;
	while(i < 100 && s[i] != '\0'){
		if(isdigit(s[i])){
			num[n] = s[i];
			n ++;
		}
		i++;
	}
	int u = atoi(num);
	u = zhi(u);
	printf("%d",u);
	return 0;
}
