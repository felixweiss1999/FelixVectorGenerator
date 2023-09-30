#pragma once
#include <string>
#include <chrono>
#include <iostream>

#include <vector>
#include <random>


namespace Felix{
    /*
        Object providing useful tool to generate test data.
    */
    class VectorGenerator{
        
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

    /*
        Timer object.
    */
    class Timer{
    private:
        std::string debugMsg;
        std::chrono::_V2::system_clock::time_point start, end;
        std::chrono::duration<float> duration;
    public:
        Timer();
        /*
            Provide an optional debug message.
        */
        Timer(std::string_view debugMsg);
        ~Timer();
    };
}
