#include<stdio.h>

int gcd(int a,int b){
	if(b > a){
		int temp = a;
		a = b;
		b = temp;
	}
	if(b == 0){
		return a;
	}
	return gcd(b,a % b);
}

int main(void){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	long total = 0;
	int c;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(i == j){
				total+=(i+1)*(i+1)*a[i];
				continue;
			}
			c = a[i];
			for(int l=i+1;l<=j;l++){
				c = gcd(c,a[l]);
			}
			total += (i+1)*(j+1)*c;
		}
	}
	
	int y = total % 998244353;
	printf("%d",y);
	return 0;
}
