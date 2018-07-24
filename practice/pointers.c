#include <stdio.h>
#include <stdlib.h>

// void main(int argc, char* argv[]){
//     char string1[] = "hello";
//     char string2[] = "World";
//     //char *string3 = &string2;
//     int i;
//     for(i = 0; i < 5; i++){
//         char *first = &string1[i];
//         *first = string2[i];   
//     }
//     printf("%s\n",string1);
// }

void main(int argc, char* argv[]){
    char string[] = "COMP 206 is almost my favorite course.";
    int i = 0, j =0;
    int spaceCount = 0;
    int counter = 0;
    //char *newString;
    while(string[i] != '\0'){
        if(string[i] == ' '){
            spaceCount++;
        }
        if(spaceCount == 3){
            counter++;
        }
        else{
            string[j] = string[i];
            j++;
        }
        i++;
    }
    string[i - counter] = '\0';
    printf("%d\n", j);
    printf("%s\n", string);
}