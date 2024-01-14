// --- include.h ---
#ifndef INCLUDE_H
#define INCLUDE_H
#include <iostream>

const int g_var{100}; // Global Scope, Static Duration, Internal Linkage
// constexpr int g_var{100}; 
void foo(); // Global Scope, Static Duration, External Linkage

namespace MyNamespace {
    const int g_var1{100}; // Global Scope, Static Duration, Internal Linkage
    // constexpr int g_var1{100};
    void foo1(); // Global Scope, Static Duration, External Linkage
  
    void foo1_1() { // Global Scope, Static Duration, External Linkage; ERROR: multiple definition of `MyNamespace::foo1_1()'
        std::cout << "I am inside the foo1_1 function!" << std::endl;
    }
}

namespace {
    const int g_var2{100}; // Global Scope, Static Duration, Internal Linkage
    // constexpr int g_var2{100};

    void foo2(); // Global Scope, Static Duration, Internal Linkage

    void foo2_1() { // Global Scope, Static Duration, Internal Linkage
        std::cout << "I am inside the foo2_1 function!" << std::endl;
    }
}

#endif