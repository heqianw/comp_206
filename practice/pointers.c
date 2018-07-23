#include <stdio.h>
#include <stdlib.h>

void main(int argc, char* argv[]){
    char string1[] = "hello";
    char string2[] = "World";
    //char *string3 = &string2;
    int i;
    for(i = 0; i < 5; i++){
        char *first = &string1[i];
        *first = string2[i];   
    }
    printf("%s\n",string1);
}
