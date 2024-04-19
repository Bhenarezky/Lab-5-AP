#include <iostream>
using namespace std;

int main() {
    system("cls");
    int baris, i, j; 

    cout << " Masukan Jumlah Baris :";
    cin >> baris;

    for (i = baris; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << i;  
        }
        cout << endl;
    }

    return 0;
}
