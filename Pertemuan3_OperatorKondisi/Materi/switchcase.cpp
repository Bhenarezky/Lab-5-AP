#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int umur;
    cout << "Berapa umur Kamu :";
    cin >> umur;

    switch (umur) {
        case 0 ... 5:
            cout << "Balita";
            break;
        case 6 ... 14:
            cout << "anak-anak";
            break;
        case 15 ... 25:
            cout << "remaja";
            break;
        case 26 ... 50 :
            cout << "dewasa";
            break;
        case 51 ... 100:
            cout << "lansia";
            break;
        default:
            cout << "Invalid";
            break;
    }

    return 0;
}
