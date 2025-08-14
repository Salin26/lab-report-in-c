#include <stdio.h>
#define PI 3.14159

void areaCircle() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area: %.2f\n", PI * r * r);
}

void perimeterCircle() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Perimeter: %.2f\n", 2 * PI * r);
}

int main() {
    int choice;
    printf("Shape Calculator Menu:\n");
    printf("1. Area of Circle\n2. Perimeter of Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) areaCircle();
    else if (choice == 2) perimeterCircle();
    else printf("Invalid choice.\n");

    return 0;
}
