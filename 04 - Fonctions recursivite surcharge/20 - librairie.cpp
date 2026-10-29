//
// Created by swiss on 29.10.2026.
//
#include <iostream>
#include <cstdlib>

#include "annexe.h"
using namespace std;

int main () {

    int valeur = saisir("Votre saisie", 0, 10);
    afficher ("votre saisie", valeur);

    return EXIT_SUCCESS;
}