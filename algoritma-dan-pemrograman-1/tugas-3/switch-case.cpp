#include <iostream>
using namespace std;
// Nasrullah, github.com/nasdevs
int main() {;
    char hari;
    cout << "----------------------------------------" << endl;
    cout << "Program untuk mengetahui roster kelas A1" << endl;
    cout << "1. Senin       5. Juma'at" << endl;
    cout << "2. Selasa      6. Sabtu" << endl;
    cout << "3. Rabu        7. Minggu" << endl;
    cout << "4. Kamis" << endl;
    cout << "Masukkan hari (format angka): "; cin >> hari;
    cout << endl;

    switch (hari) {
        case '1':
            cout << "Hari Senin" << endl;
            cout << "1. Pengantar Teknologi Informasi" << endl;
            cout << "   Pukul : 07:00 - 09:30" << endl;
            break;
        case '2':
            cout << "Hari Selasa" << endl;
            cout << "1. Bahasa Inggris" << endl;
            cout << "   Pukul : 07:00 - 09:39" << endl;
            cout << "2. Fisika " << endl;
            cout << "   Pukul : 09:40 - 12:10" << endl;
            cout << "3. Pancasila " << endl;
            cout << "   Pukul : 13:00 - 14:40" << endl;
            cout << "4. Logika Informatika" << endl;
            cout << "   Pukul : 15:40 - 18:30" << endl;
            break;
        case '3':
            cout << "Hari Rabu" << endl;
            cout << "1. Kalkulus" << endl;
            cout << "   Pukul : 07:00 - 09:00" << endl;
            cout << "2. Algoritma dan Pemrograman 1" << endl;
            cout << "   Pukul : 09:40 - 12:10" << endl;
            break;
        case '5':
            cout << "Hari Jumat" << endl;
            cout << "1. Pendidikan Agama Islam" << endl;
            cout << "   Pukul : 07:50 - 09:30" << endl;
            break;
        case '4': 
        case '6': 
        case '7': 
            cout << "Tidak ada mata kuliah" << endl;
            break;
        default:
            cout << "Kesalahan dalam penginputan" << endl;
            break;
    }
    cout << "----------------------------------------" << endl;
}
