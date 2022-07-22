#ifndef constant_h
#define constant_h

#include <string>
// namespace shadow {
class Constant {
   public:
    static inline const std::string name = "shadow";

    enum MassDefinition {sun, planet, moon, asteroid, ship};
    static MassDefinition products;
};

// }  // namespace shadow
#endif
