#include <vector>
#include <iostream>
namespace {
    void printVector(std::vector<int> v) {
        for (int i : v) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}
