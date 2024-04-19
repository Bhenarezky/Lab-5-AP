#include <iostream>
using namespace std;

int main() { 
    system("CLS");
    
    cout << "Input Tahun  : ";
    int tahun;
    cin >> tahun;

    cout << "Input Interval  : ";
    int interval;
    cin >> interval;

    if (tahun >= 1000 && tahun <= 9000 && interval >= (-tahun) && interval <= (9999-tahun)) {
        bool kabisat;
        for (int i = 0; i <= abs(interval); i++) { // abs() digunakan untuk mengembalikan nilai absolut dari suatu bilangan, yaitu nilai non-negatif dari suatu bilangan.
            int semua_tahun = tahun + i * (interval > 0 ? 1 : -1);
            kabisat = (semua_tahun % 4 == 0 && (semua_tahun % 100 != 0 || semua_tahun % 400 == 0));
            cout << semua_tahun << " " << (kabisat ? "Kabisat" : "Bukan Kabisat") << endl;
        }
    }
    else {
        cout << "Inputan Anda Salah";
    }
    return 0;
}
