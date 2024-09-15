//
// Created by chaos on 2024/9/9.
//

#include "chapter2/vector.h"

Vector::Vector(int s):elem{new double[s]},sz{s}{}
double& Vector::operator[](int i){return elem[i];}
int Vector::size(){return sz;}


