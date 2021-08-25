// nama file : kabisat2.h
#include <iostream>
#include <conio.h>
#include "kabisat1.h"
using namespace std;

istream& operator >> (istream& in, Kabisat& masukan) {
    cout << "Masukkan tahun : ";
    in >> masukan.tahun;
    return in;
}

ostream& operator << (ostream& out, Kabisat& keluaran) {
    out << "\nJenis tahun : " << keluaran.jenis;
    return out;
}