//
//  main.cpp
//  Lesson_1
//
//  Created by Dewi Gould on 30/09/2017.
//  Copyright © 2017 Dewi Gould. All rights reserved.

// This file shows FORWARD DECLARATION, use of HEADER FILES, and FUNCTION TYPES.
//

#include <iostream>
#include "add.hpp"  // include header file created by us.

# define MY_FAVOURITE_NUMBER 2 // object-like macro with substitution text - not generally supposed to be used like this.

// int add(int x, int y);   // use forward declaration to using FUNCTION PROTOYPE
// this isn't used anymore as forward declaration included in header file.

#define PRINT_JOE // object-like macro without subsitution text.


void printA()    // void type means that function returns NOTHING
{
    std::cout << "Testing the void functionality" << std::endl;
}

int main()   // int teams means function returns INTEGER
{
    printA();
    // could not do std::cout << printA() as printA returns NOTHING, so this would print NOTHING
    std::cout << "The sum of 2 and 3; " << add(MY_FAVOURITE_NUMBER,3) << std::endl;
    
    // testing out preprocessing stuff
    #ifdef PRINT_JOE
    std::cout << "Joe - testing the object-like macro and preprocessing directives" << std::endl;
    #endif
    #ifdef PRINT_BOB
    std::cout << "Bob" << std::endl;
    #endif
    
    #ifndef PRINT_BOB
    std::cout << "Bob appears anyway - now using #ifndef " << std::endl;
    #endif
}


