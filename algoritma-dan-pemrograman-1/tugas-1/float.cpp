#include <iostream>
using namespace std;
// Nasrullah, github.com/nasdevs
int main() {
    // luas lingkaran 
    float jari, luas;
    float phi = 3.14;
    cout << "===============================" << endl;
    cout << "========Luas Lingkaran=========" << endl;
    cout << "===============================" << endl;
    cout << "Masukkan jari-jarinya: ";
    cin >> jari;

    luas = phi * (jari * jari);
    cout << "Luas : " << luas;

    return 0;
}
