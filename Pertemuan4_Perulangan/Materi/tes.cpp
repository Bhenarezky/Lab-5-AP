#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    system("cls");
    
    cout << "Masukkan nama Anda: ";
    getline(cin, nama);
    
    for (char &ch : nama) {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
            ch = 'o';
        }
    }
    
    cout << "Nama setelah diubah: " << nama << endl;
    
    return 0;
}
