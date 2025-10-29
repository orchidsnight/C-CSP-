#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	double C = a + sqrt(b*a+1);
	double T = a*(C+b)*(C+b);
	double S = T*C+b*b;
	printf("CL=%d tD=%d SP=%d",int(C),int(T),int(S));
	return 0;
}
