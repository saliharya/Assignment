#include <iostream>
using namespace std;

struct mahasiswa {
    string NIM;
    string nama;
    string prodi;
    string no_hp;
};

class DataMahasiswa {
   public:
    void inputDataMahasiswa(int &jumlah_mahasiswa, mahasiswa data_mahasiswa[]);
    void printDataMahasiswa(int jumlah_mahasiswa, mahasiswa data_mahasiswa[]);
    void sortDescending(int jumlah_mahasiswa, mahasiswa data_mahasiswa[]);
    void searchByNIM(int jumlah_mahasiswa, mahasiswa data_mahasiswa[],
                     string NIM);
};

void DataMahasiswa::inputDataMahasiswa(int &jumlah_mahasiswa,
                                       mahasiswa data_mahasiswa[]) {
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah_mahasiswa;
    for (int i = 0; i < jumlah_mahasiswa; i++) {
        cout << "Masukkan data mahasiswa ke-" << i + 1 << endl;
        cout << "NIM: ";
        cin >> data_mahasiswa[i].NIM;
        cout << "Nama: ";
        cin >> data_mahasiswa[i].nama;
        cout << "Prodi: ";
        cin >> data_mahasiswa[i].prodi;
        cout << "No HP: ";
        cin >> data_mahasiswa[i].no_hp;
    }
}

void DataMahasiswa::printDataMahasiswa(int jumlah_mahasiswa,
                                       mahasiswa data_mahasiswa[]) {
    cout << "Data mahasiswa: " << endl;
    for (int i = 0; i < jumlah_mahasiswa; i++) {
        cout << "NIM: " << data_mahasiswa[i].NIM << endl;
        cout << "Nama: " << data_mahasiswa[i].nama << endl;
        cout << "Prodi: " << data_mahasiswa[i].prodi << endl;
        cout << "No HP: " << data_mahasiswa[i].no_hp << endl;
    }
}

void DataMahasiswa::sortDescending(int jumlah_mahasiswa,
                                   mahasiswa data_mahasiswa[]) {
    int i, j;
    mahasiswa temp;
    cout << "Data mahasiswa setelah diurutkan: " << endl;
    for (i = 0; i < jumlah_mahasiswa - 1; i++) {
        for (j = 0; j < jumlah_mahasiswa - i - 1; j++) {
            if (data_mahasiswa[j].NIM < data_mahasiswa[j + 1].NIM) {
                temp = data_mahasiswa[j];
                data_mahasiswa[j] = data_mahasiswa[j + 1];
                data_mahasiswa[j + 1] = temp;
            }
        }
    }
}

void DataMahasiswa::searchByNIM(int jumlah_mahasiswa,
                                mahasiswa data_mahasiswa[], string NIM) {
    int i;
    for (i = 0; i < jumlah_mahasiswa; i++) {
        if (data_mahasiswa[i].NIM == NIM) {
            cout << "Data mahasiswa dengan NIM " << NIM << " ditemukan" << endl;
            cout << "NIM: " << data_mahasiswa[i].NIM << endl;
            cout << "Nama: " << data_mahasiswa[i].nama << endl;
            cout << "Prodi: " << data_mahasiswa[i].prodi << endl;
            cout << "No HP: " << data_mahasiswa[i].no_hp << endl;
            return;
        }
    }
    cout << "Data mahasiswa dengan NIM " << NIM << " tidak ditemukan" << endl;
}

void cetakGaris() {
    cout << "=================================================================="
            "=============="
         << endl;
}

int main() {
    DataMahasiswa data_mahasiswa;
    mahasiswa data_mahasiswa_array[100];
    int jumlah_mahasiswa;
    string NIM;
    data_mahasiswa.inputDataMahasiswa(jumlah_mahasiswa, data_mahasiswa_array);
    cetakGaris();
    data_mahasiswa.printDataMahasiswa(jumlah_mahasiswa, data_mahasiswa_array);
    cetakGaris();
    data_mahasiswa.sortDescending(jumlah_mahasiswa, data_mahasiswa_array);
    cetakGaris();
    data_mahasiswa.printDataMahasiswa(jumlah_mahasiswa, data_mahasiswa_array);
    cetakGaris();
    cout << "Masukkan NIM mahasiswa yang ingin dicari: ";
    cin >> NIM;
    data_mahasiswa.searchByNIM(jumlah_mahasiswa, data_mahasiswa_array, NIM);
    return 0;
}