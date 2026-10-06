//
// Exercice 05
// Created by Maxime Schick on 27.09.2026.
//
#include <iostream>
#include <limits>
using namespace std;

/**
 * @brief Point d'entrée du programme.
 * @return 0 si le programme s'est terminé correctement.
 */
int main() {
    using type = unsigned;
    cout << "Taille : " << sizeof(type) << endl;
    cout << "Bytes : " << numeric_limits<type>::digits + numeric_limits<type>::is_signed << endl;
    cout << "Plage : de " << static_cast<long long>(numeric_limits<type>::lowest()) << " -> " << static_cast<unsigned long long>(numeric_limits<type>::max()) << endl;
    cout << "Est signé ? : " << boolalpha << numeric_limits<type>::is_signed << endl;
    return EXIT_SUCCESS;
}
