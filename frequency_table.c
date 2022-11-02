#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bundler.h"


int main ( int argc, char *argv[]){
    
    /* Disclamer: Character Count Does Include New Line Character */

    FILE *original_file, *copy_file;
    int i = 0;
    int letter_start = 65;
    char string[100];
    int *letter_counter;

    if(argc > 1){

        if(argc == 2){

            if(strcmp(argv[1], "-F") != 0 && argv[1][0] == '-' && argv[1][1] == 'F'){
                
                char *original = malloc((strlen(argv[1]) + 1) * sizeof(char));
                strncpy(original, argv[1] + 2, strlen(argv[1]) - 2);
                original_file = fopen(original, "r");
                copy_file = NULL;

                fgets(string, 100, original_file);

                letter_counter = frequency_table(string);

                printf("\nThe Number of Letters in the Text: %d\n\n", letter_count(string));
                printf("The total number of characters in the text: %d\n\n", letter_counter[26]);

                printf("-----The Total Number of Characters in the Text-----\n");
                printf("------------------Frequency Table-------------------\n");
                printf("\nCharacters:\t\tCount:\n");

                

                for( i = 0; i < 26; i++){

                    printf("%c\t\t%d\n", letter_start, letter_counter[i]);

                    letter_start++;
                }

                fclose(original_file);
                fclose(copy_file);

            } else if(strcmp(argv[1], "-O") != 0 && argv[1][0] == '-' && argv[1][1] == 'O'){
                
                char *copy = malloc((strlen(argv[1]) + 1) * sizeof(char));
                strncpy(copy, argv[1] + 2, strlen(argv[1]) - 2);
                original_file = NULL;
                copy_file = fopen(copy, "w+");

                printf("Enter Text: \n");

                fgets(string, 100, stdin);

                letter_counter = frequency_table(string);

                fprintf(copy_file,"\nThe Number of Letters in the Text: %d\n\n", letter_count(string));
                fprintf(copy_file,"The total number of characters in the text: %d\n\n", letter_counter[26]);

                fprintf(copy_file,"-----The Total Number of Characters in the Text-----\n");
                fprintf(copy_file,"------------------Frequency Table-------------------\n");
                fprintf(copy_file,"\nCharacters:\t\tCount:\n");

                for( i = 0; i < 26; i++){

                    fprintf(copy_file,"%c\t\t%d\n", letter_start, letter_counter[i]);

                    letter_start++;
                }

                fclose(original_file);
                fclose(copy_file);

            }

        } else if (argc == 3){

            if(strcmp(argv[1], "-F") == 0){

                original_file = fopen(argv[2], "r");
                copy_file = NULL;

                fgets(string, 100, original_file);

                letter_counter = frequency_table(string);

                printf("\nThe Number of Letters in the Text: %d\n\n", letter_count(string));
                printf("The total number of characters in the text: %d\n\n", letter_counter[26]);

                printf("-----The Total Number of Characters in the Text-----\n");
                printf("------------------Frequency Table-------------------\n");
                printf("\nCharacters:\t\tCount:\n");

                for( i = 0; i < 26; i++){

                    printf("%c\t\t%d\n", letter_start, letter_counter[i]);

                    letter_start++;
                }

            } else if(strcmp(argv[1], "-O") == 0){

                copy_file = fopen(argv[2], "w+");
                original_file = NULL;

                printf("Enter Text: ");

                fgets(string, 100, stdin);

                letter_counter = frequency_table(string);

                fprintf(copy_file,"\nThe Number of Letters in the Text: %d\n\n", letter_count(string));
                fprintf(copy_file,"The total number of characters in the text: %d\n\n", letter_counter[26]);

                fprintf(copy_file,"-----The Total Number of Characters in the Text-----\n");
                fprintf(copy_file,"------------------Frequency Table-------------------\n");
                fprintf(copy_file,"\nCharacters:\t\tCount:\n");

                for( i = 0; i < 26; i++){

                    fprintf(copy_file,"%c\t\t%d\n", letter_start, letter_counter[i]);

                    letter_start++;
                }

            } else if(strcmp(argv[1], "-F") != 0 && argv[1][0] == '-' && argv[1][1] == 'F'){
                
                char *original = malloc((strlen(argv[1]) + 1) * sizeof(char));
                char *copy = malloc((strlen(argv[2]) + 1) * sizeof(char));
                strncpy(original, argv[1] + 2, strlen(argv[1]) - 2);
                strncpy(copy, argv[2] + 2, strlen(argv[2]) - 2);
                original_file = fopen(original, "r");;
                copy_file = fopen(copy, "w+");

                fgets(string, 100, original_file);

                letter_counter = frequency_table(string);

                fprintf(copy_file,"\nThe Number of Letters in the Text: %d\n\n", letter_count(string));
                fprintf(copy_file,"The total number of characters in the text: %d\n\n", letter_counter[26]);

                fprintf(copy_file,"-----The Total Number of Characters in the Text-----\n");
                fprintf(copy_file,"------------------Frequency Table-------------------\n");
                fprintf(copy_file,"\nCharacters:\t\tCount:\n");

                for( i = 0; i < 26; i++){

                    fprintf(copy_file,"%c\t\t%d\n", letter_start, letter_counter[i]);

                    letter_start++;
                }


            }

        } else if (argc == 4){

            if(strcmp(argv[1], "-F") == 0){
    
                char *original = malloc((strlen(argv[3]) + 1) * sizeof(char));
                strncpy(original, argv[3] + 2, strlen(argv[3]) - 2);
                original_file = fopen(argv[2], "r");
                copy_file = fopen(original, "w+");

                fgets(string, 100, original_file);

                letter_counter = frequency_table(string);

                fprintf(copy_file,"\nThe Number of Letters in the Text: %d\n\n", letter_count(string));
                fprintf(copy_file,"The total number of characters in the text: %d\n\n", letter_counter[26]);

                fprintf(copy_file,"-----The Total Number of Characters in the Text-----\n");
                fprintf(copy_file,"------------------Frequency Table-------------------\n");
                fprintf(copy_file,"\nCharacters:\t\tCount:\n");

                for( i = 0; i < 26; i++){

                    fprintf(copy_file,"%c\t\t%d\n", letter_start, letter_counter[i]);

                    letter_start++;
                }
    
            }else if(strcmp(argv[2], "-O") == 0){
    
                char *original = malloc((strlen(argv[1]) + 1) * sizeof(char));
                strncpy(original, argv[1] + 2, strlen(argv[1]) - 2);
                original_file = fopen(original, "r");
                copy_file = fopen(argv[3], "w+");

                fgets(string, 100, original_file);

                letter_counter = frequency_table(string);

                fprintf(copy_file,"\nThe Number of Letters in the Text: %d\n\n", letter_count(string));
                fprintf(copy_file,"The total number of characters in the text: %d\n\n", letter_counter[26]);

                fprintf(copy_file,"-----The Total Number of Characters in the Text-----\n");
                fprintf(copy_file,"------------------Frequency Table-------------------\n");
                fprintf(copy_file,"\nCharacters:\t\tCount:\n");

                for( i = 0; i < 26; i++){

                    fprintf(copy_file,"%c\t\t%d\n", letter_start, letter_counter[i]);

                    letter_start++;
                }
    
            }

        } else if (argc == 5){

            original_file = fopen(argv[2], "r");
            copy_file = fopen(argv[4], "w+");

            fgets(string, 100, original_file);

            letter_counter = frequency_table(string);

            fprintf(copy_file,"The Number of Letters in the Text: %d\n\n", letter_count(string));
            fprintf(copy_file,"The total number of characters in the text: %d\n\n", letter_counter[26]);

            fprintf(copy_file,"-----The Total Number of Characters in the Text-----\n");
            fprintf(copy_file,"------------------Frequency Table-------------------\n");
            fprintf(copy_file,"\nCharacters:\t\tCount:\n");

            for( i = 0; i < 26; i++){

                fprintf(copy_file,"%c\t\t%d\n", letter_start, letter_counter[i]);

                letter_start++;
            }
    
        }
        
    }else{

        printf("Enter Text: \n");

        fgets(string, 100, stdin);

        letter_counter = frequency_table(string);

        printf("\nThe Number of Letters in the Text: %d\n\n", letter_count(string));
        printf("The total number of characters in the text: %d\n\n", letter_counter[26]);

        printf("-----The Total Number of Characters in the Text-----\n");
        printf("------------------Frequency Table-------------------\n");
        printf("\nCharacters:\t\tCount:\n");

        

        for( i = 0; i < 26; i++){

            printf("%c\t\t%d\n", letter_start, letter_counter[i]);

            letter_start++;
        }
        
    

    }

    return 0;
}