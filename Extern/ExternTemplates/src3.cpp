// --- src3.cpp ---
#include "include.h"

void foo3() {
    MyTemplate<int> myInstance;
    myInstance.print(300);

    foo<double>(300.5);
}