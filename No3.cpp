#include <iostream>

using namespace std;

int main() {
    double meter, kilometer;

    system("cls");
    cout << "Masukkan jarak dalam meter: ";
    cin >> meter;

    kilometer = meter / 1000;

    cout << "Jarak dalam kilometer: " << kilometer << " km" << endl;
}
