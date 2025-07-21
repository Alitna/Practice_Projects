#include "golf.h"
#include <iostream>

int main() {
    int numberPlayers = 0;
    std::cout << "Input the number of players: ";
    std::cin >> numberPlayers;

    golf player[numberPlayers];

    std::cout << "Fill in the information about the players" << std::endl;
    for (int i = 0; i < numberPlayers; i++) {
        std::cout << i + 1 << " player: " << std::endl;
        setgolf(player[i]);
    }

    int changeTheHandicap = 0;
    std::cout << "Would you like to change the handicap for any player?\n";
    std::cout << "Input: 1 - yes; 2 - no\n";
    std::cin >> changeTheHandicap;
    if (changeTheHandicap == 1) {
        std::cout << "Input the number of the player for whom you want to change the handicap: ";
        int playerIsNumber = 0;
        std::cin >> playerIsNumber;
        std::cout << "Input a new handicap for this player: ";
        int newHandicap = 0;
        std::cin >> newHandicap;
        handicap(player[playerIsNumber - 1], newHandicap);
    }

    std::cout << "List of games: " << std::endl;
    for (int i = 0; i < numberPlayers; i++)
        showgolf(player[i]);
}
