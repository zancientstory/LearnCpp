//
// Created by chaos on 2024/9/9.
//

#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
public:
    Vector(int s);/*:elem{new double[s]},sz{s}{}*/
    double& operator[](int i);/*{return elem[i];}*/
    int size();/*{return sz;}*/
private:
    double *elem;
    int sz;
};



#endif //VECTOR_H
