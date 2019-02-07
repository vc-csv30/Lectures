#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>

#include <cmath>

#include "functions.h"

using std::cout;
using std::endl;

void recursive1();

void recursive2() {
    std::cout << "Goodbye" << std::endl;
    recursive1();
}

void recursive1() {
    int x = 10;
    std::cout << "Hello" << std::endl;
    recursive2();
    if (x < 0) return;
    return;
}

int main(){
    recursive2();
    double cube = exponent(5, 3);
    double square = exponent(3);
    return 0;
}

