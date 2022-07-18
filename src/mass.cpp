#include "mass.h"
#include<iostream>
using namespace shadow;

void inline Mass::update(Mass* pMass){
    pMass->getState();
    std::cout << "Am I a root, am I a branch, or am I a leaf?" << std::endl;
}

inline Mass* Mass::getState() {
    std::cout << "Mass::state is void" << std::endl;
    return this;
}