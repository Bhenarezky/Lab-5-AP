#include <iostream>
using namespace std;

int main() {
    float berat, tinggi, bmi;
    system("CLS");

    cout << "Masukkan berat badan anda (KG): ";
    cin >> berat;
    cout << "Masukkan tinggi badan anda (Meter (contoh :1.68)): ";
    cin >> tinggi;


    bmi = berat / (tinggi * tinggi);

    if (bmi < 18.1) {
        cout << "BMI Anda : " << bmi << endl;
        cout << "Kategori Berat Badan : Kamu underweight";
    } else if (bmi >= 18.1 && bmi <= 23.1) {
        cout << "BMI Anda : " << bmi << endl;
        cout << "Kategori Berat Badan : Kamu normal";
    } else if (bmi >= 23.1 && bmi <= 28.1) {
        cout << "BMI Anda : " << bmi << endl;
        cout << "Kategori Berat Badan : Kamu overweight";
    } else if (bmi > 28.1) {
        cout << "BMI Anda : " << bmi << endl;
        cout << "Kategori Berat Badan : Kamu obesitas";
    }
    return 0;
}