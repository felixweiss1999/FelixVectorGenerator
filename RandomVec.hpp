#pragma once
#include <vector>
#include <chrono>
#include <random>

/*
    This is a comment!
*/

class FelixVectorGenerator{
    std::vector<int> getRandomVec(std::size_t N, int lower, int upper);
};
std::vector<int> getRandomVec(std::size_t N, int lower, int upper);
