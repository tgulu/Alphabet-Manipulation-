#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bundler.h"

int offset(char c){

    int offset_shift;  

    if(c >= 65 && c <= 90){

        offset_shift = c - 'A'; 

    }

    else if(c >= 97 && c <= 122){

        offset_shift = c - 'a';

    }
    
    return offset_shift;
    
}