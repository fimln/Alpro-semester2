// nama file : bilanganrekursif1.h
#include <iostream>
#include <conio.h>
using namespace std;

class Rekursif {
    friend ostream& operator << (ostream&, Rekursif&);
    public:
    void bilanganRekursif (int n) {
        if (n<=100) {
            if (n%5==0 && n%7==0) {
                cout << n << endl;
                bilanganRekursif(n+1); }
            else bilanganRekursif(n+1); }
        else {}
    }
    private:
        int n;
};