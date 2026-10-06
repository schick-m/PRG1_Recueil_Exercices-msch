#include <cmath>
#include <iostream>

using namespace std;

int main() {
   const double g = 9.81;

   double coefficient;
   do {
      cout << "Coefficient de rebond (0 <= coeff < 1) : ";
      cin >> coefficient;
   } while (coefficient < 0.0 or coefficient >= 1.0);

   double hauteur;
   do {
      cout << "Hauteur initiale [m]  (h0 >= 0)        : ";
      cin >> hauteur;
   } while (hauteur < 0.0);

   int nb_rebonds;
   do {
      cout << "Nombre de rebonds     (n >= 0)         : ";
      cin >> nb_rebonds;
   } while (nb_rebonds < 0);

   for (int i = 0; i < nb_rebonds; ++i) {
      const double vitesse_avant = sqrt(2.0 * g * hauteur);
      const double vitesse_apres = coefficient * vitesse_avant;
      hauteur = vitesse_apres * vitesse_apres / (2.0 * g);
   }

   cout << "La hauteur atteinte apres "
        << nb_rebonds << " rebond" << (nb_rebonds > 1 ? "s" : "")
        << " : " << hauteur << " [m]" << endl;

   return 0;
}
