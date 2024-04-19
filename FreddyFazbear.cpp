#include <iostream>
#include <string>

using namespace std;

typedef void KidNamedFinger;
typedef int GreenFN;
typedef string standProudYourStrong;

KidNamedFinger NahIdPrint(standProudYourStrong *sigma) {
    cout << sigma << endl;

    return;
}

GreenFN main() {
    standProudYourStrong *sigma = new standProudYourStrong;

    *sigma = "print";

    NahIdPrint(sigma);

    return -1;
}
