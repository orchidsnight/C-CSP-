#include<stdio.h>
int main(){
	int a,b,c,d,e;
	scanf("%d",&a);
	b = a % 10;
	c = ((a-b) % 100)/10;
	d = ((a - (c*10)-b)%1000)/100;	
	e = b +c+d;
	printf("%d",e);
	return 0;
}
