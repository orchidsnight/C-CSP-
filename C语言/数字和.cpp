#include<stdio.h>
int main(){
	int n,a;
	scanf("%d",&n);
	a = 0;
	while(n!=0){
		a = a + n%10;
		n = n/10;
	}	
	printf("%d",a);
	return 0;
}
