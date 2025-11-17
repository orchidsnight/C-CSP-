#include <stdio.h>
#include <stdbool.h>

#define MAX_T 50

int main() {
    int n, m, t, k;
    scanf("%d %d %d %d", &n, &m, &t, &k);
    
    int matrix[20][20];  // 存储矩阵的区域分布，n<20, m<20
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    bool isAdjacent[MAX_T + 1] = {false};  // 标记区域是否为相邻区域，下标对应区域编号
    
    // 遍历矩阵的每个元素
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == k) {  // 当前元素属于区域k，检查其上下左右相邻元素
                // 上相邻（i>0时）
                if (i > 0 && matrix[i-1][j] != k) {
                    isAdjacent[matrix[i-1][j]] = true;
                }
                // 下相邻（i<n-1时）
                if (i < n-1 && matrix[i+1][j] != k) {
                    isAdjacent[matrix[i+1][j]] = true;
                }
                // 左相邻（j>0时）
                if (j > 0 && matrix[i][j-1] != k) {
                    isAdjacent[matrix[i][j-1]] = true;
                }
                // 右相邻（j<m-1时）
                if (j < m-1 && matrix[i][j+1] != k) {
                    isAdjacent[matrix[i][j+1]] = true;
                }
            }
        }
    }
    
    // 收集并输出相邻区域（按升序）
    bool hasAdjacent = false;
    for (int i = 1; i <= t; i++) {
        if (isAdjacent[i]) {
            printf("%d ", i);
            hasAdjacent = true;
        }
    }
    if (!hasAdjacent) {
        printf("-1");
    }
    
    return 0;
}
