#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void fu(char c[]);
void fuzhuan(char fl[],char a[]);
const char base38[] = " 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ_";

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char c[73];
	
	while(n--){
		fgets(c,73,stdin);
		getchar();
		c[72] = '\0';
		fu(c);
	}
	return 0;
}

void fu(char c[]){
	char fl[59];
	for(int i=0;i<59;i++){
		fl[i]  = c[i+1];
	}
	fl[58] = '\0';
	char a[12];
	fuzhuan(fl,a);
	int b = c[71] - '0';
	if(b){
		printf("%s ###\n",a);
	}else{
		printf("### %s\n",a);
	}
}

void fuzhuan(char fl[],char c[]){
	int index = 10;
	long long a = 0;
	for(int i=0;i<58;i++){
		a = a*2+(fl[i] - '0');
	}
	
	while(a>0){
		int rem = a %38;
		c[index--] = base38[rem];
		a = a / 38;
	}
	
	c[11] = '\0';
	c[strcspn(c," ")] = '\0';
}
