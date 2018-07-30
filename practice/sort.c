#include <stdio.h>
#include <stdlib.h>

void main(int argc, char* argv[]){
    int array_length = atoi(argv[1]);
    int numbers[array_length];
    
    int i, j;
    for(i = 0; i < array_length; i++){
        numbers[i] = atoi(argv[i + 2]);
    }
    
    for (i = 0; i < array_length; i++ ) {
        printf("Element[%d] = %d\n", i, numbers[i] );
    }
    int temp;
    printf("Sorted array: \n");

    for(i = 0; i < array_length - 1; i++){
        for(j = 0; j < array_length - i - 1; j++){
            if(numbers[j] > numbers[j + 1]){
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        } 
    }
    for (i = 0; i < array_length; i++ ) {
        printf("Element[%d] = %d\n", i, numbers[i] );
    }
}
