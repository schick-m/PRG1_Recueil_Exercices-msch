#include <iostream>
using namespace std;

int main() {

   int n, m;
   do {
      cout << "Donnez 2 nombres entiers positifs : ";
      cin >> n >> m;
   } while (n <= 0 or m <= 0);

   // Calcul du ppmc
   int ppmc = m;
   while (ppmc % n != 0)
      ppmc += m;

   cout << "ppmc(" << n << "," << m << ") = " << ppmc << endl;
}
