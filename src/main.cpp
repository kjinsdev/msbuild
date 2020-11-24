#include <iostream>
#include "func.h"
using namespace std;

int main() {
    int* a;
    func(a);

    cout << *a << endl; 
}