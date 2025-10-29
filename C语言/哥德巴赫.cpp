#include<stdio.h>
int su(int n){
	if(n == 2){
		return 2;
	}else if(n==3){
		return 3;
	}else{
		for(int i=2;i*i<=n;i++){
				if(n%i == 0){
         	        return 0;
				}
			}	
	return n;
	}
}

int main(){
	int a,b,m;
	scanf("%d",&m);
	for(int i = 2;i<= m/2;i++){
		a = su(i);
		b = su(m-a);
		if(a!=0 && b!=0){
			printf("%d %d",a,b);
			break;
		}
	}
	return 0;
}
