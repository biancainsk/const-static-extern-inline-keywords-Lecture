// --- src.cpp ---
#include "include.h"

static int g_local{100};
static void local_foo() {
    std::cout << "I am inside the local_foo function with g_local " << g_local << std::endl;
}

void foo() {
    std::cout << "I am inside the foo function!" << std::endl;
}

void add() {
    int x{};
    x++;

    std::cout << x << std::endl;
}

void staticAdd() {
    static int x{};
    x++;

    std::cout << x << std::endl;
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

namespace MyClassNamespace {
    int MyClass::staticVar{10};

    void MyClass::foo() {
        std::cout << "I am inside the foo function!" << std::endl;
    }
    void MyClass::staticFoo() {
        std::cout << "I am inside the static foo function!" << std::endl;
    }
}

namespace {
    int MyClass::staticVar{10};

    void MyClass::foo() {
        std::cout << "I am inside the foo function!" << std::endl;
    }
    void MyClass::staticFoo() {
        std::cout << "I am inside the static foo function!" << std::endl;
    }
}