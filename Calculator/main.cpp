//
//  main.cpp
//  Calculator
//
// Write Method to perform basic mathematical functions for user
//  Created by Dewi Gould on 30/09/2017.
//  Copyright © 2017 Dewi Gould. All rights reserved.
//

#include <iostream>

int getFirstValue()
{
    std::cout << "Please enter an integer value; " << std::endl;
    int x;
    std::cin >> x;
    return x;
}

int getOperator()
{
    std::cout << "Please enter which operator you want (1 = +, 2 = -, 3 = *, 4 = /): " << std::endl;
    int x;
    std::cin >> x;
    return x;
    
    // currently ignoring any cases of incorrect input format or whatever...
}

int getSecondValue()
{
    std::cout << "Please enter a second integer; " << std::endl;
    int x;
    std::cin >> x;
    return x;
}

int calculateResult(int x, int op, int y)
{
    if (op == 1)
        return x + y;
    if (op == 2)
        return x - y;
    if (op == 3)
        return x * y;
    if (op == 4)
        return x/y;
    
    // if user enters invalid operator we'll just do addition
    return x + y;
}

void printResult(int result)
{
    
    std::cout << "Your Result Is: " << result << std::endl;
}

int main()
{
    int input1 = getFirstValue();
    int op = getOperator();
    int input2 = getSecondValue();
    printResult(calculateResult(input1,op,input2));
    return 0;
}






