#include <iostream>
#include "task1.h"

int main() {
    unsigned int n;
    std::cin >> n;
    std::cout << n << ":" << getPrime(n + 1);
} 