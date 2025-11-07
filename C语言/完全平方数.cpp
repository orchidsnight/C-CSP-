#include<stdio.h>
int wan(int n){
	for(int i = 0;i<=n;i++){
		if(n - i*i ==0){
			return i;
		}
	}
	return -1;
}

int main(){
	int n,i;
	scanf("%d",&n);
	i = wan(n);
	if(i == -1){
		printf("no");
	}else{
		printf("%d",i);
	}
	return 0;
}
