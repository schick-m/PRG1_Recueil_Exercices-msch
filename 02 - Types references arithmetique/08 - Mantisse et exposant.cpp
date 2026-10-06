//
// Exercice 08
// Created by Maxime Schick on 27.09.2026.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/**
 * @brief Point d'entrée du programme.
 * @return 0 si le programme s'est terminé correctement.
 */
int main() {

    double user_nbr = 0;
    cin >> user_nbr;

    double exposant10 = floor(log10(user_nbr));
    double exposant2 = floor(log2(user_nbr));

    double mentisse10 = user_nbr / pow(10, exposant10);
    double mentisse2 = user_nbr / pow(2, exposant2);

    cout << user_nbr  << " = " << mentisse10 << " * 10^" << exposant10 << endl;
    cout << user_nbr << " = " << mentisse2 << " * 10^" << exposant2 << endl;

    return EXIT_SUCCESS;
}
