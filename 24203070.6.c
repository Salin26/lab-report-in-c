#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    float result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // note space before %c to consume leftover newline

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%d - %d = %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%d * %d = %.2f\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("%d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator '%c'\n", operator);
    }

    return 0;
}
