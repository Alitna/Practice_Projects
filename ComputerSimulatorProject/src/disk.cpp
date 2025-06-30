#include "disk.h"
#include "ram.h"
#include <fstream>
#include <iostream>

#define CYCLE for (int i = 0; i < 8; ++i)

const std::string FILE_NAME = "data.txt";

void save() {
    std::ofstream file(FILE_NAME);
    if (file.is_open()) {
        CYCLE file << read(i) << " ";
        std::cout << "The data is saved.\n";
    } else std::cerr << "File opening error!\n";
    file.close();
}

void load() {
    std::ifstream in_file(FILE_NAME);
    if (in_file.is_open()) {
        int number = 0;
        int i = 0;
        while (!in_file.eof()) {
            in_file >> number;
            write(i, number);
            i++;
        }
        std::cout << "The data is uploaded.\n";
    } else std::cout << "File is empty.\n";
    in_file.close();
}