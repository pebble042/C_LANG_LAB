#include <stdio.h>
#include <string.h>
int main() {
    char word1[20], word2[20];
    int cmp;

    printf("Enter 2 words: ");
    scanf("%s %s", word1, word2);
    printf("Compare '%s'(%d) ", word1, strlen(word1));
    printf("and '%s'(%d)\n", word2, strlen(word2));
    cmp = strcmp(word1, word2);

    if (cmp == 0) {
        printf("%s = %s\n", word1, word2);
    } else if (cmp > 0) {
        printf("%s > %s\n", word1, word2);
    } else {
        printf("%s < %s\n", word1, word2);
    }

    return 0;
}