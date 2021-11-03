#include <iostream>
using namespace std;

int main() {
    string jenisBil;
    int batas;
    int total = 0;
    char ulang;
    do {
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
