#include <iostream>
using namespace std;
// Nasrullah
int main() {
    int nilai_tugas, nilai_uts, nilai_uas;
    float rata2;
    char ket;
    cout << "Hitung Nilai Akhir Mahasiswa" << endl;
    cout << "============================\n" << endl;
    cout << "Masukkan nilai tugas : "; cin >> nilai_tugas;
    cout << "Masukkan nilai UTS   : "; cin >> nilai_uts;
    cout << "Masukkan nilai UAS   : "; cin >> nilai_uas;
    
    rata2 = (nilai_tugas + nilai_uts + nilai_uas) / 3;

    if (rata2 >= 85 && rata2 <= 100) {
        ket = 'A';
    }
     else if (rata2 >= 76 && rata2 <= 85) {
        ket = 'B';
    }
     else if (rata2 >= 66 && rata2 <= 75) {
        ket = 'C';
    }
     else if (rata2 >= 56 && rata2 <= 65) {
        ket = 'D';
    }
     else if (rata2 < 56) {
        ket = 'E';
    }
     else {
        cout << "Kesalahan dalam penginputan" << endl;
        return 0;
    }

    cout << "\n Hasil:" << endl;
    cout << " Nilai rata-rata = " << rata2 << endl;
    cout << " Nilai Akhir     = " << ket << endl;

    return 0;
 }
