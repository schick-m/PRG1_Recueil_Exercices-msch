#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>
using namespace std;

/** @brief Lire les notes jusqu’à la saisie de 0. */
vector<double> lireNotes() {
    cout << "Entrez la liste de vos notes, 0 pour quitter :" << endl;
    vector<double> notes;
    double note;
    while (cin >> note && note != 0) {
        notes.push_back(note);
    }
    return notes;
}

/** @brief Calculer la moyenne d’une série de notes non vide. */
double moyenne(const vector<double>& notes) {
    double somme = 0;
    for (double note : notes) {
        somme += note;
    }
    return somme / static_cast<double>(notes.size());
}

/** @brief Saisir les notes jusqu’à 0, puis afficher leur nombre et leur moyenne avec deux décimales. */
int main() {
    vector<double> notes = lireNotes();
    cout << "nb de notes saisies = " << notes.size() << endl;
    if (notes.empty()) {
        cout << "Moyenne non calculable car aucune note saisie !" << endl;
    } else {
        cout << fixed << setprecision(2)
             << "La moyenne des notes saisies = " << moyenne(notes) << endl;
    }
    return EXIT_SUCCESS;
}
