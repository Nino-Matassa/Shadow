#include "observable.h"
using namespace EliteShadow;

template <class T>
void Observable<T>::add(Observer<T> &observer) {
    pObservers.push_back(&observer);
}

template <class T>
void Observable<T>::remove(Observer<T> &observer) {
    pObservers.pop_back(&observer);
}

template <class T>
void Observable<T>::notify() {
    for (auto &pObserver : pObservers)
    {
        pObserver->update(static_cast<T *>(this));
    }
}