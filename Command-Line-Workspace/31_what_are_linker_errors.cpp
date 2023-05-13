/*
 * Author: Matt Johnson
 * Subject: linker errors
 * Purpose: exploring linker errors
 * Date: 05/13/2023
 *
 * Notes:
 *
 * 	1. remove "//"
 *
 * 	2. compiles with no warnrings or errors
 * 	3. builds with "undefined reference to x"
 * 		- "build ended with errors (1 errors, 0 warnings)==="
 * 		- main.0 and iostream cannot link to create main.exe
 * 		  because 'x' cannot be found
 * 	4. build and run project returns "No such file or directory"
 */

#include <iostream>

// extern int x;

int main(void) {

	std::cout << "This is an awesome program!" << std::endl;

	// std::cout << x;
	
	return 0;
}
