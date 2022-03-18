#include <iostream>
#include <math.h>
using namespace std;

void Jumlah()
{
    float x, y;
    float hasil;
    cout << " Penjumlahan\n\n";
    cout << " Masukkan Bilangan Pertama : ";
    cin >> x;
    cout << " Masukkan Bilangan Kedua : ";
    cin >> y;
    hasil = x + y;
    cout << " Hasil Penghitungan : " << hasil;
}
void Kurang()
{
    float x, y;
    float hasil;
    cout << " Pengurangan\n\n";
    cout << " Masukkan Bilangan Pertama : ";
    cin >> x;
    cout << " Masukkan Bilangan Kedua : ";
    cin >> y;
    hasil = x - y;
    cout << " Hasil Penghitungan : " << hasil;
}
void Kali()
{
    float x, y;
    float hasil;
    cout << " Perkalian\n\n";
    cout << " Masukkan Bilangan Pertama : ";
    cin >> x;
    cout << " Masukkan Bilangan Kedua : ";
    cin >> y;
    hasil = x * y;
    cout << " Hasil Penghitungan : " << hasil;
}