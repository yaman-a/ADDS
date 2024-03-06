#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"
#include "Winner.h"

class Referee {
private:
    
public:
    Referee();
    ~Referee();
    Player* refGame(Player* player1, Player* player2);
};




#endif // REFEREE_H
