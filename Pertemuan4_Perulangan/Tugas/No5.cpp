#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int bil;
    bool prima = true;

    cout << "Masukkan sebuah bilangan: ";
    cin >> bil;

    if (bil <= 1) {
        prima = false;
    } else {
        for (int i = 2; i <= bil / 2; ++i) {
            if (bil % i == 0) {
                prima = false;
                break;
            }
        }
    }

    if (prima)
        cout << bil << " adalah bilangan prima." << endl;
    else
        cout << bil << " bukan bilangan prima." << endl;

    return 0;
}
