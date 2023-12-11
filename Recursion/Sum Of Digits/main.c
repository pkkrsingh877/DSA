#include <stdio.h>

int sumOfDigits(int number, int sum){
    if(number == 0){
        return sum;
    }
    sum += number%10;
    number /= 10;
    sumOfDigits(number, sum);
}

int main(){
    int number, sum = 0;
    printf("Enter number: ");
    scanf("%d", &number);

    sum = sumOfDigits(number, sum);
    printf("Sum of Digits: %d\n", sum);
    return 0;
}