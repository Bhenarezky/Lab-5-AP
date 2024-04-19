#include <iostream>
using namespace std;

int main() {
    int panjang, lebar;

    cout << "Masukkan panjang persegi: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi: ";
    cin >> lebar;

    for (int i = 0; i < lebar; ++i) {
        for (int j = 0; j < panjang; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
