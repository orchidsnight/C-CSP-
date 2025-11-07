#include <stdio.h>
#include <string.h>

int main() {
    char isbn[20];
    scanf("%s", isbn);  
    int sum = 0;
    int index = 0;     
    char correct_isbn[20];
    strcpy(correct_isbn, isbn);  
        for (int i = 0; isbn[i] != '\0'; i++) {
        if (isbn[i] != '-') { 
            if (index < 9) { 
                sum += (isbn[i] - '0') * (index + 1);
            } else {  
                correct_isbn[i] = (sum % 11 == 10) ? 'X' : (sum % 11 + '0');
            }
            index++;
        }
    }
    if (strcmp(isbn, correct_isbn) == 0) {
        printf("Right\n");
    } else {
        printf("%s\n", correct_isbn);
    }
    return 0;
}
