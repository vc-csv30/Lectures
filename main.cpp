#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>

#include <cmath>

using std::cout;
using std::endl;

int main(){

    const double MMS_PER_INCH = 25.4;
    double width = 8.5 * MMS_PER_INCH;
    double height = 11 * MMS_PER_INCH;
    cout << std::setprecision(2) << std::fixed << (8.5 * MMS_PER_INCH) << " X " << height << " mm" << endl;
    return 0;
}

