//
// Created by chaos on 2024/9/9.
//
#include <chapter6/chapter6.h>
#include <iostream>
#include <limits>
#include <cstdint>
void print_size_type(void)
{
    std::cout << "sizeof int " << sizeof(int) << std::endl;
    std::cout << "largest long " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "largest short " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "largest int " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "min int "<< std::numeric_limits<int>::min() << std::endl;

    std::cout << alignof(char) << std::endl;
    std::cout << alignof(short) << std::endl;

}