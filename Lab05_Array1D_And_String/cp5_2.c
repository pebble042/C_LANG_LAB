#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    printf("Enter sring: ");
    scanf("%s", &str);

    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}