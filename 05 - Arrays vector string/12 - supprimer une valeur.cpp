#include <iostream>
#include <cstdlib>
#include "annexe.h"
using namespace std;

void supprimer_valeur(vector<int>& v, int valeur);

int main() {
    for (vector<int> v : {vector<int>{}, {2}, {1, 2, 2, 2, 3, 1, 2, 4},
                         {2, 3, 4, 3, 2, 1}, {2, 2, 2}, {5, 4, 3, 2, 1, 2}}) {
        cout << to_string(v) << " -> ";
        supprimer_valeur(v, 2);
        cout << to_string(v) << endl;
    }
    return EXIT_SUCCESS;
}

void supprimer_valeur(vector<int>& v, int valeur) {
    size_t position = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        if (v[i] != valeur) {
            v[position] = v[i];
            ++position;
        }
    }
    v.resize(position);
}
