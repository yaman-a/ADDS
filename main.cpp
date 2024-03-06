#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    // Create players
    Human human1("player1");
    Human human2("player2");

    // Create referee
    Referee referee;

    // Adjudicate the game
    Player* winner = referee.refGame(&human1, &human2);

    // Print the result
    if (winner == nullptr) {
        std::cout << "It's a Tie." << std::endl;
    } else {
        std::cout << winner->getName() << " Wins." << std::endl;
    }

    return 0;
}
