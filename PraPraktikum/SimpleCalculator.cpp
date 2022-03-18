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
int main() {

  int pil;
  char pil2;

  cout << " ===== KALKULATOR SEDERHANA =====\n";
  cout << " Pilih Operasi Aritmatika\n" <<
    endl;
  cout << " 1. Penjumlahan\n";
  cout << " 2. Pengurangan\n";
  cout << " 3. Perkalian\n";
  cout << " 4. Pembagian\n";
  cout << " 5. Perpangkatan\n";
  cout << " 6. Akar Pangkat\n";
  cout << "\n Pilihan Anda : ";
  cin >> pil;
  cout << " ====================================" << endl;
  switch (pil) {
  case 1:
    Jumlah();
    break;
  case 2:
    Kurang();
    break;
  case 3:
    Kali();
    break;
  case 4:
    Bagi();
    break;
  case 5:
    Pangkat();
    break;
  case 6:
    Akar();
    break;
  default:
    cout << " Pilihan Anda Tidak Ada\n";
    cout << " Silahkan Jalankan Program dan Input Ulang\n";
    break;
  }
  return 0;
}
