#include <iostream>
#include <string>
using namespace std;

int main() {
    system("CLS");
    
    string nama;
    long Gpokok, Gbersih, uanganak;
    int anak, gol;
    
    cout << "Masukan Nama Anda :";
    getline(cin, nama);
    cout << "Masukan Golongan Anda (1/2/3) :";
    cin >> gol;

    if (gol == 1) {
        Gpokok = 5000000 * 95/100;
    } else if (gol == 2) {
        Gpokok = 3000000 * 95/100;
    } else if (gol == 3) {
        Gpokok = 2500000 * 95/100;
    } else {
        cout << "Golongan Anda Tidak Valid";
        exit(0);
    }

    cout << "Masukan Jumlah Anak Anda :";
    cin >> anak;

    if (anak == 0) {
        uanganak = 0;
    } else if (anak <= 2) {
        uanganak = 500000 * anak;
    } else if (anak >= 3) {
        uanganak = 750000 * anak;
    }

    Gbersih = Gpokok + uanganak;

    system("CLS");
    cout << "=========================================" << endl;
    cout << "Nama Anda : " << nama << endl;
    cout << "Golongan Anda : " << gol << endl;
    cout << "Jumlah Anak :" << anak << endl;
    cout << "Total Gaji :" << Gbersih << endl;

    return 0;
}