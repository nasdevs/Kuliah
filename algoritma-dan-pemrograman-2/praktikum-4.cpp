#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
// nasrullah A1 13020210134

void menu() {
    cout << "1. Input Menu" << '\n';
    cout << "2. Tampilkan menu (disortir)" << '\n';
    cout << "3. Cari menu" << '\n';
    cout << "4. Keluar" << '\n';
}

void garis_horizontal() {
    cout << "---------------------------------------------" << '\n';
}

void header() {
    garis_horizontal();
    cout << "No\tNama\t\tJenis\t\tHarga" << '\n';
    garis_horizontal();
}

void tukar(string &a, string &b) {
    string c = a;
    a = b;
    b = c;
}

void bubble_sort(string daftar[][3], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-i-1; j++) {
            if (daftar[j][0] > daftar[j+1][0]) {
                tukar(daftar[j][0], daftar[j+1][0]);
                tukar(daftar[j][1], daftar[j+1][1]);
                tukar(daftar[j][2], daftar[j+1][2]);
            }
        }
    }
}

int sequential_sort(string daftar[][3], string find, int N) {
    for (int i = 0; i < N; i++) 
        if (daftar[i][0] == find) 
            return i;
    return -1;
}

int main() {
    // // FILE I/O
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // // freopen("output.txt", "w", stdout);
    // #endif
    
    int N, harga, pilih;
    cout << "Input jumlah data menu : "; cin >> N;

    string daftar_pilihan[N][3], search;
    while (true) {
        system("cls");
        menu();
        cout << "Pilih menu : "; cin >> pilih;
        system("cls");

        // input
        if (pilih == 1) {
            for (int i = 0; i < N; i++) {
                cout << "Data ke-" << i+1 << '\n';
                cout << "Nama  : "; cin >> daftar_pilihan[i][0];
                cout << "Jenis : "; cin >> daftar_pilihan[i][1];
                cout << "Harga : "; cin >> daftar_pilihan[i][2]; 
                cout << '\n';
            }
        }

        // sort + ouput sorting
        else if (pilih == 2) {
            bubble_sort(daftar_pilihan, N);
            cout << "Data setelah diurutkan" << '\n';
            header();
            for (int i = 0; i < N; i++) {
                cout << i+1 << "\t" << daftar_pilihan[i][0] << "\t\t" << daftar_pilihan[i][1] << "\t\t" << daftar_pilihan[i][2] << '\n';
            }
            garis_horizontal();
        }

        // search
        else if (pilih == 3) {
            cout << "Cari menu : "; cin >> search;
            int result = sequential_sort(daftar_pilihan, search, N); 
            if (result != -1) {
                cout << "Data, " << search << " ditemukan diurutan ke-" << result+1 << '\n';
                header();
                cout << result+1 << "\t" << daftar_pilihan[result][0] << "\t\t" << daftar_pilihan[result][1] << "\t\t" << daftar_pilihan[result][2] << '\n';
                garis_horizontal();
            }
            else cout << "Data tidak ditemukan" << '\n';
        }
        
        else {
            cout << "Keluar" << '\n';
            return 0;
        }

        getch();
    }
}
