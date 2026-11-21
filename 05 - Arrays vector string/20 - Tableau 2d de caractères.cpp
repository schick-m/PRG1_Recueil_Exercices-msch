#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

using Ligne = vector<char>;
using Matrice = vector<Ligne>;

/** @brief Créer une matrice irrégulière dont les lignes vont de a-z jusqu’à a. */
Matrice creer() {
    Matrice m;
    for (size_t taille = 26; taille > 0; --taille) {
        Ligne ligne;
        for (size_t i = 0; i < taille; ++i) {
            ligne.push_back(static_cast<char>('a' + i));
        }
        m.push_back(ligne);
    }
    return m;
}

/** @brief Afficher chaque ligne de la matrice, sans séparateur entre les caractères. */
void afficher(const Matrice& m) {
    for (const Ligne& ligne : m) {
        for (char caractere : ligne) {
            cout << caractere;
        }
        cout << endl;
    }
}

int main() {
   Matrice m = creer();
   afficher(m);
    return EXIT_SUCCESS;
}
