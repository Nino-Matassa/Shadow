#ifndef factory_h
#define factory_h
#include <iostream>
#include <string>

#include "mass.h"
namespace shadow {
class Sun : public Mass {
   public:
   Sun() : state {"Sun"} {}
    std::string simulate() override;
    private:
    std::string state;
};

class Planet : public Mass {
   public:
   Planet() : state {"Planet"}{}
    std::string simulate() override;
    private:
    std::string state;
};

class Moon : public Mass {
   public:
   Moon() : state {"Moon"}{}
    std::string simulate() override;
    private:
    std::string state;
};

class Asteroid : public Mass {
   public:
   Asteroid() : state {"Asteroid"}{}
    std::string simulate() override;
    private:
    std::string state;
};

class Ship : public Mass {
   public:
   Ship() : state {"Ship"}{}
    std::string simulate() override;
    private:
    std::string state;
};
}  // namespace shadow
#endif
