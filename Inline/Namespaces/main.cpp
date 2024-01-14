// --- main.cpp ---
#include "include.h"

int main()
{
    v1::printVersion(); // Prints "Version 1".
    v2::printVersion(); // Prints "Version 2".

    printVersion(); // Prints "Version 2" -> The `inline` one.

    return 0;
}