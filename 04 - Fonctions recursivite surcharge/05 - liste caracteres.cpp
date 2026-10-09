//
// Created by swiss on 09.10.2026.
//
#include <iostream>
#include <cstdlib>
using namespace std;

bool listerCaracteres(char debut, char fin) {
    if (debut > fin) {
        return false;
    }

    for (char caractere = debut;; ++caractere) {
        cout << caractere;

        if (caractere == fin) {
            cout << endl;
            break;
        }
    }

    return true;
}

int main() {

    listerCaracteres('A', 'A');
    listerCaracteres('A', 'C');
    listerCaracteres('B', 'A');
    listerCaracteres('0', '9');
    listerCaracteres(65, 67);

    return EXIT_SUCCESS;
}
