#include <stdio.h>

void convertF() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (9.0 / 5) * c + 32;
    printf("Temperature in Fahrenheit: %.2f\n", f);
}

void convertC() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9.0;
    printf("Temperature in Celsius: %.2f\n", c);
}

int main() {
    int choice;
    printf("Enter 1 for Celsius to Fahrenheit, 0 for Fahrenheit to Celsius: ");
    scanf("%d", &choice);

    if (choice == 1)
        convertF();
    else if (choice == 0)
        convertC();
    else
        printf("Invalid choice.\n");

    return 0;
}
