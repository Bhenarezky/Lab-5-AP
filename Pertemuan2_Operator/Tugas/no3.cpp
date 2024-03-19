#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265359;


int main() {
    char pilihan;
    cout << "Pilih bangun ruang:\n";
    cout << "a. Kerucut\n";
    cout << "b. Limas Segitiga\n";
    cout << "c. Bola\n";
    cout << "d. Prisma\n";
    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
        case 'a': {
            double r, t, s, luasPermukaanKerucut, volumeKerucut;
            cout << "Masukkan jari-jari kerucut: ";
            cin >> r;
            cout << "Masukkan tinggi kerucut: ";
            cin >> t;
            s = sqrt(r * r + t * t);
            luasPermukaanKerucut = PI * r * (r + s);
            volumeKerucut = (1.0 / 3.0) * PI * r * r * t;
            cout << "Luas permukaan kerucut: " << luasPermukaanKerucut << endl;
            cout << "Volume kerucut: " << volumeKerucut << endl;
            break;
        }
        case 'b': {
            double s1, s2, s3, tinggi, luasPermukaanLimasSegitiga, volumeLimasSegitiga, Lalas;
            cout << "Masukkan panjang sisi segitiga alas limas: ";
            cin >> s1;
            cout << "Masukkan panjang sisi segitiga miring limas: ";
            cin >> s2;
            cout << "Masukkan panjang sisi segitiga miring limas: ";
            cin >> s3;
            cout << "Masukkan tinggi limas: ";
            cin >> tinggi;
            Lalas = s1 + s2 + s3;
            luasPermukaanLimasSegitiga = Lalas * tinggi / 2.0;
            volumeLimasSegitiga = (1.0 / 3.0) * Lalas * tinggi;
            cout << "Luas permukaan limas segitiga: " << luasPermukaanLimasSegitiga << endl;
            cout << "Volume limas segitiga: " << volumeLimasSegitiga << endl;
            break;
        }
        case 'c': {
            double r, luasPermukaanBola, volumeBola;
            cout << "Masukkan jari-jari bola: ";
            cin >> r;
            luasPermukaanBola = 4 * PI * r * r;
            volumeBola = (4.0 / 3.0) * PI * r * r * r;
            cout << "Luas permukaan bola: " << luasPermukaanBola << endl;
            cout << "Volume bola: " << volumeBola << endl;
            break;
        }
        case 'd': {
            double alas, tinggi, sisi, luasPermukaanPrisma, volumePrisma;
            cout << "Masukkan panjang sisi alas prisma: ";
            cin >> alas;
            cout << "Masukkan tinggi prisma: ";
            cin >> tinggi;
            cout << "Masukkan panjang sisi tegak prisma: ";
            cin >> sisi;
            luasPermukaanPrisma = 2 * alas * tinggi + 3 * alas * sisi;
            volumePrisma = alas * tinggi * sisi;
            cout << "Luas permukaan prisma: " << luasPermukaanPrisma << endl; 
            cout << "Volume prisma: " << volumePrisma << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
