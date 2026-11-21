#include <cstdlib>
#include <string>
#include <utility>
#include <iostream>

using namespace std;

/** @brief Retourner le texte avec toutes les occurrences du mot remplacées, sans modifier le texte original. */
string remplacer_occurences() {

}

int main() {
   string texte{"Les sanglots longs de violons de l'automne "
                "bercent mon coeur d'une langueur monotone"};
   cout << texte << endl;
   for (auto p: {pair<string, string>{"on", "ON"},
                 {"on", "o"},
                 {"on", "oin"},
                 {"o", "ooo"}}) {
      cout << remplacer_occurences(texte, p.first, p.second) << endl;
   }
    return EXIT_SUCCESS;
}
