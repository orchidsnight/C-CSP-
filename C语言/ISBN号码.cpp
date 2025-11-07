#include<stdio.h>

int main(){
	int a,b,c,sum;
	int l1,l2,l3,l4,l5,l6,l7,l8,l9;
	char d,n;
	scanf("%d-%d-%d-%c",&a,&b,&c,&d);
	l1 = a;
	l4 = b%10;
	l3 = (b/10)%10;
	l2 = b/100;
	l9 = c%10;
	l8 = (c/10)%10;
	l7 = (c/100)%10;
	l6 = (c/1000)%10;
	l5 = c/10000;
	sum = 1*l1+2*l2+3*l3+4*l4+5*l5+6*l6+7*l7+8*l8+9*l9;
	n = sum%11;
	if(n==10){
		n = 'X';
	}else{
		n = n + '0';
	}
	if(n == d){
		printf("Right");
	}else{
	    printf("%d-%d-%d-%c",a,b,c,n);
	}
	return 0;
}
