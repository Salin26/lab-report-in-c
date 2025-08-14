#include <stdio.h>

void check_even_odd(int num) {
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }
}

int main() {
    int n[10] = {1, 4, 5, 2, 55, 6, 6, 7, 2, 12};
    for (int i = 0; i < 10; i++) {
        check_even_odd(n[i]);
    }
    return 0;
}
