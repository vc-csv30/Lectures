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
    std::cout << "Hello" << std::endl;
    recursive2();
}

int main(){
    recursive2();
    double cube = exponent(5, 3);
    double square = exponent(3);
    return 0;
}

