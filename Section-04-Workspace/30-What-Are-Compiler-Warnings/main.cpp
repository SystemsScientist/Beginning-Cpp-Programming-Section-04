/*
 *  Author: Matt Johnson
 *  Purpose: exploring compiler warnings
 *  Subject: compiler warnings
 *  Date: 05/09/2023 
 * 
 *  Notes:
 * 
 *      1. declare favorite_number variable as an int, but do not initialize
 *      2. compile file
 *              - returns warning: "favorite_number" is used uninitialized in this function
 * 
 *      3. build ended with warnings (0 errors, 1 warnings)===
 *      4. build and run project returns "0"
 */

#include <iostream>

int main(void) {
    
    int favorite_number;
    
    std::cout << favorite_number << std::endl;
    
    return 0;
}
