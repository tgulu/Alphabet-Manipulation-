#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bundler.h"


double *create_chi_table(char *string) {

  double *chi_square_table;

  double ef[26] = EF;

  chi_square_table = malloc(sizeof(double) * 26);

  int letter_counter = letter_count(string);



  int *freq_table;

  freq_table = malloc(sizeof(int) * 26);

  freq_table = frequency_table(string);

  int i = 0;
  int j = 0;

  for(i = 0; i < 26; i++){

    for(j = 0; j < 26; j++){

      chi_square_table[i] = (((letter_counter * ef[offset('a' + j)]) - (freq_table[offset(encode(('a' + j), i))]))*((letter_counter * ef[offset('a' + j)]) - (freq_table[offset(encode(('a' + j), i))]))) / (letter_counter * letter_counter * ef[offset('a' + j)]);

    }

  }

  return chi_square_table;
}
