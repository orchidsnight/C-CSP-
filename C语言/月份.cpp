#include<stdio.h>
int main(){
	int m,d,n;
	scanf("%d%d",&d,&m);
	if(m == 1||m==3||m==5||m==7||m==8||m==10||m==12){
		n = 31;
	}else if(m==4||m==6||m==9||m==11){
		n = 30;
	}else{
		if(d%4==0&&d!=1900&&d!=2100&&d!=2200&&d!=2300){
			n=29;
		}else{
			n=28;
		}
	}
	printf("%d\n",n);
	return 0;
}
