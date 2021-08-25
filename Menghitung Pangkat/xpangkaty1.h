// nama file : xpangkaty1.h
#include <iostream>
#include <conio.h>
using namespace std;

class Pangkat {
    friend ostream& operator << (ostream&, Pangkat&);
    friend istream& operator >> (istream&, Pangkat&);
    public:
        void hitungPangkat() {
            if (y==0) {hasil=1;}
            else if (y==1) {hasil=x;}
            else {
                for (int z=1; z<=y; z++) {
                    hasil = hasil * x;
                } } }
    private:
        float x, hasil = 1;
        int y;
};