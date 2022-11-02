Project: Question 1

Description: Determining the frequency in the text of each letters in a string provided and
            printing said frequency in a frequency table.


Functions: 

- freq_table.c: Create a frequency table, takes in a string and stores each char according to 
                letter count

- letter_count.c: Takes in a string and counts each character. If it is a letter from a to z then it 
                increates the letter count by 1.

Compile: make freq_tab | make clean | ./freq_tab with or without flags

Project: Question 2

Description: Determining the frequency in the text of each letters in a string provided and
            printing said frequency in a frequency table. While also figuring out the strings shift
            that is encoded using a chi square formula. Whith the shift value, then text  will be decode 
            and printed according to flags

Functions: 

- to_decode.c: Returns value used to decode string while taking in the value of the encoded shift provided by
                the chi square formula

- encode_shift.c:  provided the minimum chi square value. The index at that value is the shift that was used to
                    encode the string

- freq_table.c: Create a frequency table, takes in a string and stores each char according to 
                letter count

- letter_count.c: Takes in a string and counts each character. If it is a letter from a to z then it 
                increates the letter count by 1.

- create_chi_table.c: Takes in a string and computes a chi Square table for that said string  

- offset.c: Returns offset shift 

- encode.c: encodes string with provided shift 

- print_chi_square.c: Prints out chi square table

- print_text_frequency.c: Prints out text frequency table

Compile: make decode | make clean | ./decode with or without flags