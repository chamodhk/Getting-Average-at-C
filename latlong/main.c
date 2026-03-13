#include <stdio.h>


void go_south_east(int * lat, int * lon) {
    *lat = *lat - 1;
    *lon = *lon + 1;
}


int main(int argc, char * argv[]) {
    int lattitude = 32;
    int longitude = -64;

    go_south_east(&lattitude, &longitude);
    printf("Avast!, the ship is now at [%d, %d]\n", lattitude,longitude);
    return 0;
}