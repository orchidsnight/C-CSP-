#include<stdio.h>
#include<ctype.h>
int main(){
	int count = 0;
	for(int i = 0 ; i < 5 ; i = i + 1){
		char a;
		scanf(" %c",&a);
		if (tolower(a)=='a') count = count + 1;		
	}
	printf("%d",count);
	return 0;
}
