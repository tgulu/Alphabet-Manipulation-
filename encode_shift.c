#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bundler.h"


int encode_shift(char *c){

   int i, j; 
    double ef[26] = EF; 
    int *freq_table; 

    freq_table = malloc(sizeof(int) * 26);
    freq_table = frequency_table(c);
    
    int shift; 
    int letter_counter = letter_count(c);
    double chi_min = 1000.0; 
    double chi_total; 
    
    int *chi_sq; 
    chi_sq = malloc(sizeof(double) * 26); 
        
    for(i = 0; i < 26; i++){

        chi_total = 0.0; 
        
        for(j = 0; j < 26; j++){
            
            chi_sq[i] = (((letter_counter * ef[offset('a' + j)]) - (freq_table[offset(encode(('a' + j), i))]))*((letter_counter * ef[offset('a' + j)]) - (freq_table[offset(encode(('a' + j), i))]))) / (letter_counter * letter_counter * ef[offset('a' + j)]);

            chi_total = chi_total + chi_sq[i]; 

        }
        
        if(chi_total < chi_min){

            chi_min = chi_total; 
            
            shift = i;

        }

        if(chi_min >= 0.5){

            shift = 0; 

        }
    }

    return shift; 
}
    

