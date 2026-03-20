#include <stdio.h>
#include <string.h>

int main(int argc, char * argv []) {
    char tracks[][80] = {
        "I left my heart in Harvard Med School",
        "Newark, Newark - a wonderful town",
        "Dancing with a Dork",
        "From here to maternity",
        "The gitl from Iwo Jima",
    };

    puts("Enter the song name");
    char buffer[81];
    if (fgets(buffer, 80, stdin) == NULL) {
        printf ("Something bad happened!\n");
        return 1;
    }

    *strchr(buffer, '\n') = '\0';  //without this it doesnt work

    //the search is case sensitive.
    for (int i = 0; i < 5; i++) {
        char *curr_track = tracks[i];
        char *occurrence = strcasestr(curr_track,buffer);
        if (occurrence != NULL) {
            printf("%s\n", curr_track );
        }
    }
   
    return 0;
}