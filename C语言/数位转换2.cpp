#include <stdio.h>
// 交换数组前 n 个元素和后 n 个元素的函数
void swapArrayElements(int arr[], int n) {
    int temp;
    // 循环交换前 n 个和后 n 个对应位置的元素
    for (int i = 0; i < n; i++) {
        temp = arr[i];
        arr[i] = arr[n + i];
        arr[n + i] = temp;
    }
}
int main() {
    int n;
    // 输入 n
    scanf("%d", &n);
    int arr[2 * n];
    // 输入 2n 个整数到数组中
    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &arr[i]);
    }
    // 调用交换函数
    swapArrayElements(arr, n);
    // 输出交换后的数组
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
