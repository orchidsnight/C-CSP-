#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d",&a);
	b = a % 2 ;
	c = a % 3 ;
	d = a % 5 ;
	if(b == 0&&c != 0 && d != 0){
		printf("Nice");
		return 0 ;}
	else if(b != 0&&c == 0 && d != 0){
		printf("Good");
		return 0 ;
	}
	else if(b != 0&&c != 0 && d == 0){
			printf("Best");
			return 0 ;
		}
	else {
			printf("Bad");
			return 0 ;
		}
}
