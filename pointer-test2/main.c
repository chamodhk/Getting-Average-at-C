#include <stdio.h>

int main(int argc, char * argv[]) {
    char my_string[4] = {'a','b','c', '\0'};
    char *mystring2 = "abc";
    printf("%s\n", my_string);
    //let's later learn why this doesnt work
    // *(mystring2 + 1)  = 'x';
    printf("%s\n", my_string);
    printf("%s\n", mystring2);



    puts(("pointers\n"));
    printf("%p\n", my_string);
    printf("%p\n", &my_string[1]);
    printf("%p\n", &my_string[2]);
    printf("%p\n", &my_string[3]);

    puts("\n");
    printf("%p\n", mystring2);
    printf("%c\n", *mystring2);
    // printf("%c\n", *(mystring2 + 4));

    int offset = 0;
    while (*(mystring2 + offset) != '\0'){
        printf("The current char is %c\n", *(mystring2 + offset));
        offset++;
    }



    return 0;
}