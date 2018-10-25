//
//  number.h
//  isPrime
//
//  Copyright © 2018 nnmjywg. All rights reserved.
//

#ifndef number_h
#define number_h

class number
{
public:
    number(int v);
    int getValue(void);
    int getFirstFactor(void);
    bool getPrime(void);
        
private:
    bool isPrime;
    int value;
    int firstFactor;
};

#endif /* number_h */
