/*
 ============================================================================
 Name        : MaxString.c
 Author      : Kwadwo Yeboah
 Version     :
 Copyright   : Your copyright notice
 Description : Maximizer of Strings
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/**
 * Write a C function which takes in two "strings" (pointers to bytes in memory with a zero at the end),
 *  and returns a new string containing, in each position i, the maximum of the two characters at
 *  corresponding positions of the two input strings. If the two strings have different lengths, your
 *  result should have the length of the longer string, and all of the extra characters in the longer
 *  string will simply appear in the result at their original position.
 *
 */
int main(int argc, char** argv) {

	printf("%s-%s\n" , argv[1], argv[2]);

	maximize(argv[1] , argv[2]);
	return EXIT_SUCCESS;
}

char get_Char(size_t index, size_t length, char target_char, int i,
		char* string) {
	if (index < length) {
		target_char = first_string[i];
	} else {
		target_char = "\x0";
	}
	return target_char;
}

/**
 * Return a new string of the maximimized input strings
 */
void maximize(char* first_string, char* second_string){
	size_t first_length = strlen(first_string);
	size_t second_length = strlen(second_string);

	size_t first_index = 0, second_index = 0;

	for(int i = 0; i < first_length || i < second_length; i++){

		char max = first_string, first_char = "", second_char = "";

		first_char = get_Char(first_index, first_length, first_char, i,
				first_string);

		if(second_index < second_length){
					second_char = second_string[i];
				}
				else{
					second_char = "\x0";
				}


		if( first_char < second_char){
			max = second_string[i];
		}




	}


}
