//  Find the kth smallest element in the array
#include <stdio.h>

void printArray(int *array){
    for(int i = 0; i < 10; i++){
        printf("%d ",array[i]);
    }
};

int main(){
    int array[10] = {1,2,9,100,-1000,45,67,-9,-72,0};
    // We need to sort the array first

    printArray(array);
    printf("\n");

    for(int i = 0; i < 10; i++){
        int min_index = i;
        for(int j = i + 1; j < 10; j++){
            if(array[j] < array[min_index]){
                min_index = j;
            }
        }
        //swap if i != min_index
        //if i is equal to min_index then swapping makes the element zero
        if(i != min_index){
            array[i] = array[i] + array[min_index];
            array[min_index] = array[i] - array[min_index];
            array[i] = array[i] - array[min_index];
        }
    }

    printArray(array);
    return 0;
}