#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <span>
#include "annexe.h"
using namespace std;


/** @brief Retourner les valeurs sans doublons, dans l’ordre de leur première apparition (vector et array). */
vector<int> ensemble(const vector<int>& v) {
    vector<int> result;

    for (int e : v) {
        bool is_here = false;
        for (int f : result) {
            if (e == f) {
                is_here = true;
                break;
            }
        }
        if (!is_here) {
            result.push_back(e);
        }
    }
    return result;
}

int main() {
   for (vector<int> const& v:
           {vector<int>{ 1, 2, 4, 1, 2, 5, 3, 6, 2, 1},
            {1, 1, 1, 1, 1, 1},
            {1, 2, 3, 4},
            {1},
            {}
           })
      cout << to_string(v) << " -> " << to_string(ensemble(v)) << endl;

    return EXIT_SUCCESS;
}
