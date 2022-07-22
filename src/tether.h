#ifndef tether_h
#define tether_h
#include <vector>
#include <string>
namespace shadow {
/*
Tether is a derivitive of the Observer Design Pattern. It unifies both interfaces and privitises the update() call.
It is both a node and tree structure; Root, Branch & Leaf.
Root: Has no root node.
Branch: Has a root >= 1 leaf node.
Leaf: Has a root noda but no leaf nodes.
*/
template <class T> class Tether {
   public:
    Tether() {}
    ~Tether() {}
    void add(T& leaf) { pLeafs.push_back(&leaf); }
    void remove(T& leaf) { pLeafs.pop_back(&leaf); }
    void notify() {
        for(auto* pLeaf : pLeafs) {
            pLeaf->update(static_cast<T*>(this));
        }
    }
   protected:
    std::vector<T*> pLeafs;
    std::string state;
   private:
    virtual void update(T* pRoot) = 0;
};
}  // namespace shadow
#endif
