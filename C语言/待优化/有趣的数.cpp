#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* shu(int n) {
	char* c = (char*)malloc(n + 1);
	if (c == NULL) {
		printf("wrong");
		exit(1);
	}
	c[n] = {0};
	c[0] = '1';
	c[n] = '\0';
	return c;
}

int shai(const char* c) {
	if (strpbrk(c, "456789") == NULL) {
		int has0 = 0, has1 = 0, has2 = 0, has3 = 0;
		for (int i = 0; c[i] != '\0'; i++) {
			switch (c[i]) {
				case '0':
					has0 = 1 ;
					break;
				case '1':
					has1 = 1 ;
					break;
				case '2':
					has2 = 1 ;
					break;
				case '3':
					has3 = 1 ;
					break;
				default:
					break;
			}
			if (has0 == 1 && has1 == 1 && has2 == 1 && has3 == 1) {
				return 1;
			}
		}
		return 0;
	} else {
		return 0;
	}
}

int xuan(const char *c) {
	int hasSeen3 = 0;
	for (int i = 0; c[i] != '\0'; i++) {
		if (c[i] == '3') {
			hasSeen3 = 1;
		} else if (c[i] == '2' && hasSeen3 == 1) {
			return 0;
		}
	}
	int hasSeen1 = 0;
	for (int i = 0; c[i] != '\0'; i++) {
		if (c[i] == '1') {
			hasSeen1 = 1;
		} else if (c[i] == '0' && hasSeen1 == 1) {
			return 0;
		}
	}
	return 1;
}

void zheng(char* c, int len) {
	int carry =1;
	for(int i=len -1;i>=0&&carry;i--){
		int digit = (c[i] - '0') + carry;
		if(digit == 10){
			c[i] = 0;
			carry =1;
		}else{
			c[i] = digit + '0';
			carry = 0;
		}
	}
}


int main(void) {
	int n;
	int m;
	long z;
	long c;
	scanf("%d", &n);
	while (n--) {
		z = 0;
		scanf("%d", &m);
		char * a = shu(m);
		char zhong[m + 1];
		for(int i=0;i<m;i++){
			zhong[i] = '9';
		}
		zhong[m] = '\0';
		while (strcmp(a,zhong)!=0) {
			if (shai(a)) {
				if (xuan(a)) {
					z++;
				}
			}
			zheng(a,m);
		}
		c = z % (1000000007);
		printf("%ld\n", c);
		free(a);
	}
	return 0;
}
