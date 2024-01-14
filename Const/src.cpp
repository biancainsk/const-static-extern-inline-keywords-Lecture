// --- src.cpp ---
#include "include.h"

const int g_local{100};
const void local_foo() { // Global Scope, Static Duration, External Linkage
    std::cout << "I am inside the local_foo function with g_local " << g_local << std::endl;
} // NOTE: "const" has no effect here.

void foo() {
    std::cout << "I am inside the foo function!" << std::endl;
}

namespace MyNamespace {
    void foo1() {
        std::cout << "I am inside the foo1 function!" << std::endl;
    }
}

namespace {
    void foo2() {
        std::cout << "I am inside the foo2 function!" << std::endl;
    }
}