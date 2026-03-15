#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char * argv[]) {
    char first_name[80];
    char last_name[80];
    // int age; 
    char age[3];


    puts("Please enter your first name, last name and age in different lines");
    fgets(first_name, 80, stdin);
    fgets(last_name, 80, stdin);
    // fgets(&age, 3, stdin); //this doesnt work
    fgets(age, 3, stdin);

    *strchr(first_name, '\n') = '\0';
    *strchr(last_name, '\n') = '\0';
    // *strchr(last_name, '\n') = '\0';

    puts("");

    printf("%s %s %i\n", first_name, last_name, atoi(age));
    return 0;
}