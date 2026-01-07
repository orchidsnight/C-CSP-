#include <stdio.h>
#include <string.h>
#define MOD 1000000007
#define MAX_M 10000 // 支持的最大位数（可按需调整，滚动数组不受此值空间影响）

// 滚动数组：仅存储当前位（curr）和下一位（next）的状态
// 状态维度：[has3(0/1)][has1(0/1)][used(0~15)]，used是0-3的位掩码
long long curr[2][2][16];
long long next[2][2][16];

/**
 * 计算m位有效数字的数量（滚动数组优化的动态规划）
 * 有效规则：1. 仅含0-3；2. 同时含0-3；3. 3后无2；4. 1后无0；5. 首位非0
 */
long long count_valid_numbers(int m) {
    // 1. 初始化当前位（curr）：对应第0位（首位），只能填1~3（首位非0）
    memset(curr, 0, sizeof(curr)); // 清空当前位状态
    for (int digit = 1; digit <= 3; digit++) {
        int new_has3 = (digit == 3) ? 1 : 0; // 是否出现3
        int new_has1 = (digit == 1) ? 1 : 0; // 是否出现1
        int new_used = 1 << digit;           // 标记当前数字已使用（位掩码）
        curr[new_has3][new_has1][new_used] = 1; // 初始计数为1
    }

    // 2. 状态转移：从第1位处理到第m-1位（共m-1次迭代）
    for (int pos = 0; pos < m - 1; pos++) {
        memset(next, 0, sizeof(next)); // 清空下一位状态，避免残留

        // 遍历当前位（curr）的所有可能状态
        for (int has3 = 0; has3 < 2; has3++) {
            for (int has1 = 0; has1 < 2; has1++) {
                for (int used = 0; used < 16; used++) {
                    // 若当前状态无计数，跳过（无意义）
                    if (curr[has3][has1][used] == 0) {
                        continue;
                    }

                    // 尝试填入当前位的数字（0~3）
                    for (int digit = 0; digit <= 3; digit++) {
                        // 规则3：已出现3（has3=1），不能填2
                        if (has3 && digit == 2) {
                            continue;
                        }
                        // 规则4：已出现1（has1=1），不能填0
                        if (has1 && digit == 0) {
                            continue;
                        }

                        // 更新新状态（下一位的状态）
                        int new_has3 = has3 | (digit == 3 ? 1 : 0); // 或运算：只要出现过3就为1
                        int new_has1 = has1 | (digit == 1 ? 1 : 0); // 或运算：只要出现过1就为1
                        int new_used = used | (1 << digit);         // 位掩码标记新数字

                        // 累加计数到下一位状态（取模避免溢出）
                        next[new_has3][new_has1][new_used] = 
                            (next[new_has3][new_has1][new_used] + curr[has3][has1][used]) % MOD;
                    }
                }
            }
        }

        // 滚动更新：下一位（next）变为当前位（curr），准备处理下一轮
        memcpy(curr, next, sizeof(curr));
    }

    // 3. 统计最终结果：所有满足“0-3全出现（used=0b1111）”的状态计数之和
    long long result = 0;
    for (int has3 = 0; has3 < 2; has3++) {
        for (int has1 = 0; has1 < 2; has1++) {
            result = (result + curr[has3][has1][0b1111]) % MOD;
        }
    }
    return result;
}

int main(void) {
    // 预处理：提前计算MAX_M以内所有m的结果（多测试用例时直接查询，无需重复计算）
    long long ans[MAX_M + 1];
    for (int m = 1; m <= MAX_M; m++) {
        ans[m] = count_valid_numbers(m);
    }

    // 处理测试用例
    int n; // 测试用例数量
    scanf("%d", &n);
    while (n--) {
        int m; // 每个测试用例的数字位数
        scanf("%d", &m);
        // 若m超过预处理的MAX_M，直接实时计算（避免数组越界）
        if (m > MAX_M) {
            printf("%ld\n", count_valid_numbers(m) % MOD);
        } else {
            printf("%ld\n", ans[m]);
        }
    }

    return 0;
}
