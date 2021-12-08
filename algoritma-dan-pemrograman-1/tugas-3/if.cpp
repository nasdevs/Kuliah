#include <iostream>
using namespace std;
// Nasrullah, github.com/nasdevs
int main() {
    long long int nim;
    char cekDataMahasiswa;
    cout << "Pengecekan nim mahasiswa UMI" << endl;
    cout << "Masukkan nim : "; cin >> nim;

    if (nim == 13020210134) {
        cout << "Memang benar bahwa mahasiswa dengan nim : " << nim << " adalah mahasiswa UMI" << endl;
        cout << "Mau cek data lengkapnya [Y/N] : "; cin >> cekDataMahasiswa;
        cout << endl;
        if (cekDataMahasiswa == 'Y' || cekDataMahasiswa == 'y') {
            cout << "Nama        : Nasrullah" << endl;
            cout << "Nim         : 130xxxxxxxx" << endl;
            cout << "Tahun masuk : 2021" << endl;
            cout << "Domisili    : Makassar" << endl;
            cout << "Nomor telp. : 0821xxxxxxxx" << endl;
        }
    }
    
    return 0;
}
