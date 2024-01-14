#include "include.h"

int array1[arraySizeExtern]; // ERROR: error: size of array ‘array1’ is not an integral constant-expression
int array2[arraySizeInline]; // OK

int main()
{
    std::cout << &g_constVar << " " << &g_constexprVar << " " << &g_externVar << " "
              << &g_inlineVar << " " << &g_inlineConstVar << " " << &g_inlineConstexprVar << std::endl;
    // 0x55cffda57004 0x55cffda57008 0x55cffda59014 0x55cffda59010 0x55cffda57010 0x55cffda57014

    printAddr();
    // 0x55cffda57018 0x55cffda5701c 0x55cffda59014 0x55cffda59010 0x55cffda57010 0x55cffda57014

    std::cout << g_constVar << " " << g_constexprVar << " " << g_externVar << " "
              << g_inlineVar << " " << g_inlineConstVar << " " << g_inlineConstexprVar << std::endl;
    // 10 10 20 30 30 30

    std::cout << "MyClass Variables are: " << MyClass::class_inlineStaticVar
              << " " << MyClass::class_staticConstexprVar << std::endl;
    // MyClass Variables are: 110 120

    int array3[arraySizeExtern]; // ERROR: error: variable length array ‘array3’ is used [-Werror=vla]
    int array4[arraySizeInline]; // OK

    return 0;
}