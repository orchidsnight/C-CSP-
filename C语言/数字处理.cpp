#include<stdio.h>

int add(int n);

int main(){
	int n,a=1;
	scanf("%d",&n);
	while(a!=0){
		n = add(n);
		a = n/10;
	}
	printf("%d",n);
	return 0;
}

int add(int n){
	int b = 0;
	while(n!=0){
		b = n % 10 + b;
		n = n / 10;		
	}
	return b;
}
