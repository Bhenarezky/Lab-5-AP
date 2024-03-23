#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int umur;
    cout << "Masukan Umur Kamu :";
    cin >> umur;

    if (umur < 0) {
        cout << "Kamu Alien";
    } else {
        if (umur > 0 && umur <= 5) {
            cout << "Kamu Masih Balita";
        } else if(umur > 6 && umur <= 14) {
            cout << "Kamu anak-anak";
        } else if (umur > 14 && umur <= 25) {
            cout << "Kamu Remaja";
        } else if (umur > 25 && umur <= 55) {
            cout << "Kamu Dewasa";
        } else if (umur > 55) {
            cout << "Kamu Lansia";
        }
    }
          
    return 0;
}