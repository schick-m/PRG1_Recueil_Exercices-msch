#include <iostream>
using namespace std;

int main() {
   cout << "Entrez le montant initial > ";
   double montant_initial; // en CHF
   cin >> montant_initial;

   cout << "Entrez le taux d'interet annuel en % > ";
   double taux_interet_annuel; // en %
   cin >> taux_interet_annuel;

   cout << "Entrez le nombre d'annees > ";
   int nb_annees;
   cin >> nb_annees;

   double montant = montant_initial;
   for (int annee = 0; annee < nb_annees; ++annee) {
      montant *= (1. + taux_interet_annuel / 100.);
   }

   cout << "Le montant disponible aprÃ¨s "
        << nb_annees << " an" << (nb_annees > 1 ? "s" : "")
        << " est de " << montant << " CHF" << endl;
}
