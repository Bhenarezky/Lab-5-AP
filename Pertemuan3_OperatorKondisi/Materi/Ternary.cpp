#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int tinggi;
    string hasil;

    cout << "Masukan Umur :";
    cin >> tinggi;

    hasil = (tinggi > 200) ? "Kamu Berbakat Menjadi Pebasket" : "Kamu Jangan Jadi Pebasket";
    cout << hasil << endl;
    return 0;
}