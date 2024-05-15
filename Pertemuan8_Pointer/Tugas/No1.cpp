#include <iostream>
using namespace std;

int main() {
    int ganjil[10];
    int num = 1;
    
    for (int i = 0; i < 10; ++i) {
        ganjil[i] = num + 2;
    }

    for (int i = 0; i < 10; ++i) {
        cout << "Bilangan ganjil: " << ganjil[i] << ", Alamat memori: " << &ganjil[i] << endl;
    }

    return 0;
}
