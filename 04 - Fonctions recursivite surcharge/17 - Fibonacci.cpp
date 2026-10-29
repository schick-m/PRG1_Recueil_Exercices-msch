//
// Created by swiss on 29.10.2026.
//
#include <iostream>
#include <cstdlib>
using namespace std;


int fibo(int n);

int main() {
    cout << fibo(10) << endl;
    return EXIT_SUCCESS;
}

int fibo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}