#include <iostream>
using namespace std;

void tukar(char &a, char &b) {
    char c = a; 
    a = b;
    b = c;
}

void bubble_sort(char huruf[], char angka[], int n) {
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n-i-1; j++) 
            if (huruf[j] > huruf[j+1]) {
                tukar(huruf[j], huruf[j+1]);
                tukar(angka[j], angka[j+1]);
            }
}

void exchange_sort(char huruf[], char angka[], int n) {
    for (int i = 0; i < n; i++) 
        for (int j = i+1; j < n; j++) {
            if (huruf[i] > huruf[j]) {
                tukar(huruf[i], huruf[j]);
                tukar(angka[i], angka[j]);
            }
        }
}

void selection_sort(char huruf[], char angka[], int n) {
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        for (int j = i+1; j < n; j++) 
            if (huruf[i] > huruf[j])
                tmp = j;
        if (tmp != 0) {
            tukar(huruf[i], huruf[tmp]);
            tukar(angka[i], angka[tmp]);
        }
    }
}

void insertion_sort(char huruf[], char angka[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i; j >= 0 && huruf[j] > huruf[j+1]; j--) {
            tukar(huruf[j], huruf[j+1]);
            tukar(angka[j], angka[j+1]);
        }
    }
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // // FILE I/O
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // // freopen("output.txt", "w", stdout);
    // #endif 

    int size;
    cout << "Input size : "; cin >> size;
    char huruf[size];
    char angka[size];

    // input
    for (int i = 0; i < size; i++) {
        cout << "Masukkan huruf ke-" << i+1 << " : "; cin >> huruf[i];
        cout << "Masukkan angka ke-" << i+1 << " : "; cin >> angka[i];
    }

    // output
    cout << "\nData Sebelum Diurutkan :" << '\n';
    for (auto c : huruf) cout << c << " ";
    cout << '\n';
    for (auto c : angka) cout << c << " ";
	cout << '\n';

    // proses -- uncomment jika ingin memakai algoritma tertentu 
    // bubble_sort(huruf, angka, size);
    // exchange_sort(huruf, angka, size);
    // selection_sort(huruf, angka, size);
    insertion_sort(huruf, angka, size);

    cout << "Urutan Berdasarkan Huruf :" << '\n';
    for (auto c : huruf) cout << c << " ";
    cout << '\n';
    for (auto c : angka) cout << c << " ";
	  cout << '\n';
    return 0;
}
