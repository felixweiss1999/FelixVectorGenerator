#include "libFelix.hpp"


std::vector<int> Felix::VectorGenerator::getUniformVec(std::size_t N, int lower, int upper){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 generator( seed );  // mt19937 is a standard mersenne_twister_engine
    // http://www.cplusplus.com/reference/random/uniform_int_distribution/
    std::uniform_int_distribution<int> distribution(lower, upper);

    std::vector<int> V(N);
    for ( auto& e : V ) e = distribution(generator);

    return V;
}
std::vector<float> Felix::VectorGenerator::getUniformVec(std::size_t N, double lower, double upper){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 generator( seed );  // mt19937 is a standard mersenne_twister_engine
    // http://www.cplusplus.com/reference/random/uniform_int_distribution/
    std::uniform_real_distribution<float> distribution(lower, upper);

    std::vector<float> V(N);
    for ( auto& e : V ) e = distribution(generator);

    return V;
}
