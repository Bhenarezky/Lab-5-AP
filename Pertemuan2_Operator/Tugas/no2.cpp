#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B, C;
    double x1, x2;

    cout << "Masukkan nilai A: ";
    cin >> A;

    cout << "Masukkan nilai B: ";
    cin >> B;

    cout << "Masukkan nilai C: ";
    cin >> C;

    double D = B*B - 4*A*C;

    x1 = (-B + sqrt(D)) / (2*A);
    x2 = (-B - sqrt(D)) / (2*A);
    cout << "Akar-akar persamaan: x1 = " << x1 << " dan x2 = " << x2 << endl;
}
