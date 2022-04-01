#include <iostream>
#include <fstream>
using namespace std;

int hargaayamgeprek = 21000;
int hargaayamgoreng = 17000;
int hargaudang = 19000;
int hargacumi = 20000;
int hargaayambakar = 25000;
int jarak;
int totalBayar;
char nama[50];
int totalHargaAyamGeprek;
int totalHargaAyamGoreng;
int totalHargaUdangGoreng;
int totalHargaCumiGoreng;
int totalHargaAyamBakar;
int diskonSementara, ongkir;

void head()
{
    cout << "----------------------------------------------------" << endl;
    cout << "|             WELCOME TO R.M. PADANG               |" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "|DAFTAR MENU   :              HARGA :              |" << endl;
    cout << "|1. Ayam Geprek               21000                |" << endl;
    cout << "|2. Ayam Goreng               17000                |" << endl;
    cout << "|3. Udang Goreng              19000                |" << endl;
    cout << "|4. Cumi Goreng               20000                |" << endl;
    cout << "|5. Ayam Bakar                25000                |" << endl;
    cout << "|0. Exit & Cetak Struk                             |" << endl;
    cout << "----------------------------------------------------" << endl;
}

void cetakStruk()
{
    ofstream file;
    file.open("slip.txt");
    file << "-----------------------------------------------------" << endl;
    file << "|                 SLIP PEMBELIAN                    |" << endl;
    file << "|                     MAKANAN                       |" << endl;
    file << "-----------------------------------------------------" << endl
         << endl;
    file << "Nama Customer      : " << nama << endl;
    file << "Item Yang Dipesan  :" << endl;
    file << "1. Ayam Geprek     @" << totalHargaAyamGeprek << endl;
    file << "2. Ayam Goreng     @" << totalHargaAyamGoreng << endl;
    file << "3. Udang Goreng    @" << totalHargaUdangGoreng << endl;
    file << "4. Cumi Goreng     @" << totalHargaCumiGoreng << endl;
    file << "5. Ayam Bakar      @" << totalHargaAyamBakar << endl;
    file << "Diskon             @" << diskonSementara << endl;
    file << "Total Pembayaran   : " << totalBayar << endl;
    file << "\n----------------------------------------------------" << endl;
    file << "|                 TERIMAKASIH ATAS                  |" << endl;
    file << "|                    PESANANNYA                     |" << endl;
    file << "-----------------------------------------------------" << endl;
}

void diskon()
{
    if (jarak <= 3)
        ongkir = 15000;
    else if (jarak > 3)
        ongkir = 25000;
    if ((totalHargaAyamGeprek + totalHargaAyamGoreng + totalHargaUdangGoreng + totalHargaCumiGoreng + totalHargaAyamBakar) > 25000)
        diskonSementara = ongkir - 3000;
    else if ((totalHargaAyamGeprek + totalHargaAyamGoreng + totalHargaUdangGoreng + totalHargaCumiGoreng + totalHargaAyamBakar) > 50000)
        diskonSementara = (ongkir - 5000) + ((totalHargaAyamGeprek + totalHargaAyamGoreng + totalHargaUdangGoreng + totalHargaCumiGoreng + totalHargaAyamBakar) * (15 / 100));
    else if ((totalHargaAyamGeprek + totalHargaAyamGoreng + totalHargaUdangGoreng + totalHargaCumiGoreng + totalHargaAyamBakar) > 150000)
        diskonSementara = (ongkir - 8000) + ((totalHargaAyamGeprek + totalHargaAyamGoreng + totalHargaUdangGoreng + totalHargaCumiGoreng + totalHargaAyamBakar) * (35 / 100));
    else
        diskonSementara = 0;
}

int main()
{
    int kuantitas, pilihan;
    head();
    cout << "Masukan Nama Pelanggan : ";
    cin >> nama;
    cout << "Masukan Jarak Rumah : ";
    cin >> jarak;
    do
    {
        cout << "Masukkan Pilihan : ";
        cin >> pilihan;

        if (pilihan == 1)
        {

            cout << "Ayam Geprek Berapa Porsi?";
            cin >> kuantitas;
            totalHargaAyamGeprek = hargaayamgeprek * kuantitas;
        }
        else if (pilihan == 2)
        {
            cout << "Ayam Goreng Berapa Porsi?";
            cin >> kuantitas;
            totalHargaAyamGoreng = hargaayamgoreng * kuantitas;
        }
        else if (pilihan == 3)
        {
            cout << "Udang Goreng Berapa Porsi?";
            cin >> kuantitas;
            totalHargaUdangGoreng = hargaudang * kuantitas;
        }
        else if (pilihan == 4)
        {
            cout << "Cumi Goreng Berapa Porsi?";
            cin >> kuantitas;
            totalHargaCumiGoreng = hargacumi * kuantitas;
        }
        else if (pilihan == 5)
        {
            cout << "Ayam Bakar Berapa Porsi?";
            cin >> kuantitas;
            totalHargaAyamBakar = hargaayambakar * kuantitas;
        }
        else if (pilihan == 0)
        {
            diskon();
            totalBayar = (totalHargaAyamGeprek + totalHargaAyamGoreng + totalHargaUdangGoreng + totalHargaCumiGoreng + totalHargaAyamBakar) - diskonSementara;
            cetakStruk();
        }
        else
            cout << "Maaf Menu Yang Dipilih Tidak Tersedia" << endl;
    } while (pilihan != 0);

    return 0;
}