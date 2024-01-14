// --- main.cpp ---
#include "include.h"

// 2.1
// -> Can use Forward Declaration instead, 
// since we are not `inline`: void local_foo1(); => OK
void local_foo1() { // ERROR: multiple definition of `local_foo1()'
    std::cout << "I am inside the local_foo1 function!" << std::endl;
}

// 2.2
// OK -> Implicitly Inline => Forward Declatation won't work here, since we are `inline`
constexpr bool local_foo2() {
    return true;
}

// 2.3
// OK -> Explicitly Inline => Forward Declatation won't work here, since we are `inline`
inline void local_foo3() {
    std::cout << "I am inside the local_foo3 function!" << std::endl;
}

// 2.4
// OK -> Explicitly Inline => Forward Declatation won't work here, since we are `inline`
// We are breaking the "Consistent Definitions Across Files" Rule to see what happens.
inline void local_foo4() {
    std::cout << "I am inside the local_foo4 function, but I will print a different message than in src.cpp!" << std::endl;
}

int main()
{
    foo(); // OK
    local_foo1(); // ERROR: multiple definition of `local_foo1()'

    static_assert(foo2() == true, "foo2() should return true"); 
    // This static assertion will fail at compile-time if foo2() does not return TRUE

    static_assert(local_foo2() == true, "local_foo2() should return true"); 
    // This static assertion will fail at compile-time if local_foo2() does not return TRUE

    foo3(); // OK
    local_foo3(); // OK

    local_foo4(); // Which definition will be used? The one from src.cpp or the one from main.cpp?

    max(10, 20); // OK
    max(10.5, 8.5); // OK

    return 0;
}