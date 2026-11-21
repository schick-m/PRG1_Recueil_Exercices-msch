#include <iostream>
#include <cstdlib>
#include <array>
#include <string>
#include <sstream>
using namespace std;

using Vec3 = array<double, 3>;
using Matrice3x3 = array<Vec3, 3>;

/** @brief Retourner le produit d’une matrice 3 x 3 par un vecteur. */
Vec3 produit(const Matrice3x3& m, const Vec3& v) {
    Vec3 resultat{};
    for (size_t i = 0; i < m.size(); ++i) {
        for (size_t j = 0; j < v.size(); ++j) {
            resultat[i] += m[i][j] * v[j];
        }
    }
    return resultat;
}

/** @brief Convertir un Vec3 en texte au format [1, 2, 3]. */
string to_string(const Vec3& v) {
    stringstream ss;
    ss << '[';
    for (size_t i = 0; i < v.size(); ++i) {
        if (i > 0) {
            ss << ", ";
        }
        ss << v[i];
    }
    ss << ']';
    return ss.str();
}

/** @brief Convertir une Matrice3x3 en texte, une ligne de matrice par ligne et entre crochets. */
string to_string(const Matrice3x3& m) {
    stringstream ss;
    ss << '[';
    for (size_t i = 0; i < m.size(); ++i) {
        if (i > 0) {
            ss << "\n ";
        }
        ss << to_string(m[i]);
    }
    ss << ']';
    return ss.str();
}

int main() {

   Matrice3x3 m = {1, 1, 0, 0, 2, 0, 0, 0, 1};
   Vec3 v = {1, 2, 3};
   Vec3 w = produit(m,v);

   cout << to_string(m) << " * "
        << to_string(v) << " = "
        << to_string(w) << endl;
    return EXIT_SUCCESS;
}
