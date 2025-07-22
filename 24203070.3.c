#include <stdio.h>
int main() {
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    if (c == 'a' || c == 'A') {
        printf("It is a vowel.\n");
    }
    else if (c == 'e' || c == 'E') {
        printf("It is a vowel.\n");
    }
    else if (c == 'i' || c == 'I') {
        printf("It is a vowel.\n");
    }
    else if (c == 'o' || c == 'O') {
        printf("It is a vowel.\n");
    }
    else if (c == 'u' || c == 'U') {
        printf("It is a vowel.\n");
    }
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("consonant.\n");
    }
    }
