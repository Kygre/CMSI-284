/*
 ============================================================================
 Name        : PianoKeys.c
 Author      : Kwadwo Yeboah
 Version     :
 Copyright   : 
 Description : Prints all 88 Piano keys and their frequencies
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {



	const char* keys[] = { "A", "A#", "B", "C", "C#", "D", "D#", "E", "E#", "F", "F#", "G", "G#"};
	size_t length_keys = 12;
	size_t number_of_keys = 89;
	size_t index = 0;

	for(int j = 1; j < number_of_keys; j+=1){

		if(index >= length_keys ){
			index = 0;
		}

		float frequency_note = pow(2, ((float) j - 49.0)/ 12.0)  * 440.0;
		printf("%s-%u\t%.4f\n" , keys[index],j, frequency_note);

		index++;

	}
	return EXIT_SUCCESS;
}
