#include <stdio.h>
int main() {
    char str[100];
    printf("Enter string: ");

    // scanf("%[^\n]", &str); // count space bar
    scanf("%s", &str);  // Not count space bar

    int i, len_str;

    /* length string */
    len_str = 0;
    for (i = 0; str[i] != '\0'; i++) {
        len_str++;
    }

    for (i = len_str - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}