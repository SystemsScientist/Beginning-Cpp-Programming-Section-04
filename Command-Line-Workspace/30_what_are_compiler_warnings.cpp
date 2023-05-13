/*
 * Author: Matt Johnson
 * Subject: compiler warnings
 * Purpose: exploring compiler warnings
 * Date: 05/13/2023
 *
 * Notes:
 *
 * 	1. declare favorite_number variable as an int, 
 * 	   but do not initialize
 * 	2. compile file
 * 		- returns warnring: "favorite_number"
 * 		  is used uninitialized in this function
 * 	3. build ened with warnings (0 errors, 1 warnings)===
 * 	4. build and run project returns "0"
 */

#include <iostream>

int main(void) {

	int favorite_number;

	std::cout << favorite_number << std::endl;

	return 0;
}
