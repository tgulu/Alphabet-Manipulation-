#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bundler.h"

void print_text_frequency (int *table) {

  int i = 0;
  char alphabet = 'a';

  printf ("c => frequency\n");
  printf ("---------------\n");

  for (i = 0; i < 26; i++) {
    printf ("%c => %d\n", alphabet++, table[i]);
  }
}
