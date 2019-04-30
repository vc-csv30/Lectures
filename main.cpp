#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main(){

    int *intArray = new int[14];

    std::vector<int> intVector;

    std::vector<std::string> stringVector = {"dog", "cat", "house", "car"};
    std::vector<std::vector<int>> vectorVector;

    std::cout << intVector.size()<< std::endl;

    for (int i = 0; i < 14; i++) {
        std::cout << "i: " << i << std::endl;
        std::cout << "Capacity: " << intVector.capacity() << std::endl;
        intVector.push_back(i);
    }

    intVector.push_back(14);
    std::cout << intVector.size() << std::endl;

    for (int i = 0; i < intVector.size(); i++) {
        std::cout << intVector.at(i) << std::endl;
    }

    // auto becomes std::vector<std::string>::iterator
    for (auto i = stringVector.begin(); i != stringVector.end(); i++) {
        std::cout << *i << std::endl;
    }

    auto x = 112;

    std::string word = "antidiisestablishmentarianism";
    for (auto c = word.begin(); c != word.end(); c++) {
        if (*c == 'i') {
            word.erase(c);

            c--;
        }
    }
    std::cout << word << std::endl;
    return 0;
}
