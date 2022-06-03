#ifndef tether_h
#define tether_h
#include "observable.h"
#include "observer.h"

namespace EliteShadow {

    class Tether : public Observable<Tether>, Observer<Tether> {
            public:
            virtual ~Tether(){}
            virtual void update(Tether* pObservable) = 0;
            void getState();
    };
}

#endif
