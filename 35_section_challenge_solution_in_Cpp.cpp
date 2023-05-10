/*
 * Author: Matt Johnson
 * Purpose: execute C++ in the command-line
 * Subject: C++ in the command-line
 * Date: 05/10/2023
 *
 * Notes:
 *
 * 	This program can be executed directly in the
 * 	command-line.
 *
 * 	To compile, build, and execute this program, 
 * 	use the following command-line scripts:
 *
 * 		$ c++ name_of_file.cpp -o cpp_main
 * 		$ ./cpp_main
 */


#include <iostream>

int main(void) {

	int favorite_number;

	std::cout << "Enter your favorite number between 1 and 100: ";
	std::cin >> favorite_number;

	std::cout << "Amazing!! That's my favorite number, too!" << std::endl;
	std::cout << "No, really!!! " << favorite_number << " is my favorite number!" << std::endl;

	return 0;
}
