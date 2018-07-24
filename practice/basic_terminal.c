#include<stdio.h>

int main(){
    char string[100];

    printf("Enter your command: ");
    while(fgets(string, 100, stdin)){
        printf("User's input was: %s", string);
        printf("Enter your command: ");
    }
}