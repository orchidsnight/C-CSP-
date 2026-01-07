#include<stdio.h>

void bian(int a[],int p,int q,int n);

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		a[i] = i+1;
	}
	
	int c;
	scanf("%d",&c);
	int p,q;
	while(c--){
		scanf("%d%d",&p,&q);
		bian(a,p,q,n);
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

void bian(int a[],int p,int q,int n){
	if(q == 0){
		return ;
	}
	for(int i=0;i<n;i++){
		if(a[i] == p){
			p = i;
			break;
		}
	}
	if(q > 0){
		while(q--){
			int temp = a[p];
			a[p] = a[p+1];
			a[p+1] = temp;
			p++;
			if(p>=n-1)return;
		}
		return;
	}
	if(q < 0){
		q = -q;
		while(q--){
			int temp = a[p];
			a[p] = a[p-1];
			a[p-1] = temp;
			p--;
			if(p <= 2){
				return;
			}
		}
	}
}
