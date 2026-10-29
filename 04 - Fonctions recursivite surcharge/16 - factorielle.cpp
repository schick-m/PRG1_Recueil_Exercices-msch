//
// Created by swiss on 29.10.2026.
//
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int factorielle(int n);

int main() {
    cout << factorielle(3) << endl;
    return EXIT_SUCCESS;
}

int factorielle(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorielle(n - 1);
}