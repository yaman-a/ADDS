#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"

#include <unordered_map>

class Human : public Player {
    private:
    string name;
    std::unordered_map<std::string, Move*> moveMap;
    public:
    Human();
    Human(string name);
    Move* makeMove() override;
    string getName() override;
};


#endif // HUMAN_H