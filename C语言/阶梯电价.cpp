#include<stdio.h>
int main(){
	double a,b,c;
	scanf("%lf",&a);
	if(a<=110){
		b = a*0.5;
		printf("%.2f",b);
	}else if(a<=210){
			b = a-110.0;
			c = b*0.55+110*0.5;
			printf("%.2f",c);
	}else if(a>210){
			b = a-210;
			c = 110*0.5+(210-110)*0.55+b*0.7;
			printf("%.2f",c);
		}
	return 0;	
}
