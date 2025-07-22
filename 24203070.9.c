
#include <stdio.h>
#include <math.h>
int reverse(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int countDigits(int n) {
    int count = 0;
    while(n > 0) {
        count++;
        n /= 10;
    }
    return count;
}
void checkProperties(int num) {
    int temp, sum, rem;

    if(num % 7 == 0 || num % 10 == 7)
        printf("Buzz Number: Yes\n");
    else
        printf("Buzz Number: No\n");

    int square = num * num;
    sum = 0; temp = square;
    while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if(sum == num)
        printf("Neon Number: Yes\n");
    else
        printf("Neon Number: No\n");

    int next = num + 1;
    int sqrtNext = sqrt(next);
    if(sqrtNext * sqrtNext == next)
        printf("Sunny Number: Yes\n");
    else
        printf("Sunny Number: No\n");

    sum = 0; temp = num;
    while(temp > 0) {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    if(sum == num)
        printf("Strong Number: Yes\n");
    else
        printf("Strong Number: No\n");

    int nDigits = countDigits(num);
    sum = 0; temp = num;
    while(temp > 0) {
        rem = temp % 10;
        sum += pow(rem, nDigits);
        temp /= 10;
    }
    if(sum == num)
        printf("Armstrong Number: Yes\n");
    else
        printf("Armstrong Number: No\n");

    int revNum = reverse(num);
    int squareNum = num * num;
    int squareRevNum = revNum * revNum;
    int revSquareRevNum = reverse(squareRevNum);
    if(squareNum == revSquareRevNum)
        printf("Adam Number: Yes\n");
    else
        printf("Adam Number: No\n");

    if(num == reverse(num))
        printf("Palindrome Number: Yes\n");
    else
        printf("Palindrome Number: No\n");
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkProperties(num);
    return 0;
}
