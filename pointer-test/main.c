#include <stdio.h>

int main(int argc, char * argv[]) {
    int x = 3;
    int *y = &x;
    // y is a memory address of the memory location
    // where integer x is stored 
    // when we use & it gives us a value of type (address of an interger)

    printf("value of y is [%p]\n \
    value at y is [%d]\n", y,*y);

    return 0;
}