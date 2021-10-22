#include <iostream>
using namespace std;
// Nasrullah, github.com/nasdevs, memastikan kebenaran pada -
// tugas 1 Logika Informatika (Sept-14-2021)
int main () {
    bool p = true;
    bool q = true;
    bool hasil;

    cout << "p : pemuda itu tinggi" << endl;
    cout << "q : pemuda itu tampan" << endl;
    cout << "p = " << p << " dan !p = " << !p << endl;
    cout << "q = " << q << " dan !q = " << !q << endl;
    cout << "1 = true dan 0 = false" << endl;
    cout << "&& = AND, || = OR, ! = Negasi" << "\n" << endl;

    // Soal A
    cout << "--------------------------------------------------------" << endl;
    cout << "A. Pemuda itu tinggi dan tampan" << endl;
    hasil = p && q;
    cout << "\tp && q \t\t= " << hasil << endl;

    // Soal B
    cout << "--------------------------------------------------------" << endl;
    cout << "B. Pemduda itu tinggi tapi tidak tampan " << endl;
    hasil = p && !q;
    cout << "\tp && !q \t= " << hasil << endl;

    // Soal C
    cout << "--------------------------------------------------------" << endl;
    cout << "C. Pemuda itu tidak tinggi maupun tampan" << endl;
    hasil = !p && !q;
    cout << "\t!p && !q \t= " << hasil << endl;

    // Spoal D
    cout << "--------------------------------------------------------" << endl;
    cout << "D. Tidak benar bahwa pemuda itu pendek atau tidak tampan" << endl;
    hasil = !(!p || !q);
    cout << "\t!(!p || !q) \t= " << hasil << endl;

    // Soal E
    cout << "--------------------------------------------------------" << endl;
    cout << "E. Pemuda itu tinggi atau pendek dan tampan" << endl;
    hasil = p || !p && q;
    cout << "\tp || !p && q \t= " << hasil << endl;

    // Soal F
    cout << "--------------------------------------------------------" << endl;
    cout << "F. Tidak benar bahwa pemuda itu pendek maupun tampan" << endl;
    hasil = !(!p && !q);
    cout << "\t!(!p && !q) \t= " << hasil << endl;
    cout << "--------------------------------------------------------" << endl;

    return 0;
}
