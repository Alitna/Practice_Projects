#include "kbd.h"
#include "ram.h"
#include <iostream>
#include <vector>

#define CYCLE for (int i = 0; i < 8; ++i)

void input() {
    std::cout << "Input eight numbers:\n";
    CYCLE {
        int number = 0;
        std::cout << i + 1 << " number: ";
        std::cin >> number;
        write(i, number);
    }
}