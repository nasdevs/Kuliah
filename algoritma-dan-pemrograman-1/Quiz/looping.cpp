#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    char ulang;
    string jenisBil;
    int batas;
    do {
        system("cls"); // dipakai untuk membersihkan terminal tiap perulangan, jan lupa pake #include <stdio.h>
        int total = 0, mulai = 0;
        cout << "=================\n";
        cout << "Jenis : \n1. ganjil\n2. genap\nMasukkan jenis : "; cin >> jenisBil;
        if (jenisBil == "1" || jenisBil == "2" || jenisBil == "ganjil" || jenisBil == "genap") {
            if (jenisBil == "1" || jenisBil == "ganjil") {mulai = 1;}
            else {mulai = 2;}
            cout << "Masukkan batas : "; cin >> batas;
            for (int i = mulai; i <= batas; i+=2) {
                cout << i << " ";
                total += i;
            }
            cout << "\nTotal : " << total;
        }
        else {
            cout << "\nkesalahan dalam penginputan.";
        }
        cout << "\nUlang program [y/n] : "; cin >> ulang;
    }
    while(ulang == 'Y' || ulang == 'y');
    return 0;
}
