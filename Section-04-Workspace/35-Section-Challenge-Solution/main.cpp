/*
 *  Author: Matt Johnson
 *  Purpose: designing section challenge program
 *  Subject: basic C++ program
 *  Date: 05/10/2023 
 * 
 *  Notes:
 * 
*       Create a C++ program that asks the user for their favorite
*       number between 1 and 100 then read this number from the
*       console.
* 
*       Suppose the user enters 24.
* 
*       Then display the following to the console:
* 
*               Amazing!! That's my favorite number, too!
*               No, really!!! 24 is my favorite number!
* 
*       Below are two sample runs of the program:
*       -------------------------------------------------------------------------------------
* 
*       Enter your favorite number between 1 and 100: 24
*       Amazing!! That's my favorite number, too!
*       No, really!!! 24 is my favorite number!
*     
*       Enter your favorite number between 1 and 100: 75
*       Amazing!! That's my favorite number, too!
         No, really!!! 24 is my favorite number!
 */

#include <iostream>

int main(void) {
    
    int favorite_number = 0;
    
    std::cout <<"Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    
    std::cout << "Amazing!! That's my favorite number, too!" << std::endl;
    std::cout << "No, really!!! " << favorite_number << " is my favorite number!" << std::endl;
    
    return 0;
}
