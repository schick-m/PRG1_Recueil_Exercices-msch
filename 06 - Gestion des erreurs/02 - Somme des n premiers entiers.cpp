#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;


/** @brief Sommer les n premiers entiers naturels et signaler les cas problématiques par des exceptions prédéfinies. */
int sommeNPremiersEntiers() {

}
void test(int n);

int main() {

   test(-1);
   test(0);
   test(1);
   test(65535);
   test(65536);

   return EXIT_SUCCESS;
}

/** @brief Tester la somme pour une valeur de n et afficher le résultat ou l’exception ; code fourni dans l’énoncé. */
void test(int n) {
   cout << "sommeNPremiersEntiers(" << to_string(n) << ")";
   try {
      cout << " = " << sommeNPremiersEntiers(n) << endl;
   } catch (const exception& e) {
      cout << ": " << e.what() << endl;
   }
}
