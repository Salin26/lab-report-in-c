#include <stdio.h>

long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("Factorial of %d = %ld\n", i, factorial(i));
    }
    return 0;
}
