#include <stdio.h>

int main() {
    int num;
    // 读取输入的正整数
    scanf("%d", &num);
    // 通过取余运算判断：能被2整除为偶数，否则为奇数
    if (num % 2 == 0) {
        printf("偶数\n");
    } else {
        printf("奇数\n");
    }
    return 0;
}
