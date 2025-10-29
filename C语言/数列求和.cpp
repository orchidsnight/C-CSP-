#include<stdio.h>
double shu(int n){
	double sum = 0;
	double a1=2,a2=3,b1=1,b2=2,a,b;
	for(int i = 0;i<n;i=i+1){
		sum = a1/b1+sum;
		a=a1;
		b=b1;
		a1 = a2;
		b1 = b2;
		a2 = a+a2;
		b2 = b+b2;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d",&n);
	double sum = shu(n);
	printf("%.2f",sum);
	return 0;
}
