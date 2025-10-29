#include <stdio.h>

int main() {
    int num;
    // 输入一个正整数
    scanf("%d", &num);
    // 判断是否能同时被 5 和 7 整除
    if (num % 5 == 0 && num % 7 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
