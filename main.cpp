#define _USE_MATH_DEFINES
#include <iostream>

void alignedNumbers(int first, int second) {
    int sum = first + second;
    int difference = first - second;
    double average = sum / 2.0;
    int distance = abs(first - second);
    int max = first > second ? first : second;
    int min = first > second ? second : first;

    std::cout << "Sum:        " << sum << std::endl;
    std::cout << "Difference:  " << difference << std::endl;
    std::cout << "Average:    " << average << std::endl;

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

