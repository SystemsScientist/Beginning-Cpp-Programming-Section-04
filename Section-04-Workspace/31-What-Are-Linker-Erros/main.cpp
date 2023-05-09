/*
 *  Author: Matt Johnson
 *  Purpose: exploring linker errors
 *  Subject: linker errors
 *  Date: 05/09/2023 
 * 
 *  Notes:
 * 
 *      1. compiles with no warnings or errors
 *      2. builds with "undefined reference to x"
 *              - "build ended with errors (1 errors, 0 warnings)==="
 *              - main.o and iostream cannot link to create main.exe
 *                 because 'x' cannot be found
 *      3. build and run project returns "No such file or directory"
 */

#include <iostream>

extern int x;

int main(void) {
    
    std::cout << "Hello, World!" << std::endl;
    
    std::cout << x;
    
    return 0;
}
