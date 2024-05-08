#include <iostream>
#include <array>
using namespace std;

int main() {
    system("CLS");
    
    array <int, 5> nilai;

    for(int i = 0; i < 5; i++) {
        nilai[i] = i;
        cout << "Nilai [" << i << "] = " << nilai[i] << endl;
        cout << "Address = " << &nilai[i] << endl;
    }

    cout << "Ukuran = " << nilai.size() << endl;
    cout << "Address Awal = " << nilai.begin() << endl;
    cout << "Address Akhir = " << nilai.end() << endl;

    cout << "Nilai Ke 2 = " << nilai.at(2) << endl;
    
    return 0;
}