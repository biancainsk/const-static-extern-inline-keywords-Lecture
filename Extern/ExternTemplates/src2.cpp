// --- src2.cpp ---
#include "include.h"

void foo2() {
    MyTemplate<int> myInstance;
    myInstance.print(200);

    foo<double>(200.5);
}