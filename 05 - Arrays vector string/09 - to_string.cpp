#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

/** @brief Retourner un vector d’entiers au format [1, 2, 3], ou [] s’il est vide. */
string to_string(const vector<int>& v) {
    stringstream ss;
    ss << '[';
    for (size_t i = 0; i < v.size(); ++i) {
        if (i > 0) {
            ss << ", ";
        }
        ss << v[i];
    }
    ss << ']';
    return ss.str();
}

int main() {
    const vector<int> v{1, 2, 3, 4, 5, 6};
    cout << to_string(v) << endl;
    return EXIT_SUCCESS;
}
