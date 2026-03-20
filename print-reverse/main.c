#include <stddef.h>
#include <stdio.h>
#include <string.h>


void print_reverse(char * c){
    if (strchr(c,'\n')){
        *(strchr(c,'\n')) = '\0';
    };
    
    size_t length = strlen(c);
    for (size_t i = 0; i < length; i++){
        printf("%c", *(c + length -1 - i));
    }

    puts("");
    //we can do this easier with this method
    char * last_char = c + length - 1; //because the null char is excluded

    while (last_char >= c) {
        putc(*(last_char--), stdout);
    }
    puts("");
}


int main(int argc, char* argv[]) {
    // char string[80];
    // fgets(string, 79, stdin);

    if (argc == 2){
        print_reverse(argv[1]);
    } else {
        printf("Usage: ./a.out [string to be reversed]\n");
        return 1;
    }
    return 0;
}


