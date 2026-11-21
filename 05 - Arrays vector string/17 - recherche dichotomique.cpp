#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <span>
#include "annexe.h"
using namespace std;

bool recherche_recursive(const vector<int>& v, int e, int start, int end) {


    if (start == end) {
        return false;
    }
    size_t indice = (start + end) / 2;

    if (v[indice] == e) {
        return true;
    }
    if (v[indice] < e) {
        return recherche_recursive(v, e, indice + 1, end);
    }
    if (v[indice] > e) {
        return recherche_recursive(v, e, start, indice);
    }
}

/** @brief Rechercher récursivement un entier par dichotomie dans un tableau trié (vector, array ou tableau C, constants ou non). */
bool recherche(const vector<int>& v, int e) {

    int start = 0;
    int end = v.size();

    if (v.size() == 0) {
        return false;
    }
    return recherche_recursive(v, e, start, end);
}

int main() {
   for (vector<int> const& v:
           {vector<int>{1, 2, 3, 5, 7, 11, 13, 17},
            {1, 3, 5, 7, 9, 11, 13, 15, 17},
            {2, 4, 6, 8, 10, 12, 14, 16, 18},
            {5, 10, 15, 20},
            {11},
            {1},
            {}
           }) {
      for (int e: {3, 11, 15}) {
         cout << to_string(v)
              << (recherche(v, e) ? " contient " : " ne contient pas ")
              << e << endl;
      }
   }
    return EXIT_SUCCESS;
}
