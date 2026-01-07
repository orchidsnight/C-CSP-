#include <stdio.h>
#include <stdlib.h>

#define MAXN 100005

typedef long long ll;

int stack[MAXN];
int top = -1;
int h[MAXN];
int left[MAXN], right[MAXN];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &h[i]);
    }
    
    // 计算每个位置的左边界（左边第一个比h[i]小的位置）
    for (int i = 0; i < n; ++i) {
        while (top != -1 && h[stack[top]] >= h[i]) {
            top--;
        }
        left[i] = (top == -1) ? -1 : stack[top];
        stack[++top] = i;
    }
    top = -1; // 清空栈
    
    // 计算每个位置的右边界（右边第一个比h[i]小的位置）
    for (int i = n - 1; i >= 0; --i) {
        while (top != -1 && h[stack[top]] >= h[i]) {
            top--;
        }
        right[i] = (top == -1) ? n : stack[top];
        stack[++top] = i;
    }
    
    // 计算最大面积
    ll max_area = 0;
    for (int i = 0; i < n; ++i) {
        ll width = right[i] - left[i] - 1;
        ll area = h[i] * width;
        if (area > max_area) {
            max_area = area;
        }
    }
    
    printf("%I64d\n", max_area);
    return 0;
}
