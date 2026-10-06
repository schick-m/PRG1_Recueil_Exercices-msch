#include <iostream>

using namespace std;

int main() {

   cout << "Entrez la note UNIGE : ";
   double note;
   cin >> note;

   if (note < 0. or note > 6.) {
      cout << "Erreur";
   } else {
      cout << "La note ECTS est : ";
      if (note < 4.) {
         cout << 'F';
      } else if (note < 4.25) {
         cout << 'E';
      } else if (note < 4.50) {
         cout << 'D';
      } else if (note < 4.75) {
         cout << 'C';
      } else if (note < 5.25) {
         cout << 'B';
      } else {
         cout << 'A';
      }
   }
   cout << endl;
}
