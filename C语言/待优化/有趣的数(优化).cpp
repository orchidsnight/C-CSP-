#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007

int valid_count;

/**
 * 回溯函数：生成符合条件的m位数字
 * @param pos：当前处理的位数（从0开始，到m-1结束）
 * @param m：目标数字的总位数
 * @param has3：标记是否已出现数字3（1=是，0=否）
 * @param has1：标记是否已出现数字1（1=是，0=否）
 * @param used：位掩码，标记0-3是否已使用（bit0=0，bit1=1，bit2=2，bit3=3）
 */
void backtrack(int pos, int m, int has3, int has1, int used) {

    if (pos == m) {

        if (used == 0b1111) {
            valid_count = (valid_count + 1) % MOD;
        }
        return;
    }


    for (int digit = 0; digit <= 3; digit++) {

        if (pos == 0 && digit == 0) {
            continue;
        }

        if (has3 && digit == 2) {
            continue;
        }

        if (has1 && digit == 0) {
            continue;
        }


        int new_used = used | (1 << digit);
        int new_has3 = has3 || (digit == 3);
        int new_has1 = has1 || (digit == 1);


        backtrack(pos + 1, m, new_has3, new_has1, new_used);
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    while (n--) {
        int m; 
        scanf("%d", &m);

        valid_count = 0;

        backtrack(0, m, 0, 0, 0);

        printf("%d\n", valid_count % MOD);
    }

    return 0;
}
