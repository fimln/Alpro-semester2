#include <iostream>
#include <conio.h>
#include "sort1.h"
using namespace std;

void sort::swap (int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

ostream& operator << (ostream& out, sort& keluaran) {
    int i;
    cout << "Array yang sudah terurut : \n";
    for (i = 0; i < keluaran.n; i++)
        out << keluaran.arr[i] << " ";
    out << endl;
    return out;
}