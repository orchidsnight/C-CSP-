#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	b = a/100;
	c = (a-(b*100))/50;
	d = (a-(b*100)-(c*50))/20;
	e = (a-(b*100)-(c*50)-(d*20))/10;
	f = (a-(b*100)-(c*50)-(d*20)-(e*10))/5;
	g = (a-(b*100)-(c*50)-(d*20)-(e*10)-(f*5));
	printf("%d %d %d %d %d %d",b,c,d,e,f,g);
	return 0;
}
