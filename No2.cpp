#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama1, nama2;

    system("cls");
    cout << "Masukkan Nama Mahasiswa (menggunakan getline): ";
    getline(cin, nama1); 
    cout << "Masukkan Nama Mahasiswa (menggunakan cin): ";
    cin >> nama2; 

    cout << "Nama Mahasiswa (menggunakan getline): " << nama1 << endl; 
    cout << "Nama Mahasiswa (menggunakan cin): " << nama2 << endl; 
    
    
    //jika menggunkan cin maka string yang di spasi tidak akan di simpan dan cin lebih cocok untuk data yang bertipe int, double, char,dll
    //jika menggunakan getline maka seluruh string akan tersimpan meskipun di spasi 
}
