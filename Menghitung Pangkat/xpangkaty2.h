// nama file : xpangkaty2.h
#include <iostream>
#include <conio.h>
#include "xpangkaty1.h"
using namespace std;

istream& operator >> (istream& in, Pangkat& masukan) {
    cout << "Masukkan nilai x : ";
    in >> masukan.x;
    cout << "Masukkan nilai y : ";
    in >> masukan.y;
    return in;
}

ostream& operator << (ostream& out, Pangkat& keluaran) {
    out << "\nHasil x pangkat y : " << keluaran.hasil;
    return out;
}