// --- main.cpp ---
#include "include.h"

extern const int g_var; // Forward Declaration; Definition in example.cpp
extern constexpr int g_constexpr; // SYNTAX ERROR

int main()
{
    std::cout << &g_externVar << " " << &g_constVar << " " << &g_var << std::endl;
    // 0x55e2b7795010 0x55e2b7795004 0x55e2b7795014

    printAddr(); // 0x55e2b7795010 0x55e2b779500c 0x55e2b7795014

    std::cout << g_externVar << " " << g_constVar << " " << g_var << std::endl;
    // 100 500 10
    
    return 0;
}