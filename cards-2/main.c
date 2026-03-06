#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    char card_name[3];
    int count = 0;

    bool is_playing = true;

    while (is_playing) {
        puts("Enter the card name: ");
        scanf("%2s", card_name);

        int val = 0;

        switch(card_name[0]) {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                is_playing = false;
                continue;
                
            default:
                val = atoi(card_name);
                if (val < 2 || val > 10) {
                    puts("Please enter a valid card!!\n");
                    return 1;
                }
        }

        if ((val > 2) && (val < 7)) {
            count++;
        } else if (val == 10) {
            count--;
        }

        printf("Current count: %d\n", count);
    }
}