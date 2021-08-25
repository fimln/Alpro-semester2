// nama file : bilanganrekursif2.h
#include <iostream>
#include <conio.h>
#include "bilanganrekursif1.h"
using namespace std;

ostream& operator << (ostream& out, Rekursif& keluaran) {
    out << "Bilangan yang habis dibagi 5 dan 7 antara 1 sampai 100" << " : "<< endl;
    return out;
}