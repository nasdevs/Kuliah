#include<iostream>
using namespace std;

int main() {
	int jenisBil, batas, total = 0;
	cout << "\n1. Ganjil\n2. Genap\nMasukkan jenis [1/2] : "; cin >> jenisBil;
	if (jenisBil != 1 && jenisBil != 2) {cout << "Antum salah nginput"; return 0;}
	cout << "Masukkan batas : "; cin >> batas;
	for (int i = jenisBil; i <= batas; i+=2) {
		cout << i << " ";
		total += i;
	}
	cout << "\nTotal : " << total;
}
