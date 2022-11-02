freq_tab: frequency_table.o freq_table.o letter_count.o
	gcc -ansi -o freq_tab frequency_table.o freq_table.o letter_count.o

frequency_table.o: frequency_table.c
	gcc -ansi -c -Wall frequency_table.c

freq_table.o: freq_table.c
	gcc -ansi -c -Wall freq_table.c

letter_count.o: letter_count.c
	gcc -ansi -c -Wall letter_count.c

decode: decode.o to_decode.o encode_shift.o letter_count.o freq_table.o create_chi_table.o offset.o encode.o print_chi_square.o print_text_frequency.o
	gcc -ansi -o decode decode.o to_decode.o encode_shift.o letter_count.o freq_table.o create_chi_table.o encode.o offset.o print_chi_square.o print_text_frequency.o

to_decode.o: to_decode.c
	gcc -ansi -c -Wall to_decode.c

print_text_frequency.o: print_text_frequency.c
	gcc -ansi -c -Wall print_text_frequency.c

print_chi_square.o: print_chi_square.c
	gcc -ansi -c -Wall print_chi_square.c

encode_shift.o: encode_shift.c
	gcc -ansi -c -Wall encode_shift.c

encode.o: encode.c
	gcc -ansi -c -Wall encode.c

decode.o: decode.c
	gcc -ansi -c -Wall decode.c

offset.o: offset.c
	gcc -ansi -c -Wall offset.c

create_chi_table.o: create_chi_table.c
	gcc -ansi -c -Wall create_chi_table.c

clean:
	rm freq_table.o
	rm letter_count.o 
	rm to_decode.o 
	rm encode_shift.o 
	rm letter_count.o 
	rm freq_table.o 
	rm create_chi_table.o 
	rm offset.o 
	rm encode.o
	rm freq_tab
	rm frequency_table.o
	rm decode
	rm decode.o