#include "Referee.h"


Referee::Referee() {
}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
    
    std::string move1Name = move1->getName();
    std::string move2Name = move2->getName();


    // if player1's move beats player2, return player one, and vice versa.
    if (move1->beats.find(move2Name) != move1->beats.end()) {
        return player1;
    } else if (move2->beats.find(move1Name) != move2->beats.end()) {
        return player2;
    } 

    return nullptr;

}