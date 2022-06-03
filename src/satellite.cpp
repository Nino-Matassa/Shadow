#include "satellite.h"

using namespace EliteShadow;

void Satellite::update(Tether* pObservable) {
    pObservable->getState();
}

