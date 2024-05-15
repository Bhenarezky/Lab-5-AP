#include <iostream>
using namespace std;

int main() {
    system("CLS");

    const char* kata = "K O M P U T E R";
    
    const char* ptr = kata;
    
    char hurufKelima = *(ptr + 8);
    
    cout << "Huruf kelima dari kata " << kata << " adalah: " << hurufKelima << endl;

    return 0;
}
