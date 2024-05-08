#include <iostream>
#include <typeinfo>
using namespace std;

string fizzBuzz(int n) {
    if (n % 3 == 0 && n % 5 == 0) return "FizzBuzz";
    if (n % 3 == 0) return "Fizz";
    if (n % 5 == 0) return "Buzz";
    return to_string(n);
}

int nilaiTerakhir; 

void deretSegitiga(int x) {
    for (int i = 1; i <= x; i++) {
        int angkaSegitiga = i * (i + 1);
        if (i < x) {
            cout << fizzBuzz(angkaSegitiga) << ", ";
        } else {
            cout << fizzBuzz(angkaSegitiga); 
        }
        if (angkaSegitiga % 3 != 0 && angkaSegitiga % 5 != 0){
            nilaiTerakhir = angkaSegitiga;
        }
    }
    cout << endl;
    cout << "Tipe data " << nilaiTerakhir << " adalah " << typeid(nilaiTerakhir).name();

}

int main() {
    system("CLS");
    int x;
    cout << "Masukkan bilangan x (3 < x <= 100): ";
    cin >> x;
    
    if (x < 3 || x >= 100) { 
        cout << "Input tidak valid, berikan nilai dengan rentang 3-100" << endl;
    } 
    
    deretSegitiga(x);
    

    return 0;
}