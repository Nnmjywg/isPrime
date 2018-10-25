//
//  main.cpp
//  isPrime
//
//  Copyright © 2018 nnmjywg. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include "number.h"

int main(int argc, char * argv[]) {
    char arg = '\0';
    int workingNumber;
    if(argc <= 1)
    {
        std::cout << ">>>>> Please provide a number with [-n (number)]." << std::endl;
        return 1;
    }
    //std::cout << argc << std::endl;
    while((arg = getopt(argc, argv, "n:")) != -1)
    {
        switch(arg)
        {
            case 'n':
                //std::cout << "working number determined" << std::endl;
                char *pEnd;
                workingNumber = (int)strtol(optarg, &pEnd, 10);
                break;
                
            default:
                return 0;
                break;
        }
    }
    if(workingNumber == NULL || workingNumber < 0)
    {
        std::cout << ">>>> Enter an integer greater than or equal to 0." << std::endl << ">>>> Error code: -2" << std::endl;
        return -1;
    }
    number Prime(workingNumber);
    
    //std::cout << "Your number is: [" << Prime.getValue() << "]."<< std::endl;
    
    if(Prime.getValue() == 1)
    {
        std::cout << "[1] is not a prime number, but its only factor is [1] itself." << std::endl;
    }
    
    else if(Prime.getValue() == 2)
    {
        std::cout << "[2] is a prime number." << std::endl;
    }
    
    else if(Prime.getPrime())
    {
        std::cout << "[" << Prime.getValue() << "] is a prime number." << std::endl;
    }
    else
    {
        std::cout << "[" << Prime.getValue() << "] is not a prime number. Divisble by: [" << Prime.getFirstFactor() << "]." << std::endl;
    }
    return 0;

}
