#include <stdio.h>

int lengthOfAString(char string[], int count){
    if(string[0] == '\0'){
        return count;
    }
    count = count + 1;
    lengthOfAString(&string[1], count);
}

int main(){
    char string[20];
    printf("Enter the string: ");
    scanf("%s", string);
    int length = lengthOfAString(string, 0);
    printf("Length of the string is %d.\n", length);
    return 0;
}