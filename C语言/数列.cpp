#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int nums [1000];
	for(int i = 0;i<n;i++){
		scanf("%d",&nums[i]);
	}
	if (n==0)
	{
		printf("0\n");
		return 0;
	}
	int c = 1;
	for(int i = 1;i<n;i++){
		if (nums[i] !=nums[i-1]){
			c++;
		} 
	}
	printf("%d\n",c);
	return 0;
}
