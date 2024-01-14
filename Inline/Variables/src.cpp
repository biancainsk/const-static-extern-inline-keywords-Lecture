#include "include.h"

int g_externVar{20}; // Definition

void printAddr() {
    std::cout << &g_constVar << " " << &g_constexprVar << " " << &g_externVar << " "
              << &g_inlineVar << " " << &g_inlineConstVar << " " << &g_inlineConstexprVar << std::endl;
}

extern const int arraySizeExtern{25};