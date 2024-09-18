//
// Created by chaos on 2024/9/10.
//

#include "chapter7/chapter7.h"
#include <iostream>
#include <string>
#include <array>
#include <set>
#include <vector>
void print_origin_string()
{
    std::cout << R"("z/)" << std::endl;
}
void test_1_declaration(void)
{
    char c = 'a';
    char * p2char = &c;
    char ** pp2char = &p2char;
    int arr[10]  = {1,2,3,4,5,6,7,8,9,10};
    // int & r_arr =  arr[0];
    int (&r_arr)[10] = arr;
    std::string str[] = {"hello","world"};
    std::string *p2str = str;
    const int c_int = 10;
    const int * p2c_int = &c_int;   

}
void test_2_declaration(void)
{

}
void test_3(void)
{
    using uchar  = unsigned char;
    using cuchar = const unsigned char;
    using pint = int *;
    using ppc = int **;
    using CharArrayPtr = char (*)[];
    using ArrayOfIntPtr = int *[7];
}
void test_4(void)
{
    using Ptr = int *;
    std::array<int,10> arr = {'a','b','c','d','e','f','g','h','i','j'};
    Ptr p1 = &arr[0];
    Ptr p2 = &arr[0];
    std::cout << p2 - p1 << std::endl;
}
int global_int[10] = {1,2,3,4,5,6,7,8,9,10};
void test_5(void)
{
    int local_int[10] = {1,2,3,4,5,6,7,8,9,10};
    int *alloc_int = new int[10]{1,2,3,4,5,6,7,8,9,10};
    
    //read just beyond the end of the array
    std::cout << global_int[101] << std::endl;
    std::cout << local_int[10] << std::endl;
    std::cout << alloc_int[10] << std::endl;

    //read far beyond the end of the array
    std::cout << global_int[100] << std::endl;
    std::cout << local_int[100] << std::endl;
    std::cout << alloc_int[100] << std::endl;

    std::cout << "-----------------" << std::endl;

    //read before the beginning of the array
    std::cout << global_int[-1] << std::endl;
    std::cout << local_int[-1] << std::endl;
    std::cout << alloc_int[-1] << std::endl;

    //read far before the beginning of the array
    std::cout << global_int[-100] << std::endl;
    std::cout << local_int[-100] << std::endl;
    std::cout << alloc_int[-100] << std::endl;

}
void test_6_1(int *p1,int *p2)
{
    //swap two pointers
    int temp = *p2;
    *p2 = *p1;
    *p1 = temp;
}
void test_6_2(int &r1,int &r2)
{
    int temp = r1;
    r1 = r2;
    r2 = temp;
}
void printmonth(const std::string (&month)[12])
{
    for(const auto &m:month)
    {
        std::cout << m << std::endl;
    }
}
void test_10(void)
{
    const std::string month[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    printmonth(month);

}
void test_11(void)
{
    std::set<std::string> words;
    std::string word;
    while(std::cin >> word && word != "quit")
    {
        words.insert(word);
    }
    //sort the words
    std::vector<std::string> sorted_words(words.begin(),words.end());


    for(const auto &w:sorted_words)
    {
        std::cout << w << std::endl;
    }
}
