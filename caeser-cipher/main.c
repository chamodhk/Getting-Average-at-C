/*
    ask for a character
    shift it
    print the result

*/

#include "stdio.h"

int main() {
    int shift = 2;
    char message[] = "please input a letter from a to z: \n";
    printf("%s", message);

    char input;
    scanf("%c", &input);
    
    if ( input < 'a'|| input >= 'z') {
        printf("please input a character between a and z (lower case)\n");
        return 1;

    }
    char result = input + shift;

    printf("%c\n", result);
    return 0;
}