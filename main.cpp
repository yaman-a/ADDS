#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    // Create players
    Human humanPlayer;
    Computer cpu;

    // Create referee
    Referee referee;

    // Adjudicate the game
    Player* winner = referee.refGame(&humanPlayer, &cpu);

    // Print the result
    if (winner == nullptr) {
        std::cout << "It's a Tie." << std::endl;
    } else {
        std::cout << winner->getName() << " Wins." << std::endl;
    }

    return 0;
}
