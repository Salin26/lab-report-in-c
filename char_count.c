#include <stdio.h>
#include <string.h>

int countChar(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) count++;
    }
    return count;
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character to count: ");
    scanf("%c", &ch);
    printf("'%c' occurs %d times.\n", ch, countChar(str, ch));
    return 0;
}
