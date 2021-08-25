// nama file : mainpangkat.cpp
#include <iostream>
#include <conio.h>
#include "xpangkaty2.h"
using namespace std;

main () {
    Pangkat X;
    cin >> X;
    X.hitungPangkat();
    cout << X;
    getch();
    return 0;
}