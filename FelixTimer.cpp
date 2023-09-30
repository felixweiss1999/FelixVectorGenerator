#include "libFelix.hpp"

Felix::Timer::Timer() : debugMsg("-") {
    start = std::chrono::high_resolution_clock::now();
}
Felix::Timer::Timer(std::string_view debugMsg) : debugMsg(debugMsg){
    start = std::chrono::high_resolution_clock::now();
}
Felix::Timer::~Timer(){
    end = std::chrono::high_resolution_clock::now();
    duration = end-start;
    std::cout << '[' << debugMsg << "] took " << duration.count() * 1000.0f << "ms\n";
}
