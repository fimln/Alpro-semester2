// nama file : mainkabisat.cpp
#include <iostream>
#include <conio.h>
#include "kabisat2.h"
using namespace std;

main () {
    Kabisat X;
    cin >> X;
    X.hitungKabisat();
    cout << X;
    getch();
    return 0;
}