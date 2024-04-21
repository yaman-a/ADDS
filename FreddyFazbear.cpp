#include <iostream>
#include <string>

using namespace std;

typedef void standProudYourStrong;
typedef int GreenFN;
typedef string KidNamedFinger;

standProudYourStrong NahIdPrint(standProudYourStrong *sigma) {
    cout << sigma << endl;

    return;
}

GreenFN main() {
    KidNamedFinger *sigma = new KidNamedFinger;

    *sigma = "print";

    NahIdPrint(sigma);

    return -1;
}
