#include "func.h"
void func(int*& b) {
    b = new int;
    *b = 400;
}