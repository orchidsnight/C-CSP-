#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int* A = (int*)malloc((m + 1) * sizeof(int));
    A[0] = 0;
    for (int i = 1; i <= m; i++) {
        scanf("%d", &A[i]);
    }
    
    int* dp = (int*)malloc((n + 1) * sizeof(int));
    memset(dp, 0, (n + 1) * sizeof(int)); 
    
    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= m; j++) {  
            if (i >= j) { 
                if (dp[i] < dp[i - j] + A[j]) {
                    dp[i] = dp[i - j] + A[j];
                }
            }
        }
    }
    
    printf("%d\n", dp[n]);
    
    free(A);
    free(dp);
    return 0;
}
