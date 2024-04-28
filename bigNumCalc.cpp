#include "bigNumCalc.h"

std::list<int> bigNumCalc::buildBigNum(std::string numString) {
    std::list<int> bigNum;
    for (char digit : numString) {
        bigNum.push_back(digit - '0');
    }
    return bigNum;
}

std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> ans;
    int carry = 0;
    auto i = num1.rbegin(), j = num2.rbegin();
    while (i != num1.rend() || j != num2.rend() || carry) {
        if (i != num1.rend()) {
            carry += *i;
            i++;
        }
        if (j != num2.rend()) {
            carry += *j;
            j++;
        }
        ans.push_front(carry % 10);
        carry /= 10;
    }
    return ans;
}

std::list<int> bigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> ans;
    int borrow = 0;
    auto i = num1.rbegin(), j = num2.rbegin();
    while (i != num1.rend() || j != num2.rend()) {
        int digit1 = 0;
        int digit2 = 0;
        if (i != num1.rend()) {
            digit1 = *i;
            i++;
        }
        if (j != num2.rend()) {
            digit2 = *j;
            j++;
        }
        int result = digit1 - digit2 - borrow;
        if (result < 0) {
            result += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        ans.push_front(result);
    }
    while (ans.size() > 1 && ans.front() == 0) {
        ans.pop_front();
    }
    return ans;
}

std::list<int> bigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    std::list<int> product;
    int carry = 0;
    int multiplier = num2.front();
    for (auto i = num1.rbegin(); i != num1.rend(); i++) {
        int digit = *i;
        int prod = digit * multiplier + carry;
        product.push_front(prod % 10);
        carry = prod / 10;
    }
    if (carry != 0) {
        product.push_front(carry);
    }
    return product;
}