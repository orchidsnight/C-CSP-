#include<stdio.h>

int main(){
	int m,n,b;
	scanf("%d%d",&b,&n);
	m = b;
	while(m<=n){
		int sum = 0;
		for(int i = 1;i < m ;i = i + 1){
			if(m%i==0){
			    sum = sum + i ;
			    }			
			}
			if(sum == m){
				printf("%d\n",sum);
			}
	    m = m + 1;
	}
	return 0;
}
