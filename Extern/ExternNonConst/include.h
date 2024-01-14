// --- include.h ---
#ifndef INCLUDE_H
#define INCLUDE_H
#include <iostream>

extern int g_externVar; // Forward Declaration; Not Defined Here
const int g_constVar{500}; // Internal Linkage

void printAddr();

#endif