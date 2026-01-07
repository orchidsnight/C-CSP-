#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int id[n+1];
	for(int i=0;i<=n;i++){
		id[i] = 0;
	}
	
	while(n--){
		int h;
		scanf("%d",&h);
		id[h] ++;
		printf("%d ",id[h]);
	}
	
	return 0;
}
