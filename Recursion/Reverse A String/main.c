#include <stdio.h>

void reverse(char string[]){
    if (string[0] == '\0') {
        return;
    }
    reverse(&string[1]);
    printf("%c", string[0]);
}

int main(){
    char string[30];
    printf("Enter a string: ");
    scanf("%s", string);
    reverse(string);
    
    return 0;
}