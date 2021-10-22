#include <iostream>
using namespace std;
// Nasrullah, github.com/nasdevs
int main() {
    // luas persegi panjang
    int panjang, lebar, luas;
    cout << "===============================" <<endl;
    cout << "=====Luas Persegi Panjang======" << endl;
    cout << "===============================" <<endl;
    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar : ";
    cin >> lebar;

    luas = panjang * lebar;
    cout<<"Luas yang didapatkan ialah : " << luas << endl;

    return 0;
}
