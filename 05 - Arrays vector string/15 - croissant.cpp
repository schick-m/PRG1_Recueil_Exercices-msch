#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <span>
#include "annexe.h"
using namespace std;


/** @brief Vérifier la croissance stricte des entiers ; un tableau vide ou à un élément est accepté. */
bool est_strictement_croissant(const vector<int>& v) {
    bool is_croissant = true;

    if (v.size() > 1) {
        for (int i = 0; i + 1 < v.size(); i++) {
            if (v.at(i) > v.at(i + 1)) {
                is_croissant = false;
            }
        }
    }

    return is_croissant;
}

int main() {
   for (vector<int> const& v:
           {vector<int>{1, 2, 3, 4, 6, 9},
            {1, 2, 3, 4, 6, 5},
            {1, 2, 3, 3, 4, 4},
            {1},
            {}})
      cout << to_string(v)
           << (est_strictement_croissant(v) ? " est" : " n'est pas")
           << " strictement croissant" << endl;

    return EXIT_SUCCESS;
}
