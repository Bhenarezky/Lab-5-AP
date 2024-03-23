#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int bil;
    string hasil;

    cout << "Masukan Bilangan Bulat :";
    cin >> bil;

    hasil = (bil % 2 == 0) ? "Bilangan Genap" : "Bilangan Ganjil";
    cout << hasil << endl;
    return 0;
}