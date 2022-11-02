#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bundler.h"


int *frequency_table(char *n){

    
    int i = 0;

    int *letter_counter;

    letter_counter = malloc(sizeof(int) * 27);

    for(i = 0; i < 27; i++){
        letter_counter[i] = 0;
    }

    i = 0;

    while (n[i] != '\0'){

        if (n[i] == 65 || n[i] == 97){

            letter_counter[0]++;

        }

        if (n[i] == 66 || n[i] == 98){

            letter_counter[1]++;

        }

        if (n[i] == 67 || n[i] == 99){

            letter_counter[2]++;

        }

        if (n[i] == 68 || n[i] == 100){

            letter_counter[3]++;

        }

        if (n[i] == 69 || n[i] == 101){

            letter_counter[4]++;

        }

        if (n[i] == 70 || n[i] == 102){

            letter_counter[5]++;

        }

        if (n[i] == 71 || n[i] == 103){

            letter_counter[6]++;

        }

        if (n[i] == 72 || n[i] == 104){

            letter_counter[7]++;

        }

        if (n[i] == 73 || n[i] == 105){

            letter_counter[8]++;

        }

        if (n[i] == 74 || n[i] == 106){

            letter_counter[9]++;

        }

        if (n[i] == 75 || n[i] == 107){

            letter_counter[10]++;

        }

        if (n[i] == 76 || n[i] == 108){

            letter_counter[11]++;

        }

        if (n[i] == 77 || n[i] == 109){

            letter_counter[12]++;

        }

        if (n[i] == 78 || n[i] == 110){

            letter_counter[13]++;

        }

        if (n[i] == 79 || n[i] == 111){

            letter_counter[14]++;

        }

        if (n[i] == 80 || n[i] == 112){

            letter_counter[15]++;

        }

        if (n[i] == 81 || n[i] == 113){

            letter_counter[16]++;

        }

        if (n[i] == 82 || n[i] == 114){

            letter_counter[17]++;

        }

        if (n[i] == 83 || n[i] == 115){

            letter_counter[18]++;

        }

        if (n[i] == 84 || n[i] == 116){

            letter_counter[19]++;

        }

        if (n[i] == 85 || n[i] == 117){

            letter_counter[20]++;

        }

        if (n[i] == 86 || n[i] == 118){

            letter_counter[21]++;

        }

        if (n[i] == 87 || n[i] == 119){

            letter_counter[22]++;

        }

        if (n[i] == 88 || n[i] == 120){

            letter_counter[23]++;

        }

        if (n[i] == 89 || n[i] == 121){

            letter_counter[24]++;

        }

        if (n[i] == 90 || n[i] == 122){

            letter_counter[25]++;

        }

        letter_counter[26]++; /* Character Count */
        i++;
    }


    return letter_counter;

}