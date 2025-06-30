#include "ram.h"
#include <vector>

std::vector<int> buffer(8);

void write(int& i, int& number) {
    buffer[i] = number;
}

int read(int& i) {
    return buffer[i];
}