// --- main.cpp ---
#include "include.h"

extern int g_var; // Forward Declaration; Definition in example.cpp

int main()
{
    std::cout << &g_externVar << " " << &g_constVar << " " << &g_var << std::endl;
    // 0x562331202014 0x562331000d8c 0x555ba9002014

    printAddr(); // 0x562331202014 0x562331000e1c 0x555ba9002014

    std::cout << g_externVar << " " << g_constVar << " " << g_var << std::endl;
    // 100 500 10
    
    return 0;
}