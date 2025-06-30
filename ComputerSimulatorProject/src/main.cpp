#include "cpu.h"
#include "disk.h"
#include "kbd.h"
#include "gpu.h"
#include <iostream>
#include <string>

int main(){
    std::cout << "\t\t******************************\n"
              << "\t\t* Computer simulator project *\n"
              << "\t\t******************************\n";

    std::cout << "Exit - input \"exit\"\n";

    std::string command = "unknown";
    
    while (command != "exit") {
        std::cout << "Input command: ";
        std::cin >> command;

        if (command == "sum") comput();
        else if (command == "save") save();
        else if (command == "load") load();
        else if (command == "input") input();
        else if (command == "display") display();
        else if (command != "exit") std::cerr << "Incorrect input.\n";
    }
    std::cout << "You have logged out of the program.\n";   
}