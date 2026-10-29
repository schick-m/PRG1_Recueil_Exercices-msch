//
// Created by swiss on 29.10.2026.
//

#include "annexe.h"

#include <iostream>
#include <ostream>
using namespace std;


int saisir(const string& msg, int min, int max) {
    int saisie;
    do {
        cout << msg << " [" << min << ".." << max << "] " << endl;
        cin >> saisie;
    } while (saisie < min || saisie > max);
    return saisie;
}

void afficher(const std::string& msg, int valeur) {
    cout << msg << " : " << valeur << endl;
}
