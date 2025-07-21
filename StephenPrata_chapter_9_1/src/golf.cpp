#include "golf.h"
#include <iostream>
#include <cstring>

void setgolf(golf & g, const char * name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g) {
    char name[Len];
    std::cout << "Input name: ";
    std::cin >> name;

    if (name == " ") return 0;
    else {
        int hc = 0;
        std::cout << "Input handicap: ";
        std::cin >> hc;
        setgolf(g, name, hc);
        return 1;
    }
}

void handicap(golf & g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf & g) {
    std::cout << "Name: " << g.fullname << std::endl;
    std::cout << "Handicap: " << g.handicap << std::endl;
}