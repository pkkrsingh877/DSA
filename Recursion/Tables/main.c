#include <stdio.h>

void table(int number, int limit){
    if(limit == 11){
        return;
    }
    printf("%d\n", number*limit);
    limit = limit + 1;
    table(number, limit);
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    table(number, 1);
}