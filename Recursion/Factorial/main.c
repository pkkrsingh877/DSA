#include <stdio.h>

int factorial(int number){
    if(number <= 1){
        return 1;
    }else{
        return number * factorial(number - 1);
    }
}

int main(){
    int number, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    fact = factorial(number);
    printf("Factorial: %d", fact);

    return 0;
}