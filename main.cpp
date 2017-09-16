//
//  main.cpp
//  HellowWorld
//
//  Created by Dewi Gould on 16/09/2017.
//  Copyright © 2017 Dewi Gould. All rights reserved.
//

#include <iostream>


void doPrint()    // 'void' return type means that nothing is returned by this function
{
    std::cout << "In doPrint()" << std::endl;
}

int getInfoFromUser()   // int return type means that integer is return by this function
{
    std::cout << "Please enter value";
    int a;
    std::cin >>a; // takes value entered in console by the user
    return a;
}

int main()   // 'main' function must always be in script and always is int return type.
{
    std::cout << "Starting main()" << std::endl;
    doPrint();   // just to demonstrate how function calls work.
    std::cout << "Ending main()" << std::endl;
    
    int X = getInfoFromUser();   // first call to function
    int Y = getInfoFromUser();   // second call to function
    std::cout << X << "+" << Y<< "=" << X+Y << std::endl;
    
    
    return 0;
}

