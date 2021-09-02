#include <stdlib.h>
#include <iostream>
#include <conio.h>
using namespace std;

class node {
    public:
        int data;
        node *berikut;
};

main (int argc, char *argv[]) {

    node *baru;
    baru = new node;
    int satu;
    cout << "Isi data node 1 : "; cin >> satu;
    baru->data = satu;
    baru->berikut = NULL;
    
    node *lain;
    lain = new node;
    int dua;
    cout<<"Isi data node 2: "; cin >> dua;
    lain->data=dua;
    lain->berikut=NULL;

    node *a;
    a = new node;
    int tiga;
    cout << "Isi data node 3 : "; cin >> tiga;
    a->data=tiga;
    a->berikut=NULL;
    
	node *b;
    b = new node;
    int empat;
    cout << "Isi data node 4 : "; cin >> empat;
    b->data = empat;
    b->berikut = NULL;
   
    baru->berikut = lain;
    cout << "\nIsi data node lain dicetak dari node baru adalah : ";
    cout << baru->berikut->data << endl;
    
	lain->berikut = a;
    cout << "Isi data node lain dicetak dari node baru adalah : ";
    cout << lain->berikut->data << endl;
    
	a->berikut = b;
    cout << "Isi data node lain dicetak dari node baru adalah : ";
    cout << a->berikut->data << endl;
    
    node *kepala = baru;
    cout << "\nMencetak node pertama dari pointer : ";
    cout << kepala->data << endl;
    cout << "Mencetak node kedua dari pointer : ";
    cout << kepala->berikut->data << endl;
	cout << "Mencetak node ketiga dari pointer :";
    cout << lain->berikut->data << endl;
	cout << "Mencetak node keempat dari pointer :";
    cout << a->berikut->data << endl;
                 
    cout << "\nMenggunakan perulangan untuk mencetak semua data" << endl;
	node *jalan = kepala;
    int i = 1; cout << endl;
	while(jalan !=NULL){
		cout << "data ke-" << i << " > " << jalan->data << endl; 
		i++; jalan = jalan->berikut;
    }
        
    cout << "\nmencetak node pertama dari pointer :";
    cout << kepala->data << endl;
    cout <<"mencetak node kedua dari pointer :";
    cout << kepala->berikut->data << endl;
             
    cout << "\nBanyak Data : " << i-1 << endl;
}