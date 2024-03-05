#include "Human.h"
#include <bits/stdc++.h>

#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"

Human::Human(string name) : name(name) {}

Move* Human::makeMove() {
    std::string moveName;
    std::cout << "Enter Move: ";
    std::cin >> moveName;

    std::unordered_map<std::string, Move*> mp = {
        {"Rock", new Rock()},
        {"Paper", new Paper()},
        {"Scissors", new Scissors()},
        {"Monkey", new Monkey()},
        {"Ninja", new Ninja()},
        {"Pirate", new Pirate()},
        {"Robot", new Robot},
        {"Zombie", new Zombie},
    };

    return mp[moveName];

    // if (moveName == "Rock") {
    //     return new Rock;
    // } else if (moveName == "Paper"){
    //     return new Paper;
    // } else if (moveName == "Scissors"){
    //     return new Scissors;
    // } else if (moveName == "Monkey"){
    //     return new Monkey;
    // } else if (moveName == "Ninja"){
    //     return new Ninja;
    // } else if (moveName == "Pirate"){
    //     return new Pirate;
    // } else if (moveName == "Robot"){
    //     return new Robot;
    // } else if (moveName == "Zombie"){
    //     return new Zombie;
    // }

    return nullptr;
}

string Human::getName() {
    return name;
}