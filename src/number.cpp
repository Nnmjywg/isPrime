//
//  number.cpp
//  isPrime
//
//  Copyright © 2018 nnmjywg. All rights reserved.
//

#include <iostream>
#include "number.h"

number::number(int v)
{
    value = v;
    firstFactor = 0;
    isPrime = false;
}

int number::getValue(void)
{
    return value;
}

int number::getFirstFactor(void)
{
    return firstFactor;
}

bool number::getPrime(void)
{
    bool tempPrime = true;
    bool tempPrimeDetermined = false;
    if(value < 3)
    {
        if(value == 1)
        {
            return false;
        }
    }
    for(int i = 2; i < value; i++)
    {
        if(value % i == 0)
        {
            firstFactor = i;
            isPrime = false;
            tempPrime = false;
            tempPrimeDetermined = true;
        }
        
        else if((value % i != 0) && (i == (value - 1)) && tempPrimeDetermined == false)
        {
            isPrime = true;
            tempPrime = true;
            tempPrimeDetermined = true;
        }
    }
    return tempPrime;
}

// So, how does this work?
// A prime number will not be able to produce
// a whole number upon division with any number
// between 1 and itself. So, you can check quite
// easily based on the value of the remainder
// division with a number. (x % y == 0) => x is
// divisible by y.
// This extremely inefficient algorithm will divide
// the number to test by every whole number until
// the number itself is reached. In other words:
// the number x will be divided by the whole
// number y until y is as big as x. If in that
// time no number y is found that can divide x
// and produce a whole number, then x must be prime.
