#include "Human.h"

Human::Human() {
    name = "Human";
}

Human::Human(string name) : name(name) {}

Move* Human::makeMove() {
    std::string moveName;
    std::cout << "Enter Move: ";
    std::cin >> moveName;

    moveMap = {
        {"Rock", new Rock()},
        {"Paper", new Paper()},
        {"Scissors", new Scissors()},
        {"Monkey", new Monkey()},
        {"Ninja", new Ninja()},
        {"Pirate", new Pirate()},
        {"Robot", new Robot},
        {"Zombie", new Zombie},
    };

    return moveMap[moveName];

}

string Human::getName() {
    return name;
}