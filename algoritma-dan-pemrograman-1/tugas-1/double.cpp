#include <iostream>
#include <float.h>
using namespace std;
// Nasrullah, github.com/nasdevs
int main() {
    // luas lingkaran 
    double jari, luas;
    double phi = 3.14;
    cout << "========Luas Lingkaran=========" << endl;
    cout << "Masukkan jari-jarinya: ";
    cin >> jari;

    luas = phi * (jari * jari);
    cout << "Luas : " << luas << "\n\n" << endl;
    
    // Jangkauan maks float dan double
    cout << "Jangkauan maksimal: " << endl;
    cout << "float\t : " << FLT_MAX << endl;
    cout << "double\t : " << DBL_MAX << endl;
    return 0;
}
