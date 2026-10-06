#include <iostream>
using namespace std;

const double montant_minimum = 1000.;
const double taux_min = -5.; 
const double taux_max = +50.;
const int nb_annees_min = 1;

int main() {

   double montant_initial; // en CHF
   do {
      cout << "Entrez le montant initial > ";
      cin >> montant_initial;
   } while (montant_initial < montant_minimum);

   double taux_interet_annuel; // en %
   do {
      cout << "Entrez le taux d'interet annuel en % > ";
      cin >> taux_interet_annuel;
   } while (taux_interet_annuel > taux_max or taux_interet_annuel < taux_min );

   int nb_annees;
   do {
      cout << "Entrez le nombre d'annees > ";
      cin >> nb_annees;
   } while (nb_annees < nb_annees_min);

   double montant = montant_initial;
   for (int i = 0; i < nb_annees; ++i) {
      montant *= (1. + taux_interet_annuel / 100.);
   }

   cout << "Le montant disponible aprÃ¨s "
        << nb_annees << " an" << (nb_annees > 1 ? "s" : "")
        << " est de " << montant << " CHF" << endl;
}
