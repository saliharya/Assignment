#include <iostream>
using namespace std;

class Jurusan {
   private:
    string jurusan[3];
    int jumlahAngkatan;
    int data[10][3];
    int barisMin = 0, kolomMin = 0;
    int barisMax = 0, kolomMax = 0;

   public:
    void input();
    int sum(int data[10][3]);
    int min(int data[10][3]);
    int max(int data[10][3]);
    int avg(int data[10][3]);
    void output();
};

void Jurusan::input() {
    cout << "Masukkan 3 Jurusan : " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Masukkan Jurusan Ke-" << i + 1 << " : ";
        cin >> jurusan[i];
    }
    cout << endl;
    cout << "Masukkan Banyak Angkatan Lulusan : ";
    cin >> jumlahAngkatan;
    for (int i = 0; i < jumlahAngkatan; i++) {
        cout << "Angkatan ke-" << i + 1 << " : " << endl;
        for (int j = 0; j < 3; j++) {
            cout << jurusan[j] << " : ";
            cin >> data[i][j];
        }
        cout << endl;
    }
}

int Jurusan::sum(int data[10][3]) {
    int sum = 0;
    for (int i = 0; i < jumlahAngkatan; i++) {
        for (int j = 0; j < 3; j++) {
            sum += data[i][j];
        }
    }
    return sum;
}

int Jurusan::min(int data[10][3]) {
    int min = data[0][0];
    for (int i = 0; i < jumlahAngkatan; i++) {
        for (int j = 0; j < 3; j++) {
            if (data[i][j] < min) {
                min = data[i][j];
                barisMin = i;
                kolomMin = j;
            }
        }
    }
    return min;
}

int Jurusan::max(int data[10][3]) {
    int max = data[0][0];
    for (int i = 0; i < jumlahAngkatan; i++) {
        for (int j = 0; j < 3; j++) {
            if (data[i][j] > max) {
                max = data[i][j];
                barisMax = i;
                kolomMax = j;
            }
        }
    }
    return max;
}

int Jurusan::avg(int data[10][3]) {
    int avg = sum(data) / (jumlahAngkatan * 3);
    return avg;
}

void Jurusan::output() {
    cout << "Tampil Data Lulus" << endl << endl;
    cout << "\t\t\t\t" << jurusan[0] << " " << jurusan[1] << " " << jurusan[2]
         << endl;
    for (int i = 0; i < jumlahAngkatan; i++) {
        cout << "Angkatan ke-" << i + 1 << " : ";
        for (int j = 0; j < 3; j++) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    cout << "Jumlah Yang Lulus    : " << sum(data) << endl;
    cout << "Lulus Terbesar       : " << max(data) << " (Pada baris "
         << barisMax + 1 << " kolom " << kolomMax + 1 << ")" << endl;
    cout << "Lulus Terkecil       : " << min(data) << " (Pada baris "
         << barisMin + 1 << " kolom " << kolomMin + 1 << ")" << endl;
    cout << "Rata-rata Yang Lulus : " << avg(data) << endl;
}

int main() {
    Jurusan jurusan;
    cout << "======Program Mencetak Banyak Lulusan=====" << endl << endl;
    jurusan.input();
    jurusan.output();
    return 0;
}