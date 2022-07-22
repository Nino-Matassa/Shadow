#ifndef mass_h
#define mass_h
#include "constant.h"
#include "tether.h"
#include <string>

namespace shadow {
class Mass : public Tether<Mass> {
   public:
    virtual ~Mass() {}
    static Mass* defineMass(Constant::MassDefinition definedAs);
    void update(Mass* pMass);

   private:
    std::string getState();  // dummy function...
    virtual std::string simulate() = 0;
};
}  // namespace shadow
#endif
