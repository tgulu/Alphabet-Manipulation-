#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bundler.h"

int letter_count(char *n){

    int i = 0;
    int char_counter = 0;

    while (n[i] != '\0'){

        if (n[i] >= 65 && n[i] <= 90){

            char_counter++;

        }

        if (n[i] >= 97 && n[i] <= 122){

            char_counter++;
            
        }

        i++;
    }

    return char_counter;
    

}
