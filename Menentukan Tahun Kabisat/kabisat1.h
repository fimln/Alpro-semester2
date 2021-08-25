// nama file : kabisat1.h
#include <iostream>
#include <conio.h>
using namespace std;

class Kabisat {
    friend ostream& operator << (ostream&, Kabisat&);
    friend istream& operator >> (istream&, Kabisat&);
    public :
        void hitungKabisat() {
            if (tahun % 4 == 0) {
                if (tahun % 100 == 0) {
                    if (tahun % 400 == 0) {
                        jenis = "kabisat";
                    } else {jenis = "bukan kabisat"; }
                } else {jenis = "kabisat"; }
            } else {jenis = "bukan kabisat"; } }
    private :
        int tahun; string jenis;
};