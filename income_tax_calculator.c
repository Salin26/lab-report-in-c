#include <stdio.h>

float incomeTax(int income) {
    float tax = 0;
    if (income <= 300000) tax = 0;
    else if (income <= 400000) tax = (income - 300000) * 0.05;
    else if (income <= 700000) tax = (100000 * 0.05) + (income - 400000) * 0.10;
    else if (income <= 1100000) tax = (100000 * 0.05) + (300000 * 0.10) + (income - 700000) * 0.15;
    else if (income <= 1600000) tax = (100000 * 0.05) + (300000 * 0.10) + (400000 * 0.15) + (income - 1100000) * 0.20;
    else tax = (100000 * 0.05) + (300000 * 0.10) + (400000 * 0.15) + (500000 * 0.20) + (income - 1600000) * 0.25;
    return tax;
}

int main() {
    int income;
    printf("Enter your income: ");
    scanf("%d", &income);
    printf("Income Tax: %.2f\n", incomeTax(income));
    return 0;
}
