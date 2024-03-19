#include <iostream>

using namespace std;

int main() {
    system("cls");

    int bilangan1 = 10;
    int bilangan2 = 12;

    int hasil = ~bilangan1;
    cout << hasil << endl;

    int hasil1 = bilangan1 ^ bilangan2;
    cout << hasil1 << endl;


    return 0;
}