#include<stdio.h>
#include<ctype.h>

void c(char str[],int *l,int *d){
	*l = 0;
	*d = 0;
	for(int i=0;str[i]!='\0';i++){
		if(isalpha(str[i])){
			(*l)++;
		}if(isdigit(str[i])){
			(*d)++;
		}
	}
}

int main(){
	char str[21];
	int l,d;
	scanf("%s",str);
	c(str,&l,&d);
	printf("%d,%d",l,d);
	return 0;
}
