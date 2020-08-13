//
//  InputFloatException.h
//  Exception
//
//  Created by Billy Kim on 12/14/17.
//  Copyright © 2017 Billy Kim. All rights reserved.
//

#ifndef InputFloatException_h
#define InputFloatException_h

#include <stdexcept>

class InputFloatException : public std::runtime_error
{
public:
    InputFloatException()
    : std::runtime_error("Attempted to input a non-floating-point value") {}
    
};

#endif /* InputFloatException_h */
