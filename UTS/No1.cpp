#include <iostream>
#include <string>
using namespace std;

int main() {
    system("CLS");
    string kata;

    cout << "Masukan Kata :";
    getline(cin, kata);

    for (int i = kata.size() - 1; i >= 0; --i) {
        cout << kata[i] << endl;
    }

    return 0;
}
