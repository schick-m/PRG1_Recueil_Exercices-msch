#include <iostream>
#include <cstdlib>
#include "annexe.h"
using namespace std;

void supprimer_centre(vector<int>& v);

int main() {
    for (vector<int> v : {vector<int>{}, {1}, {1, 2}, {1, 2, 3},
                         {1, 2, 3, 4}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5, 6}}) {
        cout << to_string(v) << " -> ";
        supprimer_centre(v);
        cout << to_string(v) << endl;
    }
    return EXIT_SUCCESS;
}

void supprimer_centre(vector<int>& v) {
    if (v.empty()) {
        return;
    }
    size_t nombre = (v.size() % 2 == 0) ? 2 : 1;
    size_t debut = (v.size() - nombre) / 2;
    for (size_t i = debut + nombre; i < v.size(); ++i) {
        v[i - nombre] = v[i];
    }
    v.resize(v.size() - nombre);
}
