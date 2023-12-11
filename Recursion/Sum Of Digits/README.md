# Another way to solve this is by not explicitly passing the sum variable

```
#include <stdio.h>

int sumOfDigits(int number) {
    // Base case: If the number becomes 0, return 0
    if (number == 0) {
        return 0;
    } else {
        // Recursive case: Add the last digit to the sum and make a recursive call
        return (number % 10) + sumOfDigits(number / 10);
    }
}

int main() {
    int number, sum;

    printf("Enter number: ");
    scanf("%d", &number);

    // Call sumOfDigits with the input number
    sum = sumOfDigits(number);

    printf("Sum of Digits: %d\n", sum);
    return 0;
}
```