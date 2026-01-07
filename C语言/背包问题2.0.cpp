#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	int n,V;
	scanf("%d%d",&n,&V);
	int v[n],p[n];
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	
	
	for(int i=0;i<=V;i++){
		dp[i] = 0;
	}
	
	int max = 0;
	for(int i=0;i<n;i++){
		for(int j=V;j>=v[i];j--){
			if(dp[j-v[i]]+p[i]>dp[i]){
				dp[j]=dp[j-v[i]]+p[i];
				if(dp[j]>max)max = dp[j];
			}
		}
	}
	
	printf("%d",max);
	return 0;
}
