#include "cpu.h"
#include "ram.h"
#include <iostream>

#define CYCLE for (int i = 0; i < 8; ++i)

void comput() {
    int sum = 0;
    CYCLE sum += read(i);
    std::cout << "The sum of eight numbers: " << sum << std::endl;
}