#include "RandomVec.hpp"

std::vector<int> getRandomVec(std::size_t N, int lower, int upper){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 generator( seed );  // mt19937 is a standard mersenne_twister_engine
    // http://www.cplusplus.com/reference/random/uniform_int_distribution/
    std::uniform_int_distribution<int> distribution(lower, upper);

    std::vector<int> V(N);

    // ranged for syntax and automatically deduced type 'auto'
    for ( auto& e : V ) e = distribution(generator);

    return V;
}