#include <stdio.h>
#include <string.h>

int main() {
    char a[10000];
    int bracket1 = 0, bracket2 = 0, bracket3 = 0;
    int len, i;

    if (fgets(a, sizeof(a), stdin) == NULL) {
        printf("no\n");
        return 0;
    }

    len = strlen(a);
    for (i = 0; i < len; i++) {
        switch(a[i]) {
            case '[': bracket1++; break;
            case ']': bracket1--; break;
            case '{': bracket2++; break;
            case '}': bracket2--; break;
            case '(': bracket3++; break;
            case ')': bracket3--; break;
            default: break; 
        }

        if (bracket1 < 0 || bracket2 < 0 || bracket3 < 0) {
            printf("no\n");
            return 0;
        }
    }


    if (bracket1 == 0 && bracket2 == 0 && bracket3 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
