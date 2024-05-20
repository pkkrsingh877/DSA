#include <stdio.h>

int linearSearch(int *dataset, int target, int size);

int main(){
    int dataset[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(dataset)/sizeof(dataset[0]);
    int target;

    printf("Enter a number: ");
    scanf("%d", &target);

    int result = linearSearch(dataset, target, size);

    if(result != -1){
        printf("%d was found at index %d.", target, result);
    }else{
        printf("%d was not found in the dataset.", target);
    }
    
    return 0;
}

int linearSearch(int *dataset, int target, int size){
    for(int i = 0; i < size; i++){
        if(target ==  dataset[i]){
            return i;
        }
    }
    return -1;
}