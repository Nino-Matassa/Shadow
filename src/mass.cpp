#include "mass.h"

#include <iostream>
#include <string>

#include "constant.h"
#include "factory.h"
using namespace shadow;

void Mass::update(Mass* pMass) { // Only visit each object once regardless of the configuration
    std::cout << pMass->simulate() << ": ";
    for(auto* pLeaf : pLeafs) { // if this is a branch
        pLeaf->update(this);
        std::cout << pLeaf->simulate() << ":";
    }
    std::cout << ":" << std::endl;
}

std::string Mass::getState() {
    return state;
}

Mass* Mass::defineMass(Constant::MassDefinition definedAs) {
    switch (definedAs) {
        case Constant::sun:
            return new Sun();
            break;
        case Constant::planet:
            return new Planet();
            break;
        case Constant::moon:
            return new Moon();
            break;
        case Constant::asteroid:
            return new Asteroid();
            break;
        case Constant::ship:
            return new Ship();
            break;
        default:
            return nullptr;
    }
}
