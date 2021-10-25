#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;
// Nasrullah, github/nasdevs
void kriteriaPenilaian() {
    cout << "-------------------Kriterian Penilaian------------------" << endl;
    cout << "Kehadiran        : 5%" << endl;
    cout << "Tugas + Quiz     : 65%" << endl;
    cout << "UTS              : 15%" << endl;
    cout << "UAS / Presentasi : 15%" << endl;
}

int main() {
    float kehadiran, tugasDanQuiz, nilaiUTS, nilaiUAS, nilai;
    long long int nim;
    string namaMahasiswa, kelas, bobot;

    kriteriaPenilaian();
    cout << "--------------------------------------------------------" << endl;
    cout << "                    Nilai Mahasiswa"                      << endl;
    cout << "          Matakuliah Algoritma dan Pemrograman 1"         << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Nama             : "; cin >> namaMahasiswa;
    cout << "Nim              : "; cin >> nim;
    cout << "Kelas            : "; cin >> kelas;

    cout << "\n-------------Nilai Mahasiswa (Format 100)-------------" << endl;
    cout << "Kehadiran 1 - 16 : "; cin >> kehadiran;
    cout << "Total nilai\nTugas dan Quiz   : "; cin >> tugasDanQuiz;
    cout << "Nilai UTS        : "; cin >> nilaiUTS;
    cout << "Nilai UAS        : "; cin >> nilaiUAS;

    kehadiran = (((kehadiran / 16) * 100) / 100) * 5;
    tugasDanQuiz = (tugasDanQuiz / 100) * 65;
    nilaiUTS = (nilaiUTS / 100) * 15;
    nilaiUAS = (nilaiUAS / 100) * 15;

    nilai = kehadiran + tugasDanQuiz + nilaiUTS + nilaiUAS;

    if (nilai > 85 && nilai <= 100) {  
        bobot = "A";
    }
    else if (nilai > 80 && nilai <= 85) {
        bobot = "A-";
    }
    else if (nilai > 75 && nilai <= 80) {
        bobot = "B+";
    }
    else if (nilai > 70 && nilai <= 75) {
        bobot = "B";
    }
    else if (nilai > 65 && nilai <= 70) {
        bobot = "B-";
    }
    else if (nilai > 60 && nilai <= 65) {
        bobot = "C+";
    }
    else if (nilai > 55 && nilai <= 60) {
        bobot = "C";
    }
    else if (nilai > 45 && nilai <= 50) {
        bobot = "D";
    }
    else if (nilai >= 0 && nilai <= 45) {
        bobot = "E";
    }
    else {
        cout << "Kesalahan dalam penginputan \nProgram akan mati dalam 3 detik" << sleep(3) << endl;
        return 0;
    }

    cout << "\n--------------------Data Mahasiswa--------------------" << endl;
    cout << "Nama             : " << namaMahasiswa << endl;
    cout << "Nim              : " << nim << endl;
    cout << "Kelas            : " << kelas << endl;
    cout << "Nilai            : " << nilai << endl;
    cout << "Bobot            : " << bobot << endl;

    return 0; 
}
