#include <iostream>
using namespace std;

const char etoile = '*';
const char blanc = ' ';

int main() {

   int hauteur;
   do {
      cout << "Hauteur du triangle (h > 0) : ";
      cin >> hauteur;
   } while (hauteur <= 0);

   cout << endl;
   for (int ligne = 0; ligne < hauteur; ++ligne) {
      for (int i = 0; i < hauteur - ligne - 1; ++i)
         cout << blanc;
      for (int i = 0; i < 1 + 2 * ligne; ++i)
         cout << etoile;
      

      for (int i = 0; i < hauteur - ligne - 1; ++i)
         cout << blanc;
      cout << endl;
   }
}
