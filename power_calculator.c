#include <stdio.h>
#include <math.h>

float power(float base, float exponent) {
    return pow(base, exponent);
}

int main() {
    float base, exponent;
    printf("Enter base and exponent: ");
    scanf("%f %f", &base, &exponent);
    printf("%.2f ^ %.2f = %.2f\n", base, exponent, power(base, exponent));
    return 0;
}
