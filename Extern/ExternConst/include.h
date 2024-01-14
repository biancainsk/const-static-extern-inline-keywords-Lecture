// --- include.h ---
#ifndef INCLUDE_H
#define INCLUDE_H
#include <iostream>

extern const int g_externVar; // SYNTAX OK -> Forward Declaration; Not Defined
extern constexpr int g_externVar0; // SYNTAX ERROR -> Forward Declaration; Not Allowed due to "constexpr".

extern const int g_externConstVar{500}; // SYNTAX OK
                                        // We give External Linkage to "const" which has Internal Linkage by default.
                                        // Equivalent to: int g_externConstVar{500};
                                        // ERROR: multiple definition of `g_externConstVar'
// OR the same as above with constexpr:
extern constexpr int g_externConstVar1{500}; // SYNTAX OK
                                             // We give External Linkage to "constexpr" which has Internal Linkage by default.
                                             // ERROR: multiple definition of `g_externConstVar1'

const int g_constVar{500}; // Internal Linkage

void printAddr();

#endif