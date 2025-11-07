#include<stdio.h>
int main(){
	int n,s,a,i = 0,max_n = 0,max = 0;
	scanf("%d",&n);
	for(;i<n;i++){
		int sum = 0;
		scanf("%d",&s);
		a = s;
		while(s){
			sum += s%10;
			s = s/10;
		}
		if(sum > max||(sum == max && a > max_n)){
			max = sum;
			max_n = a;
		}
	}	
	printf("%d",max_n);
	return 0;
}
