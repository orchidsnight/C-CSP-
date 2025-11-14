#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int found = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("-1");
    }
    
    return 0;
}
