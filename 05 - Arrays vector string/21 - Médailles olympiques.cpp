//
// Created by swiss on 17.11.2026.
//
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <array>

using namespace std;

const array<string,7> pays {"Allemagne", "Canada", "Chine", "Coree", "Etats-Unis", "Japon", "Russie"};
const array<string,3> type_medaille {"Or", "Argent", "Bronze"};

int total_medaille_pays(const string& pays) {

}

int total_medaille() {

}

int main() {

    int total_pays = total_medaille_pays(pays[1]);
    cout << "Medailles total du " << pays[1] << " : " << total_pays << endl;

    int total = total_medaille();
    cout << "Medailles total : " << total << endl;

    return EXIT_SUCCESS;
}