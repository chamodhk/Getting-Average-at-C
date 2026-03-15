#include <stdio.h>

int main(int argc, char * argv[]) {
    char first_name[80];
    char last_name[80];
    int age;
    puts("Enter the first and last names along with the age");
    scanf("%79s %79s %i", first_name, last_name, &age);
    printf("%s %s %d\n", first_name, last_name, age);
    return 0;
}