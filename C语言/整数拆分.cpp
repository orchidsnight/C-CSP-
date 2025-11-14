#include<stdio.h>

int main(){
	int n,sum = 1,q,r;
	scanf("%d",&n);
	q = n / 3;
	r = n % 3;
	while(q--){
		sum = sum*3;
	}
	if(sum == 1||sum == 2){
		printf("%d",sum);
		return 0;
	}
	if(sum == 3){
		printf("%d",2);
		return 0;
	}
	if(r == 1){
		sum = (sum/3)*4;
	}
	if(r == 2){
		sum = sum*2;
	}
	printf("%d",sum);
	return 0;
}
