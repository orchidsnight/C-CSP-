#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    // �������� a �� b
    scanf("%d %d", &a, &b);
    // ���� C_L
    int C_L = a + sqrt(b * a + 1);
    // ���� t_p���ó˷�����ƽ�������� pow ��������
    int t_p = a * (C_L + b) * (C_L + b);
    // ���� S_P
    int S_P = t_p * C_L + b * b;
    // ������ĿҪ���ʽ���
    printf("CL=%d tD=%d SP=%d", C_L, t_p, S_P);
    return 0;
}
