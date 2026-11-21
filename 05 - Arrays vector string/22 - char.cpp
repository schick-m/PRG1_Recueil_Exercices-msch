#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
using namespace std;

/** @brief Convertir un booléen en texte vrai ou faux. */
string vraiFaux(bool valeur) {
    return valeur ? "vrai" : "faux";
}

/** @brief Saisir un caractère, afficher son code ASCII et indiquer : lettre, minuscule, chiffre et ponctuation. */
int main() {
    unsigned char caractere;
    cout << "Entrez un caractere : ";
    if (!(cin >> caractere)) {
        return EXIT_FAILURE;
    }
    cout << endl
         << "Code ASCII de '" << caractere << "'                   : "
         << static_cast<int>(caractere) << endl
         << "'" << caractere << "' est une lettre de l'alphabet    : "
         << vraiFaux(isalpha(caractere)) << endl
         << "'" << caractere << "' est une lettre minuscule        : "
         << vraiFaux(islower(caractere)) << endl
         << "'" << caractere << "' est un chiffre                  : "
         << vraiFaux(isdigit(caractere)) << endl
         << "'" << caractere << "' est un caractere de ponctuation : "
         << vraiFaux(ispunct(caractere)) << endl;
    return EXIT_SUCCESS;
}
