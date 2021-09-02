#include <iostream>
#include <iomanip>
#include <conio.h>
#include "vektor.h"
using namespace std;

main () {
    Vektor X, Y, Z;
    cin >> X;
    cout << X;
    cin >> Y;
    cout << Y;
    Z.penjumlahan_vektor(X,Y);
    cout << "\nHasil penjumlahan 2 vektor\n" << Z;
    Z.perkalian_vektor(3,X);
    cout << "\nHasil perkalian skalar dengan vektor\n" << Z;
    getch();
}