#include <chapter2/chapter2.h>
#include <chapter6/chapter6.h>
#include <chapter7/chapter7.h>
#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello, World!" << std::endl;
    print_origin_string();
    int v[10] {};
    cout << &v[1] <<" " << &v[0]<< endl;
    // std::cout << read_and_sum(3);
    // print_size_type();
    return 0;
}
