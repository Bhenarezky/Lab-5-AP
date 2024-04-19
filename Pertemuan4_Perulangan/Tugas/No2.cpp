#include <iostream>
#include <string>
using namespace std;

int main() {
    system("CLS");


    string kalimat, kalimat_akhir;;
    char hapus;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan huruf yang ingin dihapus: ";
    cin >> hapus;

    for (char huruf : kalimat) {
        if (huruf != hapus) {
            kalimat_akhir += huruf;
        }
    }

    cout << "Kalimat setelah menghapus huruf '" << hapus << "': " << kalimat_akhir << endl;

    return 0;
}
