#include <iostream>
#include "fibfactory.h"

using namespace std;

int main(int argc, char*  argv[]) {
    FibFactory object;
    if (argc != 2) {
        cerr << "Usage: fib <int>" << endl;
    } else {
        int num = atoi(argv[1]);
        object.print_fibs(num);
    }
}