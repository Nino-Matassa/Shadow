#include "factory.h"
using namespace shadow;

std::string Sun::simulate() { return "Simulating Sun"; }
std::string Planet::simulate() { return "Simulating Planet"; }
std::string Moon::simulate() { return "Simulating Moon"; }
std::string Asteroid::simulate() { return "Simulating Asteriod"; }
std::string Ship::simulate() { return "Simulating Ship"; }
