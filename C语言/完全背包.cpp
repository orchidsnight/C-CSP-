#include<stdio.h>

#include<math.h>

int main(void){
	int n,v;
	scanf("%d%d",&n,&v);
	int a[n];
	int p[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	
	int dp[v+1] = {0};
	
	
	for(int i=0;i<n;i++){
		for(int j=a[i];j<=v;j++){
			if(dp[j]<dp[j-a[i]]+p[i]){
				dp[j] = dp[j-a[i]]+p[i];
			}
		}
	}
	
	printf("%d",dp[v]);
	return 0;
}
