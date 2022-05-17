#include <bits/stdc++.h>
using namespace std;

void garis_horizontal() {
    cout << "-------------------------------------------------------------------------------------\n";
}

float hasil(int a, int b) {
    return a*0.4 + b*0.6;
}

int main() {
    // // FILE I/O
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // // freopen("output.txt", "w", stdout);
    // #endif

    int N;
    cout << "Masukkan jumlah siswa: "; cin >> N;
    
    string nama[N];
    int nilai_mid[N], nilai_final[N];
    
    // Input
    for (int i = 0; i < N; i++) {
        cout << "Data ke-" << i+1 << "\n";
        cout << "Nama Siswa : ";  cin >> nama[i];
        cout << "Nilai Teori : "; cin >> nilai_mid[i];
        cout << "Nilai Praktek : "; cin >> nilai_final[i];
    }

    // Output
    cout << '\n';
    garis_horizontal();
    cout << "No. \tNama Siswa \tNilai Mid Test \tNilai Final Tes \tHasil Ujian" << "\n";
    garis_horizontal();
    for (int i = 0; i < N; i++) {
        cout << i+1 << "\t" << nama[i] << "\t\t" << nilai_mid[i] << "\t\t\t" << nilai_final[i] << "\t\t\t" << hasil(nilai_mid[i], nilai_final[i]) << '\n';
    }
    garis_horizontal();

}
