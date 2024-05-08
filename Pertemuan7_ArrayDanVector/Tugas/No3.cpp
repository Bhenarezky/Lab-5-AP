#include <iostream>
#include <string>
#include <algorithm> // Perlu disertakan untuk reverse

using namespace std;

string membalikkanString(string str) {
    int n = str.length();
    int mid = n / 2;
    string left = str.substr(0, mid);
    string right = str.substr(mid + (n % 2), mid); 

    reverse(left.begin(), left.end());
    reverse(right.begin(), right.end());

    str = left + right;
    return str;
}

int main() {
    system("CLS");
    string kalimat, perbaikan;
    cout << "Masukan string maksimal 100 karakter (A-Z): ";
    getline(cin, kalimat);
    perbaikan = membalikkanString(kalimat);

    cout << "String yang telah di perbaiki : " << perbaikan << endl;

    return 0;
}
