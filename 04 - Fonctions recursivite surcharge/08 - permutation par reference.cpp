//
// Created by swiss on 09.10.2026.
//
#include <iostream>
using namespace std;


void permutation_droite(double& a, double& b, double& c) {
    double t = a;
    a = b;
    b = c;
    c = t;
}
int main() {
    double a = 0., b = 1., c = 2.;
    permutation_droite(a, b, c);
    cout << "Valeur A = " << a << endl;
    cout << "Valeur B = " << b << endl;
    cout << "Valeur C = " << c << endl;
    return EXIT_SUCCESS;
}