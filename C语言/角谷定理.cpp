#include<stdio.h>
int main(){
	int m,n = 0;
	scanf("%d",&m);
	while(m!=1){
		if(m%2 == 0){
			m = m/2;
		}else{
			m = 3*m + 1;
		}
		n = n + 1;
	}
	printf("%d",n);
	return 0;
}
