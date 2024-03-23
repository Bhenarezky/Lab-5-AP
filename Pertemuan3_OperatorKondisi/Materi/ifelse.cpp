#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    char nilai;
    cout << "Berapa Nilai Kamu :";
    cin >> nilai;

    if (nilai  == 'A') {
        cout << "Bagus ";
    }
    else if (nilai  == 'B') {
        cout << "Lumayan";
    }
    else if (nilai  == 'C') {
        cout << "Biasa ";
    }
    else if (nilai  == 'D') {
        cout << "Kurang Baik";
    }
    else if (nilai  == 'E') {
        cout << "Jelek";
    }
    else {
        cout << "Invalid";
    }
    
    return 0;
}
