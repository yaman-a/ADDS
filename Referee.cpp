#include "Referee.h"
#include <bits/stdc++.h>


Referee::Referee() {
}

Referee::~Referee() {
}

Player* Referee::refGame(Player* player1, Player* player2) {

    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
    
    Winner W;

    Move* winner = W.getWinner(move1, move2);

    if (winner == move1) {
        return player1;
    } else if (winner == move2) {
        return player2;
    } else {
        return nullptr;
    }
}