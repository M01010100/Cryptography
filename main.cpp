#include <iostream>
#include "Benchmark.h"
#include "Algorithms.h"

using namespace std;
int main(){
    cout << endl << "Welcome to FiboBench" <<endl;
    double total_duration = Benchmark::run_fibonacci();

    cout << "Elapsed time: "<< total_duration << "s" << endl;
    return 0;
}