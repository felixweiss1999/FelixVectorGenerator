#include "FelixVectorGenerator.hpp"
#include <iostream>

int main(){
    std::vector<int> vec = FelixVectorGenerator::getUniformVec(100, 2, 8);
    for(auto num : vec) std::cout << num << '\n';
    return 0;
}