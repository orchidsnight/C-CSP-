#include<stdio.h>
int main(){
	int n,pi;
	double ave = 0;
	int l1 = 0,l2 = 0,l3 = 0,l4 = 0,l5 = 0,l6 = 0;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d",&pi);
		ave = ave+pi;
		if(pi<=50){
			l1++;
		}else if(pi<=100&&pi>50){
			l2++;
		}else if(pi<=150&&pi>100){
			l3++;
		}else if(pi<=200&&pi>150){
			l4++;
		}else if(pi<=300&&pi>200){
			l5++;
		}else{
		    l6++;
		}
	}
	ave = ave / n;
	printf("%.2f\n%d %d %d %d %d %d",ave,l1,l2,l3,l4,l5,l6);
	return 0;
}
