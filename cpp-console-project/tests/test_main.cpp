#include <iostream>
#include <cassert>
#include "sum.h"

void testSum1to100() {
    int expected = 5050;
    assert(sum1to100() == expected);
}

int main() {
    testSum1to100();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}