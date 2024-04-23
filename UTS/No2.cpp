#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int angka;

    cout << "Masukan angka :";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << "angka " << angka << " adalah bilangan genap";
    } else {
        cout << "angka " << angka << " adalah bilangan ganjil";
    } 
    
    cout << endl;
    

    if (angka % 3 == 0) {
        cout << "angka " << angka << " habis dibagi 3";
    } else {
        cout << "angka " << angka << " tidak habis dibagi 3";
    } 
    
    cout << endl;

    if (angka % 5 == 0) {
        cout << "angka " << angka << " habis dibagi 5";
    } else {
        cout << "angka " << angka << " tidak habis dibagi 5";
    } 
    
    cout << endl;

    if (angka % 7 == 0) {
        cout << "angka " << angka << " habis dibagi 7";
    } else {
        cout << "angka " << angka << " tidak habis dibagi 7";
    } 
    
    cout << endl;


    return 0;
}