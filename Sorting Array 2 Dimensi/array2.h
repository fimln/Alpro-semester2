//Alfi Maulana Akbar
//2000018026 - Kode Soal B
#include <iostream>
#include <conio.h>
#include "array1.h"
using namespace std;

void array::swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void array::arr_a() {
    cout << "Array a : " << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << a[i][j] << " ";
            c[indeks] = a[i][j];
            indeks++;
        }
        cout << endl;
    }
}

void array::arr_b() {
    cout << "\nArray b : \n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << b[i][j] << " ";
            c[indeks] = b[i][j];
            indeks++;
        }
        cout << endl; 
    }
}

void array::gabungan() {
    cout << "\nArray gabungan a dan b : \n";
    for (int i = 0; i < n; i++) {
        cout << c[i] << " "; 
    }
}

ostream& operator << (ostream& out, array& keluaran) {
    out << "\n\nArray gabungan yang sudah di sortir : \n";
    int i;
    for (i = 0; i < keluaran.n; i++)
        out << keluaran.c[i] << " ";
    out << endl;
    return out;
}