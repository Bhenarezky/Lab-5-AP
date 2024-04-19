#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    int jumlah = 0;
    for (int i = 2; i <= n; i += 2) { 
        jumlah += i * i; 
    }

    cout << "Jumlah kuadrat bilangan genap dari 1 sampai " << n << " adalah: " << jumlah << endl;

    return 0;
}
