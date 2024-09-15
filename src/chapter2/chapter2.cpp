//
// Created by chaos on 2024/9/8.
//
#include <chapter2/chapter2.h>
#include <iostream>
#include <chapter2/vector.h>

void read_print_type(void)
{
    bool b;
    char c;
    int i;
    double d;
    std::string s;
    std::cin >> s >> c >> i >> d >> b;
    std::cout << b << " " << c << " " << i << " " << d << " " << s << std::endl;
}
double read_and_sum(int s)
{
    Vector v(s);
    for(int i = 0; i != v.size(); i++)
        std::cin >> v[i];
    double sum = 0;
    for(int i = 0; i != v.size(); i++)
        sum += v[i];
    return sum;
}

// struct Vector
// {
//     int sz;
//     double *elem;
// };
// void vector_init(Vector &v,int s)
// {
//     v.elem = new double[s];
//     v.sz = s;
// }
// double read_and_sum(int s)
// {
//     Vector v;
//     vector_init(v,s);
//     for(int i=0;i<s;i++)
//         std::cin >> v.elem[i];
//
//     double sum = 0;
//     for(int i=0;i<s;i++)
//         sum += v.elem[i];
//     return sum;
// }
//
