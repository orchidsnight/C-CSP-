#include<stdio.h>
char transformCharacter(char c);
int main(){
	char input;
	scanf("%c",&input);
    char transformedChar = transformCharacter(input);
    printf("%c %c", input, transformedChar);
	    return 0;}	
	// �ַ�ת������
	char transformCharacter(char c) {
	    // �����ַ����ͽ���ת��
	    if (c >= 'a' && c <= 'z') {
	        // Сд��ĸת������
	        return (c - 'a' + 3) % 26 + 'a';
	    } else if (c >= 'A' && c <= 'Z') {
	        // ��д��ĸת������
	        return (c - 'A' - 2 + 26) % 26 + 'A';
	    } else if (c >= '0' && c <= '9') {
	        // �����ַ�ת������
	        return (c - '0' + 9) % 10 + '0';
	    } else if (c == ' ') {
	        // �ո��ַ�ת������
	        return '*';
	    } else {
	        // �����ַ�ת������
	        return '#';
	    }
	}
	
