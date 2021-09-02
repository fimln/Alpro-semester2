#include <iostream>
#include <conio.h>
using namespace std;

class array {
    friend ostream& operator<<(ostream&, array&);
    public:
        void arr_a();
        void arr_b();
        void gabungan();
        void swap(int *xp, int *yp);
        void bubbleSort() {
            int i, j;
            for (i = 0; i < n-1; i++)    
                for (j = 0; j < n-i-1; j++)
                    if (c[j] > c[j+1])
                        swap(&c[j], &c[j+1]); }

    private:
        int a[3][3] = { {7,4,2}, {5,8,15}, {11,10,13} };
        int b[3][3] = { {1,3,6}, {9,12,14}, {18,17,16} };
        int baris = 3, kolom = 3, n = 18, c[18], indeks;
};