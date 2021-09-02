#include <iostream>
#include <conio.h>
using namespace std;

class sort {
    friend ostream& operator<<(ostream&, sort&);
    public:
        void swap (int *xp, int *yp);
        void bubbleSort () {
        int i, j;
        for (i = 0; i < n-1; i++)
            for (j = 0; j < n-i-1; j++)
                if (arr[j] > arr[j+1])
                    swap(&arr[j], &arr[j+1]);
    }
    private:
        int arr[8] = {9, 2, 1, 4, 11, 10, 18, 6};
        int n = 8;
};