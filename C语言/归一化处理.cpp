#include<stdio.h>
#include<math.h>

int main(void){
	int n;
	scanf("%d",&n);
	int a[n+1];
	int total = 0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		total += a[i];
	}
	
	double b = total*1.0/n;
	double d = 0;
	for(int i=0;i<n;i++){
		d += (a[i] - b)*(a[i] - b)*1.0/n;
	}
	
	double dai = sqrt(d);
	double f;
	
	for(int i=0;i<n;i++){
		f = (a[i] - b)/dai;
		printf("%f\n",f);
	}
	
	return 0;
}
