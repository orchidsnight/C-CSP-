#include<stdio.h>
int main(){
	double a;
	int b,c,d;
	scanf("%lf %d",&a,&b);
    if(b<5){
		d =0;
	}
	else{
		d = (b/5)*2;
	}	
	if(a<=3){
		c = 10+d;
		printf("%d",c);
		return 0;
	}
	if (a<=10){
		c = (a-3.0)*2.0+10+d;
		printf("%d",c);
		return 0;
	}
	else{
		c = (a-3.0)*2.0+10+(a-10)+d;
		printf("%d",c);
		return 0;
	}	
}
