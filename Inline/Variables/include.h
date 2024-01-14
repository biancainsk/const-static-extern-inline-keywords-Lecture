#ifndef INCLUDE_H
#define INCLUDE_H
#include <iostream>

int g_var{10}; // ERROR: multiple definition of `g_var'

const int g_constVar{10}; // OK
constexpr int g_constexprVar{10}; // OK

extern int g_externVar; // Forward Declaration; Not Defined Here

inline int g_inlineVar{30}; // OK
inline const int g_inlineConstVar{30}; // OK
inline constexpr int g_inlineConstexprVar{30}; // OK

void printAddr();

// ------------------------------------------------------------- //
class MyClass
{
public:
    static int class_staticVar{}; // ERROR: error: ISO C++ forbids in-class initialization of non-const static member ‘MyClass::class_staticVar’
    // class_staticVar MUST be initialized in .cpp to work properly.

    inline static int class_inlineStaticVar{110}; // OK
    static constexpr int class_staticConstexprVar{120}; // OK -> Implicitly Inline
};

// ------------------------------------------------------------- //
// Solve the problems from `extern` related to the usage as compile-time constants:
extern const int arraySizeExtern;

inline constexpr int arraySizeInline{25};

#endif