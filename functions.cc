//
// Created by aknight on 1/29/19.
//
#include <cmath>
#include <cstdint>

double exponent(double base, double exp) {
    double result = pow(base, exp);
    return result;
}

// This is a comment for my wife. Does she see it?
double exponent(float base, int exp) {
    double result = 1;



    for(int i = 0; i < exp; i++) {
        result = result * base;
    }

    for (int i = exp; i < 0; i++) {
        result = result / base;
    }

    return result;
}

double exponent(float base, uint64_t exp) {
    double result = 1.0;

    for(int i = 0; i < exp; i++) {
        result = result * base;
    }

    return result;
}

double exponent(int base) {
    double result = pow(base, 2);
    return result;
}

