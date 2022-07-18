#ifndef sun_h
#define sun_h
#include "tether.h"
namespace shadow {
    class Mass : public Tether<Mass> {
        public:
            void update(Mass* pMass);
        private:
            Mass* getState(); // dummy function...
    };
}
#endif

