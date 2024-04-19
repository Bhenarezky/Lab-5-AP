#include <iostream>
using namespace std;

int main() {
    system("CLS");

    cout << "Input nilai n : ";
    int n;
    cin >> n;

    if (n >= 1 && n <= 10000) {
        string kata = "Hore!";
        for (char c : kata) {
            if (c == 'o' || c == 'e' || c == '!') {
                for (int i = 0; i < n; ++i) {
                    cout << c;
                }
            } else {
                cout << c;
            }
        }
    } else {
        cout << "Inputan Anda Di Luar Jangkauan";
    }
    return 0;
}
