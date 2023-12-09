#include <stdio.h>

int power(int base, int exponent){
    if(exponent <= 1){
        return base;
    }else{
        return base * power(base, exponent - 1);
    }
}

int main(){
    int pow, base, exponent;

    printf("Enter Base and Exponent: ");
    scanf("%d %d", &base, &exponent);

    pow = power(base, exponent);

    printf("Power: %d", pow);

    return 0;
}