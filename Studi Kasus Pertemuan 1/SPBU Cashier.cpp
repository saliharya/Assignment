#include <iostream>
#include <fstream>

using namespace std;

int hargaPertalite = 7000;
int hargaPertamax = 9000;
float jumlahLiter;
int harga, pilihan;
char nama[50];

void head()
{
    cout << "----------------------------------------------------" << endl;
    cout << "|                  WELCOME TO SPBU	                |" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "|DAFTAR BENSIN :                                   |" << endl;
    cout << "|1. Pertamax                                       |" << endl;
    cout << "|2. Pertalite                                      |" << endl;
    cout << "----------------------------------------------------" << endl;
}

void totalSemua()
{
    if (pilihan == 1)
        harga = jumlahLiter * hargaPertalite;
    else if (pilihan == 2)
        harga = jumlahLiter * hargaPertalite;
}

void cetakStruk()
{
    ofstream file;
    file.open("struk.txt");
    file << "----------------------------------------------------" << endl;
    file << "|                 STRUK PEMBELIAN                  |" << endl;
    file << "|                      SPBU                        |" << endl;
    file << "----------------------------------------------------" << endl
         << endl;
    file << "Nama Customer      : " << nama << endl;
    file << "Jumlah Liter       : " << jumlahLiter << endl;
    file << "Total Pembayaran   : " << harga << endl;
    file << "\n----------------------------------------------------" << endl;
    file << "|                 TERIMAKASIH ATAS                  |" << endl;
    file << "|                   KUNJUNGANNYA                    |" << endl;
    file << "----------------------------------------------------" << endl;
}

int main()
{
    head();
    cout << "Masukan Nama Pelanggan : ";
    cin >> nama;
    cout << "Masukan Pilihan : ";
    cin >> pilihan;
    cout << endl;

    if (pilihan == 1)
    {
        string jenisBahanBakar = "Pertamax";
        cout << "Mau isi Pertamax berapa gan?" << endl;
        cin >> jumlahLiter;
        totalSemua();
        cout << "Total Bayar : " << harga << endl;
        cetakStruk();
    }
    else if (pilihan == 2)
    {
        string jenisBahanBakar = "Pertalite";
        cout << "Mau isi Pertalite berapa gan?" << endl;
        cin >> jumlahLiter;
        totalSemua();
        cout << "Total Bayar : " << harga << endl;
        cetakStruk();
    }
    else
        cout << "Maaf Bahan Bakar Tidak Tersedia";

    return 0;
}
