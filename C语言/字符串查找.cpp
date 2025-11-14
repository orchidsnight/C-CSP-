#include<stdio.h>
#include<ctype.h>

void fun(char c,int *l){
	if(isalpha(c)){
		(*l)++;
    }
}

int main(){
	char c ;
	int n = 0;
	while(scanf(" %c",&c) !=EOF){
		fun(c,&n);
	}
	printf("%d",n);
	return 0;
}
