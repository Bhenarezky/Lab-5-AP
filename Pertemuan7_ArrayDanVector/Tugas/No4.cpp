#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("CLS");
    vector<int> numbers;
    int input;

    cout << "Masukkan deretan angka (masukkan 0 untuk selesai): ";
    do {
        cin >> input;
        numbers.push_back(input);
    } while (input != 0);

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << "\nPanjang vektor: " << numbers.size() << endl;

    while (!numbers.empty()) {
        cout << numbers.front() << endl;
        numbers.erase(numbers.begin());
    }

    cout << "Panjang vektor setelah dihapus: " << numbers.size() << endl;

    return 0;
}
