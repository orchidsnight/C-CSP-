#include<stdio.h>
int main (){
	int n;
	int c = 1;
	scanf("%d",&n);
	for(int i=n;i>0;i= i-1){
		c = c*i;
	}
	printf("%d",c);
	return 0 ;
	
}
