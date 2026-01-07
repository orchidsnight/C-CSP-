#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void) {
	int n,idx;
	char c, s;
	char str[100];

	while(1){
		idx = 0;
		c = getchar();
		if(c == '\n'||c == '\0'||c == EOF){
			printf("\n");
			break;
		}
		if(isalpha(c)){
			s = c;
			printf("%c",s);			
		}else{
			while(isdigit(c)){
				str[idx++] = c;
				c = getchar();
			}
			str[idx] = '\0';
			n = atoi(str) - 1;
			while(n--){
				printf("%c",s);
			}
			if(isalpha(c)){
				s= c;
				printf("%c",s);
			}
		}
	}
	return 0;
}
