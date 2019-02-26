#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>

void alignedNumbers(int first, int second) {
    int sum = first + second;
    int difference = first - second;
    double average = sum / 2.0;
    int distance = abs(first - second);
    int max = first > second ? first : second;
    int min = first > second ? second : first;

    std::cout << "Sum: " << std::setw(26) << sum << std::endl;
    std::cout << "Difference: " << std::setw(19) << difference << std::endl;
    std::cout << "Average: " << std::setw(24) << std::setprecision(1) << std::fixed << average << std::endl;
    std::cout << "Distance: " << std::setw(21) << distance << std::endl;
    std::cout << "Min: " << std::setw(26) << min << std::endl;
    std::cout << "Max: " << std::setw(26) << max << std::endl;
}

int main(){

    int a;
    int b;

    std::cout << "Enter a number: ";
    std::cin >> a;

    std::cout << "Enter another number: " << std::endl;
    std::cin >> b;

    alignedNumbers(a, b);

    return 0;
}

