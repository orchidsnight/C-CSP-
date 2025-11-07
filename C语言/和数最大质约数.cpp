#include<stdio.h>
int b(int n);
int su(int n);
int main(){
	char c[11];
	scanf("%s",c);
	int n = 0,i = 0;
		while(c[i] !='\0'){
			if(c[i] >='0'&& c[i]<='9'){
			    n +=(c[i]-'0');
			}
			i++;
		}
	if(n<=2){
		printf("sum <=2.");
	}else{
		n = b(n);
		printf("%d",n);
	}
	return 0;
}


int b(int n){
	int max = 0;
	int z = 2;
	int q = -1;
	for(;z<=n;z++){
		q = su(z);
		if(su(z) !=0 && n%z == 0){
			max = z;
		}
	}
	return max;
}

int su(int n){
	int j = n;
	if(n == 2)
	    return 2;
	if(n == 3){
		return 3;
	}
	while(j > 1){  
	    j--;
	    if(j == 1) break;
		if(n%j == 0){
			return 0;
		}
	
	}
	return n;
}
