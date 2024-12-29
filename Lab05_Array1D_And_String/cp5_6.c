#include <stdio.h>
#define L 20  // max length of a string
int main() {
    
    char character;
    int index, len;
    char string[L + 1];

    printf("Enter text: ");
    scanf("%s", string);  // ใช้ gets(string); กรณีต้องการให้มีช่องว่างในข้อความ

    index = 0;
    while (string[index] != '\0') {
        index++;
    }

    len = index;
    for (index = 0; index < len; index++) {
        if (string[index] >= 'A' && string[index] <= 'Z') {
            string[index] = string[index] + ('a' - 'A');
        } else if (string[index] >= 'a' && string[index] <= 'z') {
            string[index] = string[index] + ('A' - 'a');
        }
    }

    printf("New string = %s \n", string);
    return 0;
}