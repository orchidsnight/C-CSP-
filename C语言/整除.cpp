#include <stdio.h>

int main() {
    int num;
    // ����һ��������
    scanf("%d", &num);
    // �ж��Ƿ���ͬʱ�� 5 �� 7 ����
    if (num % 5 == 0 && num % 7 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
