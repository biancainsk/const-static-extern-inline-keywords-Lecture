// --- main.cpp ---
#include "include.h"

void foo2();
void foo3();

int main() {

    MyTemplate<int> myInstance;
    myInstance.print(100);

    foo<double>(100.5);

    foo2();
    foo3();

    return 0;
}