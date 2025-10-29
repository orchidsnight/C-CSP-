#include<stdio.h>
int main(){
	int a,b,d;
	char c;
	char e;
	e = '=';
	scanf("%d%c%d",&a,&c,&b);
	if(c == '+'){
		d = a+b;
		printf("%d%c%d%c%d",a,c,b,e,d);
		}else if(c == '-'){
			d = a-b;
					printf("%d%c%d%c%d",a,c,b,e,d);
		}else if(c == '*'){
			d = a*b;
					printf("%d%c%d%c%d",a,c,b,e,d);
		}else if(c == '/'){
			d = a/b;
					printf("%d%c%d%c%d",a,c,b,e,d);
		}else if(c == '%'){
		    d = a%b;
				    printf("%d%c%d%c%d",a,c,b,e,d);
				}					
	return 0;
		}
