#include <iostream>
using namespace std;

int menghitungKombinasi(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    else
        return menghitungKombinasi(n - 1, k - 1) + menghitungKombinasi(n - 1, k);
}

int main() {
    system("CLS");

    int tinggi;
    
    cout << "Masukkan tinggi segitiga Pascal: ";
    cin >> tinggi;
    
    for (int i = 0; i < tinggi; ++i) {
        for (int j = 0; j < (tinggi - i - 1); ++j) {
            cout << " "; 
        }

        for (int j = 0; j <= i; ++j) {
            int koefisien = menghitungKombinasi(i, j);
            cout << koefisien << " "; 
        }

        cout << endl;
    }
    
    int x, y;
    cout << "Masukkan dua buah bilangan x dan y (1 <= x, y <= 30 | y <= x): ";
    cin >> x >> y;
    
    if (x < 1 || x > tinggi || y < 1 || y > x) {
        cout << "Indeks tidak valid!\n";
        return 1;
    }
    
    int nilaiElemen = menghitungKombinasi(x - 1, y - 1);
    cout << "Nilai pada index  [" << x << "][" << y << "] = " << nilaiElemen << endl;
    
    return 0;
}
