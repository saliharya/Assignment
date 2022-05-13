#include <iostream>
using namespace std;

class Cetak {
   public:
    void header() {
        cout << "----------------------------------------------\n";
        cout << "|                                            |\n";
        cout << "|    PROGRAM HITUNG NILAI MAX, MIN, RATA2    |\n";
        cout << "|                                            |\n";
        cout << "----------------------------------------------\n\n";
    }
    void input() {
        cout << " Nama Dosen 			: ";
        cin >> namaDosen;
        cout << " Masukkan nama matkul		: ";
        cin >> namaMatkul;
        cout << " Masukkan jumlah Mahasiswa	: ";
        cin >> jumlahMahasiswa;
        cout << endl;

        for (int i = 0; i < jumlahMahasiswa; i++) {
            cout << " Masukkan nilai Tugas	: ";
            cin >> nilaiMahasiswa[i];
        }
    }
    void process() {
        int nilaiMin = nilaiMahasiswa[0];
        for (int i = 0; i < jumlahMahasiswa; i++) {
            if (nilaiMahasiswa[i] < nilaiMin) nilaiMin = nilaiMahasiswa[i];
        }

        int nilaiMax = nilaiMahasiswa[0];
        for (int i = 0; i < jumlahMahasiswa; i++) {
            if (nilaiMahasiswa[i] > nilaiMax) nilaiMax = nilaiMahasiswa[i];
        }
        rataRata = 0;
        for (int i = 0; i < jumlahMahasiswa; i++) rataRata += nilaiMahasiswa[i];
        rataRata /= jumlahMahasiswa;

        cout << "Nilai Rata-rata: " << rataRata << endl;
        cout << "Nilai Min: " << nilaiMin << endl;
        cout << "Nilai Max: " << nilaiMax << endl;
    }

   private:
    int jumlahMahasiswa;
    string namaMatkul;
    string namaDosen;
    int nilaiMahasiswa[100];
    int total = 0;
    float rataRata = 0;
};

int main() {
    Cetak ctk;
    ctk.header();
    ctk.input();
    ctk.process();
    return 0;
}