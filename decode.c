#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <ctype.h>
#include <getopt.h>
#include "bundler.h"


int main ( int argc, char *argv[]){

    int opt;
    int i = 0;
    int n = 0;
    int s = 0;
    int S = 0;
    int t = 0;
    int x = 0;
    int z = 0;
    int counter = 0;
    int shift = 0;

    char string[200];
    FILE *fp;
    char *input_file = NULL;
    char *output_file = NULL;

    int *freq_table;
    double *chi_table;




    while ((opt = getopt (argc, argv, "nSstxO:F:")) != -1) {
        switch (opt) {
        case 'n':
        n = 1;
        break;
        case 's':
        s = 1;
        break;
        case 'S':
        S = 1;
        break;
        case 't':
        t = 1;
        break;
        case 'x':
        x = 1;
        break;
        case 'F':
        input_file = optarg;


        if (input_file == NULL) {
            printf ("Error with the input file\n");
            exit (-1);
        }
        break;
        case 'O':
        output_file = optarg;


        if (output_file == NULL) {
            printf ("Error with the output file\n");
            exit (-1);
        }
        break;
        case ':':
        printf("Please enter an option\n");
        exit (-1);
        break;
        case '?':
        printf ("Unknown option %c\n", optopt);
        exit (-1);
        break;
        }
    }


    if (input_file != NULL) {
        fp = fopen (input_file, "r");
    } else {
        fp = stdin;
        printf("Enter Text\n");
    }


    fgets (string, 200, fp);

    freq_table = frequency_table(string);

    chi_table = create_chi_table(string);

    while (string[z] != '\0') {
        counter++;
        z++;
    }
    fclose (fp);


    if (counter < 100) {
        printf ("File should be at least 100 characters\n");
        exit (-1);
    }



    if (S == 1) {
        shift = encode_shift(string);
        printf ("Orginal shift is %d\n\n", shift);
    }

    if (s == 1) {
        shift = encode_shift(string);
        shift = to_decode(shift);
        printf ("The decode shift is %d\n\n", shift);
    }


    fp = stdout;


    if (output_file == NULL && t == 1) {
        print_text_frequency(freq_table);
        printf ("\n");
    }

    if (output_file != NULL) {
        fp = fopen (output_file, "w+");
        if (t == 1) {
        print_text_frequency(freq_table);
        }
    }

    for (i = 0; i < counter; i++) {
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {

        fprintf(fp, "%c", encode(string[i], shift));

        } else {

        fprintf(fp, "%c", string[i]);

        }
    }

    if (output_file == NULL) {
        printf("\n");
    }

    if (x == 1) {
        print_chi_square(chi_table);
    }

    fclose (fp);

    return 0;


}
