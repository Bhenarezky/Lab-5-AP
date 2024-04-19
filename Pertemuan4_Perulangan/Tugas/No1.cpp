#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int deret, n, i;
    cout << "Masukkan jumlah deret: ";
    cin >> deret;

    n = 1; 
    for (i = 0; i < deret; ++i) {
        cout << n << " "; 
        if (i % 2 == 0) { 
            n += 5; 
        } else {
            n += 3; 
        }
    }
    cout << endl;
    return 0;
}
