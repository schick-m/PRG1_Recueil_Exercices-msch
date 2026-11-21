#include <iostream>
#include <cstdlib>
#include "annexe.h"
using namespace std;

void rotateRight(vector<int>& v);

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << to_string(v) << " -> ";
    rotateRight(v);
    cout << to_string(v) << endl;
    return EXIT_SUCCESS;
}

void rotateRight(vector<int>& v) {
    if (v.size() < 2) {
        return;
    }
    int dernier = v.back();
    for (size_t i = v.size() - 1; i > 0; --i) {
        v[i] = v[i - 1];
    }
    v[0] = dernier;
}
