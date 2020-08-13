//
//  InputFloatException2.h
//  Exception
//
//  Created by Billy Kim on 12/15/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

#ifndef InputFloatException2_h
#define InputFloatException2_h

#include <stdexcept>

class InputFloatException2 : public std::runtime_error
{
public:
    InputFloatException2()
    : std::runtime_error("Second attempt to input a non-floating-point value. Program will end.") {}
    
};

#endif /* InputFloatException2_h */
