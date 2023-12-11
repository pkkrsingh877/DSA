#include <stdio.h>

int gcd(int number1, int number2) {
    if (number2 == 0) {
        return number1;
    }
    return gcd(number2, number1 % number2);
}

int main() {
    int number1, number2;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    int result = gcd(number1, number2);

    printf("GCD of %d and %d is: %d\n", number1, number2, result);

    return 0;
}
