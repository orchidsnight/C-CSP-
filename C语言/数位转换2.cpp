#include <stdio.h>
// ��������ǰ n ��Ԫ�غͺ� n ��Ԫ�صĺ���
void swapArrayElements(int arr[], int n) {
    int temp;
    // ѭ������ǰ n ���ͺ� n ����Ӧλ�õ�Ԫ��
    for (int i = 0; i < n; i++) {
        temp = arr[i];
        arr[i] = arr[n + i];
        arr[n + i] = temp;
    }
}
int main() {
    int n;
    // ���� n
    scanf("%d", &n);
    int arr[2 * n];
    // ���� 2n ��������������
    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &arr[i]);
    }
    // ���ý�������
    swapArrayElements(arr, n);
    // ��������������
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
