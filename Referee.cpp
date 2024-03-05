#include "Referee.h"
#include <bits/stdc++.h>

Referee::Referee() {
}

Referee::~Referee() {
}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1 == nullptr || move2 == nullptr) {
        return nullptr;
    }

    if (move1->getName() == move2->getName()) {
        return nullptr;
    }

    // These if statements probably violate SOLID, try and find another way to do it.

    if ((move1->getName() == "Rock" && move2->getName() == "Scissors") ||
        (move1->getName() == "Scissors" && move2->getName() == "Paper") ||
        (move1->getName() == "Paper" && move2->getName() == "Rock")) {
            return player1;
    }

    if ((move1->getName() == "Monkey" && (move2->getName() == "Ninja" || move2->getName() == "Robot")) ||
    (move1->getName() == "Robot" && (move2->getName() == "Ninja" || move2->getName() == "Zombie")) || 
    (move1->getName() == "Pirate" && (move2->getName() == "Robot" || move2->getName() == "Monkey")) ||
    (move1->getName() == "Ninja" && (move2->getName() == "Pirate" || move2->getName() == "Zombie")) ||
    (move1->getName() == "Zombie" && (move2->getName() == "Pirate" || move2->getName() == "Monkey"))) {
        return player1;
    }
    

    return player2;
}