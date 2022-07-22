#ifndef client_h
#define client_h
#include "constant.h"
#include "mass.h"
#include <string>

namespace shadow {
    class Client {
        public:
            Client(Constant::MassDefinition product);
            ~Client();
            Mass* getMass();
        private:
        Mass* pMass;
    };
}
#endif
