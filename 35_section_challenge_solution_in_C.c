/*
 * Author: Matt Johnson
 * Purpose: convert section challenge program from C++ to C
 * Subject: language translation
 * Date: 05/10/2023
 *
 * Notes:
 *
 * 	This program translates the section challenge solution
 * 	from C++ to the C programming language
 *
 * 	To compile the file, use the following command-line
 * 	scripts:
 *
 * 		$ gcc name_of_file.c -o main
 * 		$ ./main
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int favorite_number = 0;

	printf("Enter your favorite number between 1 and 100: ");
	scanf("%d", &favorite_number);

	printf("Amazing!! That's my favorite number, too!\n");
	printf("No, really!!! %d is my favorite number!\n", favorite_number);

	return 0;
}
