#include <iostream>
#include <cstdlib>
#include "annexe.h"
using namespace std;

void remplacer_valeurs_paires(vector<int>& v, int valeur);

int main() {
    vector<int> v{1, 2, 3, 4, 3, 6, 4, 1, 2};
    cout << to_string(v) << " -> ";
    remplacer_valeurs_paires(v, 0);
    cout << to_string(v) << endl;

    vector<int> a{3, 4, 5, 6, 2, 4, 3};
    cout << to_string(a) << " -> ";
    remplacer_valeurs_paires(a, -1);
    cout << to_string(a) << endl;
    return EXIT_SUCCESS;
}

void remplacer_valeurs_paires(vector<int>& v, int valeur) {
    for (int& element : v) {
        if (element % 2 == 0) {
            element = valeur;
        }
    }
}
