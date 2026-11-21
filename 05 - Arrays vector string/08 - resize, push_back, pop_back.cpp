#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void my_resize(vector<int>& v, size_t taille, int valeur = 0);
void my_push_back(vector<int>& v, int valeur);
void my_pop_back(vector<int>& v);
void afficher(const vector<int>& v);

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6};
    my_push_back(v, 7);
    afficher(v);
    my_pop_back(v);
    afficher(v);
    my_pop_back(v);
    afficher(v);
    my_resize(v, 3);
    afficher(v);
    my_resize(v, 5, 1);
    afficher(v);
    my_resize(v, 8);
    afficher(v);
    return EXIT_SUCCESS;
}

void my_resize(vector<int>& v, size_t taille, int valeur) {
    while (v.size() < taille) {
        v.push_back(valeur);
    }
    while (v.size() > taille) {
        v.pop_back();
    }
}

void my_push_back(vector<int>& v, int valeur) {
    v.resize(v.size() + 1, valeur);
}

void my_pop_back(vector<int>& v) {
    if (!v.empty()) {
        v.resize(v.size() - 1);
    }
}

void afficher(const vector<int>& v) {
    for (int element : v) {
        cout << element << ' ';
    }
    cout << endl;
}
