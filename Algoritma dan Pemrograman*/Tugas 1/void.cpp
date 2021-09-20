#include <iostream>
using namespace std;
// Nasrullah, github.com/nasdevs
void hasil(int luas) {
  cout << "Menampilkan luas lewat void : " << luas << endl;
}

int main() {
  int panjang, lebar, luas;
  cout << "======Luas Persegi Panjang======" << endl;
  cout << "Masukkan panjang\t: ";
  cin >> panjang;
  cout << "Masukkan lebar\t\t: ";
  cin >> lebar;
  cout << "================================" << endl;

  luas = panjang * lebar;
  hasil(luas);
  
  return 0;
}