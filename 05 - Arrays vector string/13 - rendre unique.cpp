#include <iostream>
#include <cstdlib>
#include "annexe.h"
using namespace std;

void rendre_unique(vector<int>& v);

int main() {
    for (vector<int> v : {vector<int>{}, {2}, {1, 2, 2, 2, 3, 1, 2, 4},
                         {2, 3, 3, 2, 2, 1}, {2, 2, 2}, {5, 4, 4, 3, 2, 2, 2, 3}}) {
        cout << to_string(v) << " -> ";
        rendre_unique(v);
        cout << to_string(v) << endl;
    }
    return EXIT_SUCCESS;
}

void rendre_unique(vector<int>& v) {
    if (v.empty()) {
        return;
    }
    size_t position = 1;
    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i] != v[position - 1]) {
            v[position] = v[i];
            ++position;
        }
    }
    v.resize(position);
}
