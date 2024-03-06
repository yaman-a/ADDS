#include "Winner.h"

Winner::Winner() {

}

Move* Winner::getWinner(Move* move1, Move* move2) {
    if (move1 == nullptr || move2 == nullptr) {
        return nullptr;
    }

    if (move1->getName() == move2->getName()) {
        return nullptr;
    }

    if ((move1->getName() == "Rock" && move2->getName() == "Scissors") ||
        (move1->getName() == "Scissors" && move2->getName() == "Paper") ||
        (move1->getName() == "Paper" && move2->getName() == "Rock")) {
            return move1;
    }
    
    if ((move1->getName() == "Monkey" && (move2->getName() == "Ninja" || move2->getName() == "Robot")) ||
    (move1->getName() == "Robot" && (move2->getName() == "Ninja" || move2->getName() == "Zombie")) || 
    (move1->getName() == "Pirate" && (move2->getName() == "Robot" || move2->getName() == "Monkey")) ||
    (move1->getName() == "Ninja" && (move2->getName() == "Pirate" || move2->getName() == "Zombie")) ||
    (move1->getName() == "Zombie" && (move2->getName() == "Pirate" || move2->getName() == "Monkey"))) {
        return move1;
    }

    if ((move1->getName() == "Rock" || move1->getName() == "Paper" || move1->getName() == "Scissors") &&
    (move2->getName() == "Monkey" || move2->getName() == "Ninja" || move2->getName() == "Pirate" || move2->getName() == "Zombie" || move2->getName() == "Robot")) {
        return nullptr;
    }

    if ((move2->getName() == "Rock" || move2->getName() == "Paper" || move2->getName() == "Scissors") &&
    (move1->getName() == "Monkey" || move1->getName() == "Ninja" || move1->getName() == "Pirate" || move1->getName() == "Zombie" || move1->getName() == "Robot")) {
        return nullptr;
    }



    return move2;
}