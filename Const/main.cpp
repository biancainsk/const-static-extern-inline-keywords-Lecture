// --- main.cpp ---
#include "include.h"

const int g_local{200};
void local_foo() { // ERROR: multiple definition of `local_foo()'
    std::cout << "I am inside the local_foo function with g_local " << g_local << std::endl;
}

int main()
{
    std::cout << g_local << std::endl; // OK: 200

    std::cout << g_var << std::endl; // OK: 100
    foo(); // OK: I am inside the foo function!

    std::cout << MyNamespace::g_var1 << std::endl; // OK: 100
    MyNamespace::foo1(); // OK: I am inside the foo1 function!
    MyNamespace::foo1_1(); // ERROR: multiple definition of `MyNamespace::foo1_1()'

    std::cout << g_var2 << std::endl; // OK: 100
    foo2(); // ERROR: undefined reference to `(anonymous namespace)::foo2()'
    foo2_1(); // OK: I am inside the foo2_1 function!

    return 0;
}