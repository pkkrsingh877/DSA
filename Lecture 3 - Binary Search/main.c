#include <stdio.h>

int binarySearch(int *dataset, int target, int size, int start, int end);

int main(){
    int dataset[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(dataset)/sizeof(dataset[0]);
    int target;

    printf("Target: ");
    scanf("%d", &target);

    int result = binarySearch(dataset, target, size, 0, size - 1);

    if(result >= 0){
        printf("Data was found at location %d.", result);
    }else{
        printf("Data not found!");
    }

    return 0;
}

int binarySearch(int *dataset, int target, int size, int start, int end){
    // end program once done iterating through array
    if(start > end || end < start){
        return -1;
    }
    // finding middle element of current array
    int mid = (start + end)/2;

    if(dataset[mid] == target){
        return mid;
    }else if(dataset[mid] > target){
        start = mid + 1;
        binarySearch(dataset, target, size, start, end);
    }else{
        end = mid - 1;
        binarySearch(dataset, target, size, start, end);
    }
}