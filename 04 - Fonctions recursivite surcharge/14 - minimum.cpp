//
// Created by swiss on 16.10.2026.
//
#include <iostream>
#include <cstdlib>
using namespace std;

int& min(int& a, int& b, int& c);
int& min(int& b, int& c);

int main() {

    int a = 5;
    int b = 2;
    int c = 9;

    cout << min(a, b, c);
    min(a, b, c) = 1;
    int& d = min(a, b, c);
    cout << d << endl;

    return EXIT_SUCCESS;
}

int& min(int& b, int& c) {
    return (b < c) ? b : c;
}
int& min(int& a, int& b, int& c) {
    return (a < b) ? a : min(b, c);
}