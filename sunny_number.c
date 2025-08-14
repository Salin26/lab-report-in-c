#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int next = n + 1;
    int root = sqrt(next);

    if(root * root == next) {
        printf("%d is a Sunny Number.\n", n);
    } else {
        printf("%d is not a Sunny Number.\n", n);
    }

    return 0;
}
