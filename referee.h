#ifndef REFEREE_H
#define REFEREE_H

#include "player.h"

class referee
{
private:
    
public:
    referee();
    ~referee();
    player* refGame(player* player1, player* player2);
};




#endif // REFEREE_H
