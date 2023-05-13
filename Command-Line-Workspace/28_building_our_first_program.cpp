/*
 * Author: Matt Johnson
 * Subject: using build tools
 * Purpose:
 * Date: 05/13/2023
 *
 * Notes:
 *
 * 	1. a clean build removes the .o and .exe files
 * 	2. rebuild is a combination of clean and build
 */

#include <iostream>

int main(void) {

	int favorite_number;

	std::cout << "Enter your favorite number between 1 and 100: ";
	std::cin >> favorite_number;

	std::cout << "Amazing!! That's my favorite number too!" << std::endl;

	return 0;
}
