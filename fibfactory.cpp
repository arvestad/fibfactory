#include "fibfactory.h"
#include <iostream>

// THERE IS A BUG IN THIS CODE!
// Why is the output starting with three zeros?

FibFactory::FibFactory(int sz) {
    length = 0; // Redundant initialization Remove??
    memo.reserve(sz); // Allocate 1000 elements in vector
    // for (int i=0; i<1000; i++) {
    for (auto it = memo.begin(); it != memo.end(); it++) {
        *it = 0; // The current element in the iteration
    }
}

void FibFactory::print_fibs(int length_of_series) {
    /*
    for (int i=1; i <= length; i++) {
        std::cout << fibonacci(i) << std::endl;
    }
    */
   fibonacci(length_of_series);
   for (int i=0; i<length_of_series; i++) {
      std::cout << memo[i] << std::endl;
   } 
}

unsigned long FibFactory::fibonacci(int num) {
    if (num == 1) 
        return 0;
    else if (num == 2) 
        return 1;
    else {
        if (memo[num] == 0) { // Not yet computed
            memo[num] = fibonacci(num-1) + fibonacci(num-2);
        }
        return memo[num];
    }
}