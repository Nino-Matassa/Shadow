#include "client.h"
#include "mass.h"
#include "constant.h"

using namespace shadow;

Client::Client(Constant::MassDefinition definedAs) {
    pMass = Mass::defineMass(definedAs);
}

Client::~Client() {
    if(pMass) {
        delete pMass;
        pMass = nullptr;
    }
}

Mass* Client::getMass() {
    return pMass;
}

