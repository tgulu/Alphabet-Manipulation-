#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bundler.h"


char encode (char c, int shift){

if ((c >= 65) && (c <= 90)) 
    {
        c = c + shift; 
        if (c > 90) 
        {
            c = c - 26;
        }
    }

    else if ((c >= 97) && (c <= 122)) 
    {
        if ((c + shift) > 122) 
        {
            c = c - 26 + shift;
        } 

        else 
        {
            c = c + shift; 
        }
    }

    return c;
 
}