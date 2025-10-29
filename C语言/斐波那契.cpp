#include<stdio.h>
int fe(int a){
	int fb,f1 = 7,f2 = 11;
	if(a == 0){
		fb = 7;
	}else if(a==1){
		fb = 11;
	}else{
	for(int i = 2;i<=a;i++){
		fb = f1 +f2;
		f1 = f2;
		f2 = fb; 
	}}
	return fb;	
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fe(n));
	return 0;
}
	
	
