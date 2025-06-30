#include "gpu.h"
#include "ram.h"
#include <iostream>

#define CYCLE for (int i = 0; i < 8; ++i)

void display() {
    CYCLE std::cout << read(i) << " ";
    std::cout << std::endl;
}