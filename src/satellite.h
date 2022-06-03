#ifndef satellite_h
#define satellite_h
#include "tether.h"
#include "observer.h"
#include "observable.h"

namespace EliteShadow {
    
    class Satellite : public Tether {
        public:
            virtual ~Satellite() {}
            void update(Tether* pObservable);
    };
}

#endif
