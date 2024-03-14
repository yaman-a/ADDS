#ifndef REVERSER_H
#define REVERSER_H

#include <string>

class Reverser {
    private:
    public:
    Reverser();
    int reverseDigit(int num);
    int digitHelper(int num, int ans);
    std::string reverseString(std::string s);
    std::string stringHelper(std::string input, std::string ans, int idx);
};

#endif // REVERSER_H