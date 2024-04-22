#include <iostream>
using namespace std;

int main() { 
    system("CLS");
    int tahun, interval;
    bool kabisat;

    
    cout << "Input Tahun  : ";
    cin >> tahun;

    cout << "Input Interval  : ";
    cin >> interval;

    if (tahun >= 1000 && tahun <= 9000 && interval >= (-tahun) && interval <= (9999-tahun)) {
        if (interval > 0) {
            for (int i = 0; i <= interval; i++) {
                int semua_tahun = tahun + i;
                kabisat = (semua_tahun % 4 == 0 && (semua_tahun % 100 != 0 || semua_tahun % 400 == 0));
                cout << semua_tahun << " " << (kabisat ? "Kabisat" : "Bukan Kabisat") << endl;
            }
        } else {
            for (int i = 0; i >= interval; i--) {
                int semua_tahun = tahun + i;
                kabisat = (semua_tahun % 4 == 0 && (semua_tahun % 100 != 0 || semua_tahun % 400 == 0));
                cout << semua_tahun << " " << (kabisat ? "Kabisat" : "Bukan Kabisat") << endl;
            }
        }
    }
    else {
        cout << "Inputan Anda Salah";
    }
    return 0;
}
