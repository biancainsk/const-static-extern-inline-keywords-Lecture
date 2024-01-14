// --- include.h ---
#ifndef INCLUDE_H
#define INCLUDE_H
#include <iostream>

// ------------------------------------------------------------- //
// 1.
void foo(); // OK

// ------------------------------------------------------------- //
// 2.1
void foo1() { // ERROR: multiple definition of `foo1()'
    std::cout << "I am inside the foo1 function!" << std::endl;
}

// 2.2
constexpr bool foo2() { // OK -> Implicitly Inline
    return true;
}

// 2.3
inline void foo3() { // OK -> Explicitly Inline
    std::cout << "I am inside the foo3 function!" << std::endl;
}

// ------------------------------------------------------------- //
// 3.1
class ImplicitInlineClass
{
public:
    void print() { // Implicitly Inline
        std::cout << "I am defined inside the class `ImplicitInlineClass`, so I must be implicit inline!" << std::endl;
    }
};

// 3.2
class NonImplicitInlineClass
{
public:
    void print(); // Not Implicitly Inline
    void printInline(); // Not Implicitly Inline
};

// ------------------------------------------------------------- //
// 4.1
template <typename T>
void max(T a, T b) { // Implicitly Inline
    std::cout << ((a > b) ? a : b) << std::endl;
}

#endif