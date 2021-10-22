#include <iostream>
using namespace std;
// Nasrullah, github.com/nasdevs
int main() {
    int jmlKwh, totalNormal;
    int hrgPerKwh = 1200; 
    float potonganHrg, total;
    float diskon = 0.1;
    
    cout << "=============Pembayaran Listrik=============" << endl;
    cout << "Masukkan Jumlah Kwh\t\t   : ";
    cin >> jmlKwh;
    totalNormal = hrgPerKwh * jmlKwh;
    potonganHrg = totalNormal * diskon;
    total = totalNormal - potonganHrg;

    cout << "Total pembayaran dengan diskon 10% : " << total << endl;
    cout << "============================================" << endl;

    return 0;
}
