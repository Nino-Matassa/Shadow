#ifndef observer_h
#define observer_h
#include <list>

namespace EliteShadow {
    template <class T> class Observer {
        public:
        Observer() {};
        virtual ~Observer(){};
        virtual void update(T *pObservable) = 0;
    };
}
#endif
