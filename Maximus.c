/*
 ============================================================================
 Name        : Maximus.c
 Author      : Kwadwo Yeboah
 Version     :
 Copyright   : Your copyright notice
 Description : Returns a newly allocated string which is the maximum of two inputtted strings
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void test_maximum( char* first, char* second,  char* answer);
char* maximum( const char*, const char*);
char try_get_value( const char*, size_t, size_t);

int main(int argc, char** argv) {

	char* ans = "def";
	char* second = "abc";
	char* first = "def";
	test_maximum(first, second, ans);


	ans = "xyzdef";
	second = "xyz";
	first = "abcdef";
	test_maximum(first, second, ans);


	ans = "xyzdef";
	second = "xyzdef";
	first = "abc";
	test_maximum(first, second, ans);


	free(ans);
	printf("Tests Sucess");
	return EXIT_SUCCESS;
}

void test_maximum(  char* first,  char* second,  char* answer){
	char* ans = malloc( strlen(answer));
	ans = maximum( first , second);
	//printf("%s" ,ans);
	assert(strncmp(ans, answer, strlen(answer)) == 0);
	free(ans);
}
char* maximum( const char* first_s , const char* second_s){
	size_t max_length = 0, first_length = strlen(first_s) , second_length = strlen(second_s);

	max_length = first_length > second_length ? first_length : second_length;
	char* maxima = malloc(max_length);

	for(int i = 0 ; i < max_length; i++){
		char max = try_get_value(first_s, first_length, i);
		char second = try_get_value(second_s, second_length, i);

		if( max < second){
			max = second;
		}

		maxima[i] = max;

	}

	maxima[max_length] = '\0';
	return maxima;

}

char try_get_value( const char* string, size_t length, size_t index){

	if(index < length){
		return string[index];
	}
	else{
		return '\0';
	}

}








