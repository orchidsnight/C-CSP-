#include<stdio.h>
int su(int n);
int main(){
	int n,sum = 0;
	scanf("%d",&n);
    for(int i=1;i<= n+10;i++){
		if(i>=n && i<=n+10){
			sum += su(i);
		}
	}
	printf("%d",sum);
	return 0 ;
}

int su(int n){
	int count = 2,s = 5;
	if(n == 1){
		return 2;
	}else if(n == 2){
		return 3;
	}else{
		while(n - count){
			int m = 0;
			for(int i=2;i<s-1;i++){
				if(s%i == 0){
					m += 1;
				}
			}
			if(m == 0){
				count ++;
			}
			s ++;
		}
	}
	return s-1;
}
