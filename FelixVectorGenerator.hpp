#pragma once
#include <vector>
#include <chrono>
#include <random>

/*
    Object providing useful tool to generate test data.
*/
class FelixVectorGenerator{
    
public:
    /*
        Creates vector with N elements drawn from uniform distribution of inclusive bounds lower and upper.

        N: length of returned vector
        lower: inclusive lower bound for uniform distribution
        upper: inclusive upper bound for uniform distribution
    */
    static std::vector<int> getUniformVec(std::size_t N, int lower, int upper);
    /*
        Creates vector with N elements drawn from uniform distribution in range [lower, upper).

        N: length of returned vector
        lower: inclusive lower bound for uniform distribution
        upper: exclusive upper bound for uniform distribution
    */
    static std::vector<float> getUniformVec(std::size_t N, double lower, double upper);
};
