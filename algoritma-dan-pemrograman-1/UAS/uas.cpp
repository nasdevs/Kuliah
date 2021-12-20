#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void menu() {
	cout << "Form Penilaian Mahasiswa" << endl;
	cout << "========================\n" << endl;

	cout << "1. Input Nilai Tugas" << endl;
	cout << "2. Input Nilai Mid Test" << endl;
	cout << "3. Input Nilai Final Test" << endl;
	cout << "4. Tampil Nilai Rata-Rata " << endl;
	cout << "5. Keluar " << endl;
}

float rataRataTugas() {
	system("cls");
	float jmlTugas;
	float tugas;
	int penjumlahan = 0;
	cout << "Masukkan jumlah tugas : "; cin >> jmlTugas;
	for (int i = 0; i < jmlTugas; i++) {
		cout << "Masukkan nilai tugas ke-" << i+1 << " : "; cin >> tugas;
		penjumlahan+=tugas;
	}
	cout << "Input nilai tugas selesai...";
	getch();
	return penjumlahan / jmlTugas;
}

int midTest() {
	system("cls");
	int nilaiMid;
	cout << "Masukkan Nilai Mid Test : "; cin >> nilaiMid;
	cout << "Input nilai mid selesai...";
	getch();
	return nilaiMid;
}

int finalTest() {
	system("cls");
	int nilaiFinal;
	cout << "Masukkan Nlai Final Test : "; cin >> nilaiFinal;
	cout << "Input nilai final selesai...";
	getch();
	return nilaiFinal;
}

void tampilHasil(int tugas, int mid, int final, int hasil, int index) {
	cout << "Nilai Rata-Rata Tugas = " << tugas << endl;
	cout << "Nilai Mid Test        = " << mid << endl;
	cout << "Nilai Final Test      = " << final << endl;
	cout << "Nilai Rata-Rata Akhir = " << hasil << endl;
	cout << "Index                 = " << index;
}

int main() {
	float tugas = 0;
	int mid = 0;
	int final = 0;
	float hasil;
	bool ulang = true;
	int pil;
	char index;

	while (ulang == true) {
		system("cls");
		menu();
		cout << "Masukkan pilihan [1...5] : "; cin >> pil;
		switch(pil) {
			case 1: tugas = rataRataTugas(); break;
			case 2: mid = midTest(); break;
			case 3: final = finalTest(); break;
			case 4: 
				if (tugas == 0 || mid == 0 || final == 0) {
					system("cls");
					cout << "Nilai belum lengkap...";
					getch();
					break;
				} 
				else {
					hasil = (tugas+mid+final) / 3; 
					if (hasil >= 86 && hasil <= 100) index = 'A';
					else if (hasil >= 76) index = 'B';
					else if (hasil >= 66) index = 'C';
					else if (hasil >= 56) index = 'D';
					else if (hasil < 56) index = 'E';
					else index = '-';
					tampilHasil(tugas, mid, final, hasil, index);
					getch();
					break;
				}
			case 5: 
				ulang = false;
				return 0;
			default: cout << "Pilihan tidak tersedia"; break;
		}
	}
}
