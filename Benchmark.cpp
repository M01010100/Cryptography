#include <chrono>
#include "Benchmark.h"
#include "Algorithms.h"

namespace Benchmark{
    using std::chrono::duration;
    using std::chrono::time_point;
    using std::chrono::steady_clock;

    double run_fibonacci() {
        time_point<steady_clock> start = steady_clock::now();

        unsigned long int fb = my_algorithms::fibonacci(42);

        time_point<steady_clock> end = steady_clock::now();

        duration<double> elapsed_seconds = end - start;
        return elapsed_seconds.count();
    }

}