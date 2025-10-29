#include<stdio.h>
void change(int arr[],int n){
	int temp;
	for(int i = 0;i<n;i++){
		temp = arr[i];
		arr[i]=arr[n+i];
		arr[n+i]=temp;
	}
}
int main (){
	int n;
	scanf("%d",&n);
	int arr[2*n];
	for(int i=0;i<2*n;i++){
		scanf("%d",&arr[i]);
	}
	change(arr,n);
	for(int i=0;i<2*n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
