#include <vector>
#include <iostream>

void printVector(std::vector<int> v) {
    for (int i : v){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}