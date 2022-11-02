#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bundler.h"


int to_decode(int shift){
    
    if (shift > 26 || shift < 0){
        printf("Invalid Shift");
        exit(1);
    } else if (shift <= 26 && shift >= 0){

        shift = 26 - shift;

    }

    return shift;

}
