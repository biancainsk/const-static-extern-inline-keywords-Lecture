// --- src.cpp ---
#include "include.h"

int g_externVar{100}; // Definition
int g_var{10}; // Definition

void printAddr() {
    std::cout << &g_externVar << " " << &g_constVar << " " << &g_var << std::endl;
}