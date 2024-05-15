#include <iostream>
using namespace std;

void pertambahan(double *x, double *y, double *hasil) {
    *hasil = *x + *y;
}

void pengurangan(double *x, double *y, double *hasil) {
    *hasil = *x - *y;
}

void pembagian(double *x, double *y, double *hasil) {
    *hasil = *x / *y;
}

void perkalian(double *x, double *y, double *hasil) {
    *hasil = *x * *y;
}

int main() {
    system("CLS");
    double bil1, bil2, hasil;
    char operasi;

    cout << "Masukkan dua angka: ";
    cin >> bil1 >> bil2;

    cout << "Pilih operasi (+, -, *, /): ";
    cin >> operasi;

    if (operasi == '+') {
            pertambahan(&bil1, &bil2, &hasil);
        } else if (operasi == '-') {
            pengurangan(&bil1, &bil2, &hasil);
        } else if (operasi == '*') {
            perkalian(&bil1, &bil2, &hasil);
        } else if (operasi == '/') {
            pembagian(&bil1, &bil2, &hasil);
        } else {
            cout << "Operasi Gagal" << endl;
        }

        cout << "Hasil: " << hasil << endl;

    return 0;
}
