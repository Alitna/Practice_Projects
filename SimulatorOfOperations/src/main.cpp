#include "simulatorOperations.h"
#include <iostream>
#include <string>

#define INPUT_TWO_POINTS(x1, y1, x2, y2) \
    std::cout << "Input the coordinates of the beginning and end: \n" \
              << "- X beginning: "; \
    std::cin >> x1; \
    std::cout << "- Y beginning: "; \
    std::cin >> y1; \
    std::cout << "- X end: "; \
    std::cin >> x2; \
    std::cout << "- Y end: "; \
    std::cin >> y2;

int main() {
    std::cout << "\t\t***************************\n"
              << "\t\t* Simulator of operations *\n"
              << "\t\t***************************\n";

    std::string command = "unknown";
    bool operationBegun = false;
    double xBeginningScalpel = 0, yBeginningScalpel = 0, xEndScalpel = 0, yEndScalpel = 0, 
           xBeginningSuture = 0,  yBeginningSuture = 0,  xEndSuture = 0,  yEndSuture = 0,
           x = 0, y = 0;

    while (true) {
        std::cout << "Input command: ";
        std::cin >> command;

        if (!operationBegun) {
            while (command != "scalpel") {
                std::cout << "The operation always starts with the command \"scalpel\".\n";
                std::cout << "Input command: ";
                std::cin >> command;
            }
            
            if (command == "scalpel") {
                operationBegun = true;
                INPUT_TWO_POINTS(xBeginningScalpel, yBeginningScalpel, xEndScalpel, yEndScalpel);
                scalpel(xBeginningScalpel, yBeginningScalpel, xEndScalpel, yEndScalpel);
            }

        } else {
            if (command == "hemostat") {
                checking(xBeginningScalpel, yBeginningScalpel, xEndScalpel, yEndScalpel, x, y);
                hemostat(x, y);
            
            } else if (command == "tweezers") {
                checking(xBeginningScalpel, yBeginningScalpel, xEndScalpel, yEndScalpel, x, y);
                tweezers(x, y);
    
            } else if (command == "suture") {
                INPUT_TWO_POINTS(xBeginningSuture,  yBeginningSuture,  xEndSuture,  yEndSuture);
               
                if (((xBeginningScalpel == xBeginningSuture && yBeginningScalpel == yBeginningSuture) ||
                     (xBeginningScalpel == xEndSuture && yBeginningScalpel == yEndSuture)) &&
                    ((xEndScalpel == xBeginningSuture && yEndScalpel == yBeginningSuture) ||
                     (xEndScalpel == xEndSuture && yEndScalpel == yEndSuture))) {
                        suture(xBeginningSuture, yBeginningSuture, xEndSuture, yEndSuture);
                        break;        
                } else std::cout << "It needs to be sewn up where it was cut.\n";
                
            } else std::cerr << "Invalid input.\n";
        }
    }
    std::cout << "The operation is completed.\n";
}