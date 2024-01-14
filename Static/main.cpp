// --- main.cpp ---
#include "include.h"

int g_local{200};
void local_foo() {
    std::cout << "I am inside the local_foo function with g_local " << g_local << std::endl;
}

int main()
{
    std::cout << g_local << std::endl; // OK: 200
    local_foo(); // OK: I am inside the local_foo function with g_local 200

    std::cout << g_var << std::endl; // OK: 0
    foo(); // ERROR: undefined reference to `foo()'

    add(); // OK: 1
    add(); // OK: 1
    add(); // OK: 1

    staticAdd(); // OK: 1
    staticAdd(); // OK: 2
    staticAdd(); // OK: 3

    std::cout << MyNamespace::g_var1 << std::endl; // OK: 0
    MyNamespace::foo1(); // ERROR: undefined reference to `MyNamespace::foo1()'
    MyNamespace::foo1_1(); // OK: I am inside the foo1_1 function!

    std::cout << g_var2 << std::endl; // OK: 0
    foo2(); // ERROR: undefined reference to `(anonymous namespace)::foo2()'
    foo2_1(); // OK: I am inside the foo2_1 function!

    MyClassNamespace::MyClass object1;
    std::cout << object1.var << std::endl; // OK: 0
    std::cout << MyClassNamespace::MyClass::staticVar << std::endl; // OK: 10
    object1.foo(); // OK: I am inside the foo function!
    MyClassNamespace::MyClass::staticFoo(); // OK: I am inside the static foo function!
    object1.foo1_1(); // OK: I am inside the foo1_1 function!
    
    MyClass object2;
    std::cout << object2.var << std::endl; // OK: 0
    std::cout << MyClass::staticVar << std::endl; // ERROR: undefined reference to `(anonymous namespace)::MyClass::staticVar'
    object2.foo(); // ERROR: undefined reference to `(anonymous namespace)::MyClass::foo()'
    MyClass::staticFoo(); // ERROR: undefined reference to `(anonymous namespace)::MyClass::staticFoo()'
    object2.foo1_1(); // OK: I am inside the foo1_1 function!

    return 0;
}