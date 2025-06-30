#include "simulatorOperations.h"
#include <iostream>

#define INPUT_ONE_POINT(n) \
    n == 1 ? std::cout << "Incorrect location of the operation. Input the coordinates of the point again:\n" \
           : std::cout << "Input the coordinates of the point:\n"; \
    std::cout << "- X: "; \
    std::cin >> x; \
    std::cout << "- Y: "; \
    std::cin >> y;

void scalpel(double& x1, double& y1, double& x2, double& y2) {
    std::cout << "A cut was made between the coordinates: ("
              << x1 << "; " << y1 << ") and (" << x2 << "; " << y2 << ")" 
              << std::endl;
}

void checking(double& xBeginningScalpel, double& yBeginningScalpel, double& xEndScalpel, double& yEndScalpel, double& x, double& y) {
    INPUT_ONE_POINT(0);
    if (xBeginningScalpel > xEndScalpel && yBeginningScalpel > yEndScalpel) {
        while (x < xEndScalpel || x > xBeginningScalpel || y < yEndScalpel || y > yBeginningScalpel) {
            INPUT_ONE_POINT(1);
        }
    } else if (xBeginningScalpel > xEndScalpel && yBeginningScalpel < yEndScalpel) {
        while (x < xEndScalpel || x > xBeginningScalpel || y < yBeginningScalpel || y > yEndScalpel) {
            INPUT_ONE_POINT(1);
        }
    } else if (xBeginningScalpel < xEndScalpel && yBeginningScalpel < yEndScalpel) {
        while (x < xBeginningScalpel || x > xEndScalpel || y < yBeginningScalpel || y > yEndScalpel) {
            INPUT_ONE_POINT(1);
        }
    } else /*if (xBeginningScalpel < xEndScalpel && yBeginningScalpel > yEndScalpel)*/ {
        while (x < xBeginningScalpel || x > xEndScalpel || y < yEndScalpel || y > yBeginningScalpel) {
            INPUT_ONE_POINT(1);
        }
    }
}

void hemostat(double& x, double& y) {
    std::cout << "A clamp was made at a point with coordinates: "
              << x << ", " << y << std::endl;
}

void tweezers(double& x, double& y) {
    std::cout << "Tweezers were applied at the point with coordinates: "
              << x << ", " << y << std::endl;
}

void suture(double& x1, double& y1, double& x2, double& y2) {
    std::cout << "A seam was made between the coordinates: ("
              << x1 << "; " << y1 << ") and (" << x2 << "; " << y2 << ")" 
              << std::endl;
}