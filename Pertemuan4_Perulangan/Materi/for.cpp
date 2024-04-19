#include <iostream>
#include <string>
using namespace std;

int main() {
    system("CLS");
    
    string nama = "noel";
    
    for (int i = 0; i < nama.length(); i++) {
        cout << nama[i] << i << endl;
    }
    
    for (char c : nama) {
        cout << c << endl;
    }
    return 0;
}