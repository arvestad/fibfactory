#include <vector>

using namespace std;

class FibFactory {
    public:
    FibFactory(int sz=2); // sz is size of memoization table
    void print_fibs(int length_of_series);

    private:
    int length;
    vector<unsigned long> memo; // Want to store unsigned long integers in a vector
    
    unsigned long fibonacci(int num);
};