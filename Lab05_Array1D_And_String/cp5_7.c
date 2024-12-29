#include <stdio.h>
int main() {
    char str[50], str_search, str_replace;
    int i;

    printf("Enter string: ");
    scanf("%s", &str);          // Not count space bar
    // scanf("%[^\n]", &str);   // count space bar
    // gets(str);               // count space bar

    printf("Enter a character to search: ");
    scanf(" %c", &str_search);

    printf("Enter a character to replace: ");
    scanf(" %c", &str_replace);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == str_search) {
            str[i] = str_replace;
        }
    }

    printf("New string = %s", str);

    return 0;
}