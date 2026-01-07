#include <stdio.h>
#include <string.h>

#define MAX_LINE 100
#define MAX_LINES 200

int main() {
    char lines[MAX_LINES][MAX_LINE];
    int lineCount = 0;
    char currentLine[MAX_LINE];

    // 读取输入行，直到遇到***end***
    while (1) {
        fgets(currentLine, MAX_LINE, stdin);
        // 去除fgets读取的换行符
        currentLine[strcspn(currentLine, "\n")] = '\0';
        if (strcmp(currentLine, "***end***") == 0) {
            break;
        }
        strcpy(lines[lineCount++], currentLine);
    }

    if (lineCount == 0) {
        printf("0\n");
        return 0;
    }

    // 找出最长行
    int maxLength = 0;
    int maxIndex = 0;
    for (int i = 0; i < lineCount; i++) {
        int len = strlen(lines[i]);
        if (len > maxLength) {
            maxLength = len;
            maxIndex = i;
        }
    }

    // 输出结果
    printf("%d\n", maxLength);
    printf("%s\n", lines[maxIndex]);

    return 0;
}
