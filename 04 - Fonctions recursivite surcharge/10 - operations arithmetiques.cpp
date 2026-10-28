//
// Created by swiss on 16.10.2026.
//
#include <iostream>
#include <cstdlib>
using namespace std;

bool op_arithmetique(const double a, const double b, const char operateur, double& result);
void calcul(const double a, const double b, const char operateur);

int main() {

    double nombre1, nombre2;
    cout << "Donnez deux nombre reel : ";
    cin >> nombre1 >> nombre2;

    calcul(nombre1, nombre2, '+');
    calcul(nombre1, nombre2, '-');
    calcul(nombre1, nombre2, '*');
    calcul(nombre1, nombre2, '/');
    calcul(nombre1, nombre2, '?');

    return EXIT_SUCCESS;
}

bool op_arithmetique(const double a, const double b, const char operateur, double& result) {

    switch (operateur) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
        default: cout << "l'operateur " << operateur << " est illicite"; return false;
    }
    return true;
}

void calcul(const double a, const double b, const char operateur) {
    double result;
    if (op_arithmetique(a, b, operateur, result)) {
        cout << result << endl;
    } else {
        cout << "l'operateur " << operateur << " est illicite" << endl;
    }
}