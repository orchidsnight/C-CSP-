#include <stdio.h>

int main() {
    int num;
    // ��ȡ�����������
    scanf("%d", &num);
    // ͨ��ȡ�������жϣ��ܱ�2����Ϊż��������Ϊ����
    if (num % 2 == 0) {
        printf("ż��\n");
    } else {
        printf("����\n");
    }
    return 0;
}
