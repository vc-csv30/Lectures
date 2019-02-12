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

int fib(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main(){
    std::cout << "fib(7) " << fib(100) << std::endl;

    return 0;
}

