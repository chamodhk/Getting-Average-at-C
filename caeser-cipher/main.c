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

    char result = input + shift;

    printf("%c\n", result);
    return 0;
}