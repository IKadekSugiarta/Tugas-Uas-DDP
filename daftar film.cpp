#include <iostream>
using namespace std;

void Hasil (int x, int y){
    if (x==1) {
        if (y>=18){
            cout << "Cukup Umur";
        }
        else{
            cout << "Belum Cukup Umur";
        }
    }
    else {
        if (y>=18){
            cout << "Cukup Umur";
        }
        else{
            cout << "Belum Cukup umur";
      }
   }
}

int main(){
    int umur, kel;

 	cout << "================================" <<endl;
    cout << "	-Daftar Film-" <<endl;
    cout << "================================" <<endl;
    cout <<endl;
	cout << "1. SPIDERMAN" <<endl;
    cout << "2. LAYANGAN PUTUS" <<endl;
    cout <<endl;
    cout << "================================" <<endl;
    
    cout << "Masukan Pilihan Anda (1-2) : "; cin >> kel;
    cout << "================================" <<endl;

    cout << "Masukan Umur Anda : "; cin >> umur;
    cout << "================================" <<endl;

    Hasil(kel,umur);
}
