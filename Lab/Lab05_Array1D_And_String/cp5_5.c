#include <stdio.h>
int main() {
    char str[100];
    int i, found;

    printf("Enter string : ");
    scanf("%s", &str);          // Not count space bar
    // scanf("%[^\n]", &str);   // count space bar
    // gets(str);               // count space bar

    found = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Found letter 'a'");
    } else {
        printf("Not found letter 'a'");
    }

    return 0;
}