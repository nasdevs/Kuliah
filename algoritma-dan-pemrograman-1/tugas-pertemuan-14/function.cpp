#include <iostream>
#include <stdlib.h>
using namespace std;

//menu pilihan
char menuBangunDatar(char &pil1) {
	cout << "Hitung Luas dan Keliling Bangun Datar\n";
	cout << "=====================================\n\n";
	
	cout << "1. Persegi\n";
	cout << "2. Persegi Panjang\n";
	cout << "3. Lingkaran\n";
	cout << "Masukkan pilihan [1..3] : "; cin >> pil1;
	return pil1;
}

char menuRumus(char &pil2) {
	cout << endl;
	cout << "1. Hitung Luas\n";
	cout << "2. Hitung Keliling\n";
	cout << "3. Hitung Luas dan Keliling\n";
	cout << "Masukkan pilihan [1..3] : "; cin >> pil2;
	return pil2;
}
//end menu pilihan

//persegi
float luasPersegi(float sisi) {
	return sisi*sisi;
}

float kelilingPersegi(float sisi) {
	return 4*sisi;
}

void menuPersegi(float &luas, float &keliling) {
    system("clear");
    float sisi;
    cout << "Bangun Datar Persegi\n\n";
    cout << "Masukkan ukuran sisi : "; cin >> sisi;
    luas = luasPersegi(sisi);
    keliling = kelilingPersegi(sisi);
}
//end persegi 

//persegi panjang
float luasPersegiPanjang(float panjang, float lebar) {
	return panjang*lebar;
}

float kelilingPersegiPanjang(float panjang, float lebar) {
	return (2*panjang) + (2*lebar);
}

void menuPersegiPanjang(float &luas, float &keliling) {
	system("clear");
	float panjang, lebar;
	cout << "Bangun Datar Persegi Panjang\n\n";
	cout << "Masukkan ukuran panjang : "; cin >> panjang;
	cout << "Masukkan ukuran lebar   : "; cin >> lebar;
	luas = luasPersegiPanjang(panjang, lebar);
	keliling = kelilingPersegiPanjang(panjang, lebar);
}
//end persegi panjang

//lingkaran
float luasLingkaran(float r) {
	return 3.14 * r * r;
}

float kelilingLingkaran(float r) {
	return 2 * 3.14 * r;
}
void menuLingkaran(float &luas, float &keliling) {
	system("clear");
	float r;
	cout << "Bangun Datar Lingkaran\n\n";
	cout << "Masukkan ukuran jari-jari : "; cin >> r;
	luas = luasLingkaran(r);
	keliling = kelilingLingkaran(r);
}
//end lingkaran

//output
void outputLuas(float luas) {
	cout << "Luas = " << luas << endl;
}

void outputKeliling(float keliling) {
	cout << "Keliling = " << keliling << endl;
}

void outputLuasKeliling(float luas, float keliling) {
	cout << "Luas     = " << luas << endl;
	cout << "Keliling = " << keliling << endl;
}
//or
void hasil(char pil2) {
	float luas, keliling;
	if (pil2 != '2') cout << "Luas     = " << luas << endl;
	if (pil2 != '1') cout << "Keliling = " << keliling << endl;
}
//end or 

void salahInput() {
	cout << "Pilihan tidak tersedia" << endl;
}
//end output

int main() {
	float luas, keliling;
	char pil1, pil2;
	
	system("clear");
	menuBangunDatar(pil1);
	switch(pil1) {
		case '1': menuPersegi(luas, keliling); break;
		case '2': menuPersegiPanjang(luas, keliling); break;
		case '3': menuLingkaran(luas, keliling); break;
		default: salahInput(); return 0;
	}

	menuRumus(pil2);
	cout << endl;
	switch(pil2) {
		case '1': outputLuas(luas); break;
			// hasil(pil2); break; // Luas
		case '2': outputKeliling(keliling); break;
			// hasil(pil2); break; // Keliling
		case '3': outputLuasKeliling(luas, keliling); break;
			// hasil(pil2); break; // Luas & Keliling
		default: salahInput(); break;
	}
	
	return 0;
}
