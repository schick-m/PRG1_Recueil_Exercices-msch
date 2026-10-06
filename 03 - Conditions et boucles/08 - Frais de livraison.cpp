#include <iostream>

using namespace std;

int main() {

   const double frais_suisse_sauf_exception =  5.00;
   const double frais_tessin_grison         =  7.00;
   const double frais_liechtenstein         =  7.00;
   const double frais_international         = 10.00;

   double frais; // frais calculÃ©s

   cout << "Livraison en Suisse ? (O/N) ";
   char reponse1; cin >> reponse1;

   if (reponse1 == 'O') {
      cout << "Livraison au GR ou TI ? (O/N) ";
      char reponse2; cin >> reponse2;
      frais = (reponse2 == 'O') ?
              frais_tessin_grison :
              frais_suisse_sauf_exception;
   } else {
      cout << "Livraison au Liechtenstein ? (O/N) ";
      char reponse2; cin >> reponse2;
      frais = (reponse2 == 'O') ?
              frais_liechtenstein :
              frais_international;
   }

   cout << "Frais : " << frais << " CHF" << endl;
}
