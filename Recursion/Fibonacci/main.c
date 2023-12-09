#include <stdio.h>

void fibonacci(int number, int a, int b){
    if(number <= 2){
        return;
    }else{
        int temp = b;
        b = a + b;
        a = temp;
        printf("%d, ", b);
        return fibonacci(number - 1, a, b);
    }
}

int main(){
    int number, a = 0, b = 1;

    printf("Enter how many terms you want to see being printed: ");
    scanf("%d", &number);

    printf("0, 1, ");

    fibonacci(number, a, b);

    return 0;
}