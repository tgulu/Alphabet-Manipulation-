#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bundler.h"


void print_chi_square (double *chiSquare) {

  int i = 0;
  printf("shift => chi_square (shift)\n");
  printf("---------------------------\n");

  for (i = 0; i < 26; i++) {
    printf("%d => %lf\n", i, chiSquare[i]);
  }

}