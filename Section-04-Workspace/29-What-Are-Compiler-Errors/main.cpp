/*
 *  Author: Matt Johnson
 *  Purpose: exploring compiler errors
 *  Subject: compiler errors
 *  Date: 05/09/2023 
 * 
 *  Notes:
 * 
 *      1. remove right-hand quote to see syntax error
 *      2. add an additional "l" to endl to get syntax error
 * 
 *      3. remove semi-colon to see syntax error
 *      4. remove "0" from return statement to get syntax error
 * 
 *      5. replace "Matt" with "0" in return statement to get semantic error
 *      6. divide "Hello, World!" by 125 to get semantic error
 */

#include <iostream>

int main(void) {
    
    std::cout << "Hello, World!" << std::endl; 
    
    return 0;
}
