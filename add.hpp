//
//  add.hpp
//  Lesson_1
//
//  Created by Dewi Gould on 30/09/2017.
//  Copyright © 2017 Dewi Gould. All rights reserved.
//

// this stuff at the top is HEADER GUARD

#ifndef add_hpp // these lines ensure that nothing is #included twice and therefore code wouldn't compile.
#define add_hpp

// stuff below the HEADER GUARD is the CONTENT - the stuff that is done

 // #pragma once is an alternative to the ifndef, define, endif structure.
#include <stdio.h>

int add(int x, int y);   //forward declaration inside header to be used in main

#endif /* add_hpp */
