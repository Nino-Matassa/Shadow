#ifndef observable_h
#define observable_h
#include <vector>
#include "observer.h"

namespace EliteShadow {
    template <class T> class Observable {
        private:
            std::vector<Observer<T>*> pObservers;
            Observable *pObservable;
        public:
            Observable() {}
            virtual ~Observable() {}
            void add(Observer<T> &observer);
            void remove(Observer<T> &observer);
            void notify();
    };
}
#endif
