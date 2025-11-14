#include<stdio.h>
void up(int);

int main(){
	up(1);
	return 0;
}

void up(int n){
	printf("hh %d location %p\n",n,&n);
	if(n<4){
		up(n+1);
	}
	printf("hh %d loca %p\n",n,&n);
}
