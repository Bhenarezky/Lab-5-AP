#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

float hitungEfisiensi(int a, int b, int c) {
    return sqrt(a * a + b * b + c * c);
}

int main() {
    system("CLS");
    int A[3], B[3], C[3];

    cout << "Masukkan nilai [1][1]: ";
    cin >> A[0];
    cout << "Masukkan nilai [1][2]: ";
    cin >> A[1];
    cout << "Masukkan nilai [1][3]: ";
    cin >> A[2];

    cout << "Masukkan nilai [2][1]: ";
    cin >> B[0];
    cout << "Masukkan nilai [2][2]: ";
    cin >> B[1];
    cout << "Masukkan nilai [2][3]: ";
    cin >> B[2];

    cout << "Masukkan nilai [3][1]: ";
    cin >> C[0];
    cout << "Masukkan nilai [3][2]: ";
    cin >> C[1];
    cout << "Masukkan nilai [3][3]: ";
    cin >> C[2];

    cout << endl << "Tabel 3x3:" << endl;
    cout << " " << A[0] << " " << A[1] << " " << A[2] << endl;
    cout << " " << B[0] << " " << B[1] << " " << B[2] << endl;
    cout << " " << C[0] << " " << C[1] << " " << C[2] << endl;

    cout << setprecision(2);
    float maxEfisiensi = 0.0;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                float  efisiensi = hitungEfisiensi(A[i], B[j], C[k]);
                if (efisiensi > maxEfisiensi) {
                    maxEfisiensi = efisiensi;
                }
            }
        }
    }

    cout << "Efisiensi tertinggi: " << maxEfisiensi << endl;

    return 0;
}
