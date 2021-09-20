#include <iostream>

using namespace std;
// Nasrullah, github.com/nasdevs
int main() {
    string nilai_A = "dan anda dinyatakan Lulus :)";
    string nilai_B = "dan anda dinyatakan Lulus :)";
    string nilai_C = "dan anda dinyatakan Lulus :)";
    string nilai_D = "dan anda dinyatakan Lulus :) ";
    string nilai_E = "dan anda dinyatakan Tidak Lulus, Tetap Semangat dan Jangan Menyerah";
    float algoritma, logika, rata;

    cout << "======Nilai rata-rata 2 matkul======" << endl;
    cout << "Nilai yang dipakai yaitu 0 - 4.0" << endl;
    cout << "Nilai Algoritma dan Pembrograman : ";
    cin >> algoritma;
    cout << "Nilai Logika Informatika\t : ";
    cin >> logika;
    cout << "====================================" << endl;

    rata = (algoritma + logika) / 2;
    if(rata >= 3.21 && rata <= 4.0) {
        cout << "Nilai anda A " << nilai_A << endl;
    }
    else if(rata >= 2.41 && rata <= 3.2) {
        cout << "Nilai anda B " << nilai_B << endl;
    }
    else if(rata >= 1.61 && rata <= 2.4) {
        cout << "Nilai anda C " << nilai_C << endl;
    }
    else if(rata >= 0.81 && rata <= 1.6) {
        cout << "Nilai anda D " << nilai_D << endl;
    }
    else if(rata >= 0 && rata <= 0.8) {
        cout << "Nilai anda E " << nilai_E << endl;
    }
    
    else {
        cout << "Kesalahan penginputan nilai" << endl;
    }
    
    return 0;
}