/*
 *  Author: Matt Johnson
 *  Purpose:
 *  Subject: using build tools
 *  Date: 05/09/2023 
 * 
 *  Notes:
 * 
 *      1. a clean build removes the .o and .exe files
 *      2. rebuild is a combination of clean and build
 */

#include <iostream>

int main() {
    
    int favorite_number;
    
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    
    std::cout << "Amazing!!! That's my favorite number too!\n" << std::endl;
    
    return 0;
}
