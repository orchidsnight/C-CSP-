#include<stdio.h>
char transformCharacter(char c);
int main(){
	char input;
	scanf("%c",&input);
    char transformedChar = transformCharacter(input);
    printf("%c %c", input, transformedChar);
	    return 0;}	
	// 字符转换函数
	char transformCharacter(char c) {
	    // 根据字符类型进行转换
	    if (c >= 'a' && c <= 'z') {
	        // 小写字母转换规则
	        return (c - 'a' + 3) % 26 + 'a';
	    } else if (c >= 'A' && c <= 'Z') {
	        // 大写字母转换规则
	        return (c - 'A' - 2 + 26) % 26 + 'A';
	    } else if (c >= '0' && c <= '9') {
	        // 数字字符转换规则
	        return (c - '0' + 9) % 10 + '0';
	    } else if (c == ' ') {
	        // 空格字符转换规则
	        return '*';
	    } else {
	        // 其他字符转换规则
	        return '#';
	    }
	}
	
