#include <iostream>
using namespace std;

int i;

class mahasiswa
{
private:
    string nama;
    string nim;
    int jumlahMatkul;
    string matakuliah[100];
    int jumlahSKS[100];
    int biayaPerSKS = 150000;
    int totalBiaya;
    int diskon;

public:
    void input()
    {
        cout << "Masukkan nama: ";
        cin >> nama;
        cout << "Masukkan NIM: ";
        cin >> nim;
        cout << "Masukkan jumlah matakuliah: ";
        cin >> jumlahMatkul;
        for (int i = 0; i < jumlahMatkul; i++)
        {
            cout << "Masukkan matakuliah ke-" << i + 1 << ": ";
            cin >> matakuliah[i];
            cout << "Masukkan jumlah sks: ";
            cin >> jumlahSKS[i];
        }
    }

    int totalSKS(int i)
    {
        if (i == jumlahMatkul)
            return 0;
        else
            return jumlahSKS[i] + totalSKS(i + 1);
    }

    void hitungBiaya()
    {
        diskon = totalSKS(i) * biayaPerSKS * 0.25;
        totalBiaya = (totalSKS(i) * biayaPerSKS) - diskon;
    }

    void output()
    {
        cout << "\n\nNama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "Daftar matakuliah: " << endl;
        for (int i = 0; i < jumlahMatkul; i++)
        {
            cout << "Matakuliah ke-" << i + 1 << ": " << matakuliah[i] << endl;
            cout << "Jumlah sks: " << jumlahSKS[i] << endl;
        }
        cout << "Total biaya sebelum diskon: " << totalSKS(i) * biayaPerSKS << endl;
        cout << "diskon: " << diskon << endl;
        cout << "Total biaya: " << totalBiaya << endl;
    }
};

int main()
{
    mahasiswa mhs;
    mhs.input();
    mhs.hitungBiaya();
    mhs.output();
    return 0;
}