#include <stdio.h>
#include <stdlib.h>

void main(int argc, char* argv[]){
    int array_length = atoi(argv[1]);
    char *characters = argv[2];
    //strcpy(characters, argv[2]);
    
    printf("%s\n", characters);
    int i, j;
    int temp;
    printf("Sorted array: \n");

    for(i = 0; i < array_length - 1; i++){
        for(j = 0; j < array_length - i - 1; j++){
            if(characters[j] > characters[j + 1]){
                temp = characters[j];
                characters[j] = characters[j + 1];
                characters[j + 1] = temp;
            }
        } 
    }
    printf("%s\n", characters);
}
