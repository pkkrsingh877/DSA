#include <stdio.h>

void print(int *dataset, int size);
void input(int *dataset, int size);
void bubbleSort(int *dataset, int size);

int main(){

    int dataset[10];
    input(dataset, 10);
    int size = sizeof(dataset)/sizeof(dataset[0]);
    print(dataset, size);
    bubbleSort(dataset, size);
    print(dataset, size);
    return 0;
}

void print(int *dataset, int size){
    printf("Printing the data in the dataset.\n");
    printf("location\tdata\n");
    for(int i = 0; i< size; i++){
        printf("%d\t%d\n", i, dataset[i]);
    }
}

void input(int *dataset, int size){
    for(int i = 0; i< size; i++){
        printf("Enter data: ", dataset[i]);
        scanf("%d", &dataset[i]);
        printf("\n");
    }
}

void bubbleSort(int *dataset, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            //compare and swap
            if(dataset[j] > dataset[j + 1]){
                int temp = dataset[j];
                dataset[j] = dataset[j + 1];
                dataset[j + 1] = temp;
            }
        }
    }
}