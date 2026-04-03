#include <stdio.h>

int sum__range(int *start, int *end){
    int sum = 0;
    int time = end - start;
    for(int i = 0; i<time; i++){
        sum = sum + *start;
        start++;
    }

    return sum;
}

int main(){
    int data[] = {10, 20, 30, 40, 50, 60, 70};

    int result = sum__range(&data[1], &data[4]);

    printf("%d\n", result);
    return 0;
}
