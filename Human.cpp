#include "Human.h"
#include <bits/stdc++.h>

Human::Human(string name) : name(name) {}

char Human::makeMove() {
    char move;
    std::cout << "Enter Move: ";
    std::cin >> move;
    return move;
}

string Human::getName() {
    return name;
}