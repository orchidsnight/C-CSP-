#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,p;
	scanf("%lf %lf %lf",&a,&b,&c);
	p=(a+b+c)/2.00;
	d = sqrt((p*(p-a)*(p-b)*(p-c)));
	printf("%.2f",d);
	return 0;	
}

