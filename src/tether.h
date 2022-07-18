#ifndef tether_h
#define tether_h
#include "vector"
namespace shadow {
/*
Tether is a derivitive of the observer design pattern, it both registers
observers and can be registered as an observer. It can be viewed like a tree
like structure: Root = a fixed point/mass in space around which satellites
orbit. Branch = Both child of a parent and having >= 1 children. Leaf = Having a
parent but no children.
*/
template <class T> class Tether {
   public:
    Tether() {}
    ~Tether() {}
    void add(T& leaf) { pLeaves.push_back(&leaf); }
    void remove(T& leaf) { pLeaves.pop_back(&leaf); }
    void notify() {
        // typename std::vector<T*>::iterator it;
        // for (it = pLeaves.begin(); it != pLeaves.end(); it++) {
        //     (*it)->update(static_cast<T*>(this));
        // }
        for(auto* pLeave : pLeaves) {
            pLeave->update(static_cast<T*>(this));
        }
    }
   protected:
    std::vector<T*> pLeaves;
   private:
    virtual void update(T* pRoot) = 0;
};
}  // namespace shadow
#endif
