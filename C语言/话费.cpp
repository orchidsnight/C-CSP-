#include<stdio.h>
int main(){
	double t,a,b;
	scanf("%lf",&t);
	a = 0.6*t;
	b = 50+0.4*t;
	if(a<b){
		printf("%.2f\n%.2f\nA",a,b);
		return 0;
	}
	else{
		printf("%.2f\n%.2f\nB",a,b);
				return 0;
	}
}
