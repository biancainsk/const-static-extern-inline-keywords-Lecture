// --- include.h ---
#ifndef EXTERN_TEMPLATE_H
#define EXTERN_TEMPLATE_H
#include <iostream>

template <typename T>
class MyTemplate {
public:
    void print(const T& t) {
        std::cout << t << std::endl;
    }
};

template <typename T>
void foo(const T& t) {
    std::cout << t << std::endl;
}

extern template class MyTemplate<int>;
extern template void foo<double>(const double&);

#endif