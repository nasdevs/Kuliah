#include <bits/stdc++.h>
using namespace std;

// table
void garis_horizontal() {
    cout << "========================================================\n";
}

void header() {
    cout << '\n';
    garis_horizontal();
    cout << "No. \t|\t Nama Lengkap \t|\t Alamat" << '\n';
    garis_horizontal();
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // // FILE I/O
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // // freopen("output.txt", "w", stdout);
    // #endif 

    int N;
    cout << "Input jumlah data : "; cin >> N;

    string arr_1st[2][N], arr_2nd[2][N], hasil[2][N];

    // input + proses
    for (int i = 0; i < N; i++) {
        cout << "Data ke-" << i+1 << '\n';
        cout << "Nama depan    : "; cin >> arr_1st[0][i];
        cout << "Kota          : "; cin >> arr_1st[1][i];
        cout << "Nama belakang : "; cin >> arr_2nd[0][i];
        cout << "Kecamatan     : "; cin >> arr_2nd[1][i];
        cout << "---------------------------------------" << '\n\n';
        // proses
        hasil[0][i] = arr_1st[0][i] + " "  + arr_2nd[0][i];
        hasil[1][i] = arr_2nd[1][i] + ", " + arr_1st[1][i];
    }
    
    // output
    header();
    for (int i = 0; i < N; i++) 
        cout << i+1 << "\t|\t " << hasil[0][i] << "\t|\t" << hasil[1][i] << '\n';
    garis_horizontal();
}

