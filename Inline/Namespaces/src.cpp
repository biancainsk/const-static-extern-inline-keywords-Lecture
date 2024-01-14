// --- src.cpp ---
#include "include.h"

namespace v1 {
    void printVersion() {
        std::cout << "Version 1" << std::endl;
    }
}

inline namespace v2 {
    void printVersion() {
        std::cout << "Version 2" << std::endl;
    }
}