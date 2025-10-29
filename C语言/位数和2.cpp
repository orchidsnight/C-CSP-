#include<stdio.h>
int sum(int n);
int main(){
	int n ,s;
	scanf("%d",&n);
	s = sum(n);
    printf("%d",s);
	return 0;		
}
int sum(int n){
	int s = 0;
	while(n>0){
	s = s + n%10;
	n=n/10;
	}
	return s;	
}
