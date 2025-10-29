#include<stdio.h>
int fe(int a){
	int fb,f1 = 1,f2 = 1;;
	if(a == 2||a==3){
		fb = 1;
	}else{
	for(int i = 3;i<=a;i++){
		fb = f1 +f2;
		f1 = f2;
		f2 = fb; 
	}
	return fb;	
	}
}

int su(int a){
	int i = 2,n = 1;
	while(i<a){
		n = a%i;
		i = i+1;
		if(n == 0){
			return 0;
		}
	}
	if(n != 0){
		return 1;
	}
}

int main(){
	int n,a,b ;
	scanf("%d",&n);
	a = fe(n);
	b = su(a);
	if(b == 0){
		printf("%d",a);
	}else{
		printf("yes");
	}
	return 0;
}
