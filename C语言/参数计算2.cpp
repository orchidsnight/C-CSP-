#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    // 输入整数 a 和 b
    scanf("%d %d", &a, &b);
    // 计算 C_L
    int C_L = a + sqrt(b * a + 1);
    // 计算 t_p，用乘法计算平方，避免 pow 精度问题
    int t_p = a * (C_L + b) * (C_L + b);
    // 计算 S_P
    int S_P = t_p * C_L + b * b;
    // 按照题目要求格式输出
    printf("CL=%d tD=%d SP=%d", C_L, t_p, S_P);
    return 0;
}
