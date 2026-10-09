//
// Created by swiss on 09.10.2026.
//
#include <iostream>
using namespace std;

double calcul_volume_pyramide(double x, double y, double z) {
    double result = (x * y * z) / 3;
    return result;
}
int main() {
    cout << calcul_volume_pyramide(10, 3.5, 12) << endl;
    cout << calcul_volume_pyramide(3.6, 2.4, 2.7) << endl;

    return EXIT_SUCCESS;
}