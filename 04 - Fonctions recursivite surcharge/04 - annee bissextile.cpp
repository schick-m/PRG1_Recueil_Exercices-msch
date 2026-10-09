//
// Created by swiss on 09.10.2026.
//
#include <iostream>
using namespace std;

bool est_bissextile(int annee) {
    return (annee % 400 == 0) || (annee % 4 == 0 && annee % 100 != 0);
}

int main() {
    cout << boolalpha << est_bissextile(2021);
    return EXIT_SUCCESS;
}