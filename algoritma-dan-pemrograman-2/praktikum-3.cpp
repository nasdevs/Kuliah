#include <bits/stdc++.h>
using namespace std;

void tukar(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

void bubble_sort(int angka[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (angka[j] > angka[j+1])
                tukar(angka[j], angka[j+1]);
        }
    }
}

int sequention_search(int angka[], int size, int find) {
    for (int i = 0; i < size; i++) {
        if (angka[i] == find) return i;
    }
    return -1;
}

int main() {
    // // FILE I/O
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // // freopen("output.txt", "w", stdout);
    // #endif

    int N, search;
    cout << "Input size : "; cin >> N;
    int angka[N];

    // input
    for (auto &x: angka) cin >> x;
    cout << '\n';

    cout << "\nData sebelum diurut" << '\n';
    for (auto x: angka) cout << x << ' ';
    cout << '\n';

    // proses
    bubble_sort(angka, N);

    cout << "\nData setelah diurut" << '\n';
    for (auto x: angka) cout << x << ' ';
    cout << '\n';

    cout << "Input angka yang dicari : "; cin >> search;
    int result = sequention_search(angka, N, search);
    if (result != -1) cout << "Angka ditemukan, " << search << " berada di index ke-" << result << '\n';
    else cout << "Data " << search << " tidak ditemukan" << '\n';
}
