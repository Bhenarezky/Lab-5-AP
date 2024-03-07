#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, nim, kom;
    double ipk;

    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan NIM Mahasiswa: ";
    getline(cin, nim);
    cout << "Masukkan Kom Mahasiswa: ";
    getline(cin, kom);
    cout << "Masukkan IPK Mahasiswa: ";
    cin >> ipk;

    system("cls");
    cout << "\nData Mahasiswa:\n";
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "Program Studi: " << kom << endl;
    cout << "IPK: " << ipk << endl;

}
