/*
 * Author: Matt Johnson
 * Subject: First program
 * Purpose: 
 * Date: 05/13/2023
 */

#include <iostream>

int main(void) {

	int favorite_number;

	std::cout << "Enter your favorite number between 1 and 100: ";
	std::cin << favorite_number;

	std::cout << "Amazing! That's my favorite number, too!" << std::endl; // endl; flushes out the buffers
	
	return 0;
}
