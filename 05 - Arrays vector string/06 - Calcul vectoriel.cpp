//
// Created by swiss on 06.11.2026.
//
#include <iostream>
#include <array>
#include <sstream>
using namespace std;

using Vec3d = array<double,3>;

string to_string(const Vec3d& vec) {
     stringstream ss;

     ss << '(' << vec[0] << ','
        << vec[1] << ','
        << vec[2] << ')';

     return ss.str();
}

Vec3d produit(Vec3d &a, double b) {
     Vec3d c(a);
     for (double& element : c) {
          element *= b;
     }
     return c;
}

double produit_scalaire(Vec3d a, Vec3d b) {
     double result = 0.0;
     for (size_t i = 0; i < 3; i++) {
          result += a[i] * b[i];
     }

     return result;
}

Vec3d produit_vectoriel(Vec3d a, Vec3d b) {
     return {
          a[1]*b[2] - a[2]*b[1],
          a[2]*b[0] - a[0]*b[2],
          a[0]*b[1] - a[1]*b[0]
     };
}

int main() {
    Vec3d a{1., 2., 3.};
    Vec3d b{2., 4., 3.};
    cout << "a = " << to_string(a) << endl
         << "b = " << to_string(b) << endl;

    Vec3d c = produit(a, 2.);
    cout << "c = a*2 = " << to_string(c) << endl;

    cout << "a.b = " << produit_scalaire(a, b)
         << ", a.c = " << produit_scalaire(a, c)
         << ", b.c = " << produit_scalaire(b, c) << endl;

    Vec3d d = produit_vectoriel(a, b);
    cout << "d = a^b = " << to_string(d) << endl;
    cout << "a.d = " << produit_scalaire(a, d)
         << ", b.d = " << produit_scalaire(b, d) << endl;

    Vec3d e = produit_vectoriel(a, a);
    cout << "e = a^a = " << to_string(e) << endl;
}