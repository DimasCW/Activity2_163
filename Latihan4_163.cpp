// Latihan4_163.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float LuasPersegi(float p, float l) {
    return p * l;
}
float LuasLingkaran(float r) {
    return 3.14 * r * r;
}
float LuasSegitiga(float a, float t) {
    return 0.5 * a * t;
}

int main()
{
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    
    do {
        cout << "\n\n========================" << endl;
        cout << "========= MENU =========" << endl;
        cout << "========================" << endl;
        cout << "1. Luas Persegi" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Luas Segitiga" << endl;
        cout << "4. Exit" << endl;
        cout << "Pilihan (1/2/3/4) : ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "Masukkan Panjang = ";
            cin >> panjang;
            cout << "Masukkan Lebar = ";
            cin >> lebar;
            cout << "Luas Persegi Panjang = " << LuasPersegi(panjang, lebar);
            break;
        case 2:
            cout << "Masukkan jari - jari = ";
            cin >> jejari;
            cout << "Luas lingkaran = " << LuasLingkaran(jejari);
            break;
        case 3:
            cout << "Masukkan Alas = ";
            cin >> alas;
            cout << "Masukkan Lebar = ";
            cin >> tinggi;
            cout << "Luas Segitiga = " << LuasSegitiga(alas, tinggi);
            break;
        case 4:
            break;
        default:
            cout << "pilihan salah" << endl;
            break;
        }
    } while (pilihan != 4);
}

