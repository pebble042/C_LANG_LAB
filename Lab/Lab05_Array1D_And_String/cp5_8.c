#include <stdio.h>
#define BLANK_SPACE 32
int main() {
    char str[50];
    int i, count_space = 0;

    printf("Enter text: ");
    scanf("%[^\n]", &str);  // count space bar
    // gets(str);               // count space bar

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == BLANK_SPACE) {
            count_space++;
        }
    }

    printf("Word count = %d", count_space + 1);
    return 0;
}