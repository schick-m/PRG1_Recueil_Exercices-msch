//
// Created by swiss on 13.10.2026.
//
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

double retrait(double& arg_sc, double arg_r);
void afficher(const string& texte, double valeur);

int main() {
    double solde_courant = 500.0,
           premier_retrait = 300.0,
           retrait_effectif;

    retrait_effectif = retrait(solde_courant, premier_retrait);
    afficher("Montant retrait effectif : ", retrait_effectif);
    afficher("Solde courant            : ", solde_courant);

    retrait_effectif = retrait(solde_courant, premier_retrait);
    afficher("Montant retrait effectif : ", retrait_effectif);
    afficher("Solde courant            : ", solde_courant);

    return EXIT_SUCCESS;
}

double retrait( double& arg_sc, double arg_r) {
    // sld 100 | retrait 300
    double retrait_effectif;

    if (arg_sc < arg_r) {
        retrait_effectif = arg_sc;
    } else {
        retrait_effectif = arg_r;
    }

    arg_sc -= retrait_effectif;

    return retrait_effectif;
}

void afficher(const string& texte, double valeur) {
    cout << texte << valeur << endl;
}
