#include "Human.h"
#include <bits/stdc++.h>

Human::Human() {
    std::cout << "Enter your name: ";
    std::cin>> name;
}

Human::Human(const string& name) : name(name) {}

char Human::makeMove() {
    char move;
    std::cout << "Enter Move: ";
    std::cin >> move;
    return move;
}

string Human::getName() {
    return name;
}