#include <iostream>
using namespace std;

int num3 = 10; // variabel global

int sumNumber(int num1, int num2 = 10){
    // int num3 = 10;  (variabel lokal)
    return num1 + num2 + num3;
}

int main() {
    system("CLS");
    
    int hasil = sumNumber(5);

    cout << "Hasil = " << hasil;
    
    return 0;
}