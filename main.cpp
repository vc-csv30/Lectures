#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>

int main(){

    int array[] = {10, 20, 30, 40};
    int array2[] = {100, 200, 300, 400, 500, 600};

    for (int value: array2) {
        value = value + 10;
        std::cout << "1st element: " << value << std::endl;
    }

    std::string sentence = "the quick brown fox jumps over the lazy dog";
    for (int i = 0; i < sentence.length(); i++) {
        size_t pos = sentence.find("the", i);
        if (pos != std::string::npos) {
            i = pos +1;
        } else {
            break;
        }
        std::cout << pos << std::endl;
    }

    std::string period = ".";
    std::cout << (sentence + period) << std::endl;
    return 0;
}
