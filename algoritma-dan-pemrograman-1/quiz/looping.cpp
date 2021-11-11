#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    string jenisBil;
    int batas;
    char ulang;
    do {
        system("cls"); // dipakai untuk membersihkan terminal tiap perulangan, jan lupa pake header <stdlib.h>
        int total = 0;
        cout << "=================" << endl;
        cout << "Masukkan jenis : "; cin >> jenisBil;
        if (jenisBil == "ganjil") {
            cout << "Masukkan batas : "; cin >> batas;
            for (int i = 1; i <= batas; i+=2) {
                cout << i << " ";
                total = total + i;
            }
        }

        else if (jenisBil == "genap") {
            cout << "Masukkan batas : "; cin >> batas;
            for (int i = 2; i <= batas; i+=2) {
                cout << i << " ";
                total = total + i;
            }
        }

        else {
            cout << "Kesalahan dalam penginputan" << endl;
            return 0;
        }
        cout << endl;
        cout << "Total : " << total << endl;
        cout << "Ulangi program (y/n) : "; cin >> ulang;
    }
    while(ulang == 'Y' || ulang == 'y');
    return 0;
}
