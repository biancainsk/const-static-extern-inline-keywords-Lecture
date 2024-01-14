// --- src.cpp ---
#include "include.h"

// ------------------------------------------------------------- //
// 1.
void foo() { // OK
    std::cout << "I am inside the foo function!" << std::endl;
}

// ------------------------------------------------------------- //
// 2.1
void local_foo1() { // ERROR: multiple definition of `local_foo1()'
    std::cout << "I am inside the local_foo1 function!" << std::endl;
}

// 2.2
constexpr bool local_foo2() { // OK -> Implicitly Inline
    return true;
}

// 2.3
inline void local_foo3() { // OK -> Explicitly Inline
    std::cout << "I am inside the local_foo3 function!" << std::endl;
}

// 2.4
inline void local_foo4() { // OK -> Explicitly Inline
    std::cout << "I am inside the local_foo4 function!" << std::endl;
}

// ------------------------------------------------------------- //
// 3.2
void NonImplicitInlineClass::print() { // Not Inline
    std::cout << "I am defined outside the class `ImplicitInlineClass`, so I can't be implicit inline!" << std::endl;
}

inline void NonImplicitInlineClass::printInline() { // Explicitly Inline
    std::cout << "I am defined outside the class `ImplicitInlineClass`, but I am explicit inline!" << std::endl;
}
// ------------------------------------------------------------- //