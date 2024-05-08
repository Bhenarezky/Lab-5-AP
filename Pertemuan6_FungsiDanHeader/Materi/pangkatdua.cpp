#include <iostream>
using namespace std;

int pangkatDua(int x) {
    return x * x;
}

int main() {
    system("CLS");

    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    int hasil = pangkatDua(nilai);
    cout << "Nilai pangkat dua dari " << nilai << " adalah: " << hasil << endl;

    return 0;
}
