#include <stdio.h>

void print_reverse(int *arr, int size){
    arr = arr + size - 1;
    for(int i=0; i<size-1; i++){
        printf("%d ", *arr);
        arr--;
    }

    printf("%d", *arr);
     
}

int main(){
    int nums[] = {1, 2, 3, 4, 5};

    print_reverse(nums, 5);
    printf("\n");

    return 0;
}
