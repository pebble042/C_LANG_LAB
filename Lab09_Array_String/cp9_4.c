#include <stdio.h>
#include <string.h>
void toLowerCase(char str[250]);
int main() {
    char str[250];
    printf("Enter a line of string : ");
    scanf("%[^\n]s", str);
    fflush(stdin);
    printf("Original string\n'%s'\n", str);
    toLowerCase(str);
    printf("After toLowerCase\n'%s'\n", str);
    return 0;
}

void toLowerCase(char str[250]) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}