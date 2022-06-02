#ifndef observable_h
#define observable_h
#include <vector>

namespace EliteShadow {
    template <class T> class Observable {
        private:
            std::vector<Observer<T>*> pObservers;
            Observable *pObservable;
        public:
            Observable() {}
            virtual ~Observable() {}
            void add(Observer<T> &observer) {
                pObservers.push_back(&observer);
            }
            void remove(Observer<T> &observer) {
                pObservers.pop_back(&observer);
            }
            void notify() {
                for(auto& pObserver: pObservers) {
                    pObserver->update(static_cast<T*> (this));
                }
            }
    };
}
#endif
