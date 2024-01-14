// --- include.h ---
#ifndef INCLUDE_H
#define INCLUDE_H
#include <iostream>

static int g_var; // Global Scope, Static Duration, Internal Linkage
static void foo(); // Global Scope, Static Duration, Internal Linkage

void add(); // Usage: Normal function which has a non-static local variable.
void staticAdd(); // Usage: To show how a static local variable behaves.

namespace MyNamespace {
    static int g_var1; // Global Scope, Static Duration, Internal Linkage
    static void foo1(); // Global Scope, Static Duration, Internal Linkage
  
    static void foo1_1() { // Global Scope, Static Duration, Internal Linkage
        std::cout << "I am inside the foo1_1 function!" << std::endl;
    }
}

namespace {
    static int g_var2; // Global Scope, Static Duration, Internal Linkage
    static void foo2(); // Global Scope, Static Duration, Internal Linkage

    static void foo2_1() { // Global Scope, Static Duration, Internal Linkage
        std::cout << "I am inside the foo2_1 function!" << std::endl;
    }
}

namespace MyClassNamespace {
    class MyClass {
    public:
        int var{};
        static int staticVar;

        void foo();
        static void staticFoo();
        
        void foo1_1() {
            std::cout << "I am inside the foo1_1 function!" << std::endl;
        }
    };
}

namespace {
    class MyClass {
    public:
        int var{};
        static int staticVar;

        void foo();
        static void staticFoo();

        void foo1_1() {
            std::cout << "I am inside the foo1_1 function!" << std::endl;
        }
    };
}

#endif