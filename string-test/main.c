#include <stdio.h>



int main() {
    char s[] = "Shatner";
    //index is a memory offset so index starts from 0
    printf("%s\n", s);
    printf("[%c]\n", s[0]);
    printf("[%c]\n", s[1]);
    printf("[%c]\n", s[6]);
    printf("[%c]\n", s[7]);

    s[4] = '\0';

    printf("%s\n", s);
    printf("%c\n", s[5]);
    // C doesnt know how long the string is

    return 0;
    
}