#include <iostream>
#include <string>
#include "bigNumCalc.h"

int main() {
    bigNumCalc calculator;
    
    std::string input;
    std::cout << "Enter an expression in the format 'num1 operator num2': ";
    std::getline(std::cin, input);
    
    std::string delimiter = " ";
    size_t pos = 0;
    std::string token;
    std::string num1, op, num2;
    
    pos = input.find(delimiter);
    num1 = input.substr(0, pos);
    input.erase(0, pos + delimiter.length());
    
    pos = input.find(delimiter);
    op = input.substr(0, pos);
    input.erase(0, pos + delimiter.length());
    
    num2 = input;
    
    std::list<int> result;
    if (op == "+") {
        result = calculator.add(calculator.buildBigNum(num1), calculator.buildBigNum(num2));
    } else if (op == "-") {
        result = calculator.sub(calculator.buildBigNum(num1), calculator.buildBigNum(num2));
    } else {
        std::cout << "Invalid operator\n";
        return 1;
    }
    
    std::cout << "Result: ";
    for (int digit : result) {
        std::cout << digit;
    }
    std::cout << std::endl;
    
    return 0;
}
